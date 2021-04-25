#define K0Lam_study_cxx
#include "K0Lam_study.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TLorentzVector.h"

void K0Lam_study::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L K0Lam_study.C
//      Root > K0Lam_study t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
 

  if (fChain == 0) return;

   fChain->SetBranchStatus("pos_pt",1);
   fChain->SetBranchStatus("pos_eta",1);
   fChain->SetBranchStatus("pos_phi",1);
   fChain->SetBranchStatus("neg_pt",1);
   fChain->SetBranchStatus("neg_eta",1);
   fChain->SetBranchStatus("neg_phi",1);
   float mpi = 139.57;
   float mpp = 938.27;
   float mpn = 938.27;
        float  dpos_pt = 0;
        float  dpos_eta= 0;
        float  dpos_phi= 0;
        float  dneg_pt = 0;
        float  dneg_eta= 0;
        float  dneg_phi= 0;
      TLorentzVector lor_pos;
      TLorentzVector lor_neg;
      TLorentzVector lor_sum;
      TH1D * h_massK0;
      h_massK0 = new  TH1D("h_massK0", "h_massK0", 80, 200., 1000.);

   Long64_t nentries = fChain->GetEntriesFast();
   cout << " nentries = " << nentries << endl;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      if( jentry%1000 == 1) {
        cout << " process event " << jentry << endl;
       }
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if( jentry%1000 == 1) {
                           cout << " jentry = " << jentry <<endl;
                           cout << " pos_pt->size() " << pos_pt->size() << endl;
                           cout << " pos_pt->at(0) " << pos_pt->at(0) << endl;
                           }
      if( pos_pt->size() !=0) {
               dpos_pt = pos_pt->at(1);
               dpos_eta= pos_eta->at(1);
               dpos_phi= pos_phi->at(1);
               dneg_pt = neg_pt->at(1);
               dneg_eta= neg_eta->at(1);
               dneg_phi= neg_phi->at(1);
        if( jentry%1000 == 1) {
        cout << " pos_pt = " << dpos_pt << endl; }
        lor_pos.SetPtEtaPhiM( dpos_pt, dpos_eta, dpos_phi, mpi);
        lor_neg.SetPtEtaPhiM( dneg_pt, dneg_eta, dneg_phi, mpi);
        lor_sum = lor_pos + lor_neg;
        massK0 = lor_sum.M();
        h_massK0->Fill( massK0 );
      }
   }
   h_massK0->Draw();
 TFile *_filewOut= TFile::Open("outfile.root", "recreate");
 h_massK0->Write();
 _filewOut->Close();
}
