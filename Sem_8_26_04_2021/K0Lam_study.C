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

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
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
      TLorentzVector lor_pos ;
      TLorentzVector lor_neg ;
      TLorentzVector lor_sum ;

      TLorentzVector lor_posL;
      TLorentzVector lor_negA;
      float massK0;
      TH1D * h_massK0;
      h_massK0 = new  TH1D("h_massK0", "h_massK0", 80, 200., 1000.);
      TH1D * h_massLA;
      h_massLA = new  TH1D("h_massLA", "h_massLA", 80, 700., 1500.);
      TH2D * h_massK0LA;
      h_massK0LA = new TH2D("h_massK0LA", "h_massK0LA", 80, 200., 1000., 80,1000., 1800.);
      TH1D * h_massAL;
      h_massAL = new  TH1D("h_massAL", "h_massAL", 80, 700., 1500.);
   std::cout<< " entries " << fChain->GetEntriesFast() << std::endl;
   Long64_t nentries = fChain->GetEntriesFast();
   cout << " nentries = " << nentries << endl;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
       if( jentry%1000 == 1) {
        cout << " process event " << jentry << endl;
       }
      if( jentry > 16330 && jentry<16350) { std::cout << "evt = " << jentry << " pos->size() = " << pos_pt->size() << std::endl; }
      if( jentry > 16330 && jentry<16350) continue;
      
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if( jentry%1000 == 1) {
                           cout << " jentry = " << jentry <<endl;
                           cout << " pos_pt->size() " << pos_pt->size() << endl;
   //                      cout << " pos_pt->at(0) " << pos_pt->at(0) << endl;
                           }
      if( pos_pt->size() !=0) {
               dpos_pt = pos_pt->at(1);
               dpos_eta= pos_eta->at(1);
               dpos_phi= pos_phi->at(1);
               dneg_pt = neg_pt->at(1);
               dneg_eta= neg_eta->at(1);
               dneg_phi= neg_phi->at(1);
//      if( jentry%1000 == 1) {
//      cout << " pos_pt = " << dpos_pt << endl; }
        lor_pos.SetPtEtaPhiM( dpos_pt, dpos_eta, dpos_phi, mpi);
        lor_neg.SetPtEtaPhiM( dneg_pt, dneg_eta, dneg_phi, mpi);
        lor_sum = lor_pos + lor_neg;
        massK0 = lor_sum.M();
        h_massK0->Fill( massK0 );
//  Lambda
        lor_posL.SetPtEtaPhiM( dpos_pt, dpos_eta, dpos_phi, mpp);
        h_massLA->Fill( (lor_posL + lor_neg).M() );  
//  antiLambda
        lor_negA.SetPtEtaPhiM( dneg_pt, dneg_eta, dneg_phi, mpn);
        h_massAL->Fill( (lor_pos + lor_negA).M() );
        h_massK0LA->Fill( massK0, (lor_posL + lor_neg).M() );
      lor_pos.Clear();
      lor_neg.Clear();
      lor_sum.Clear();
      }
.q   }
  }
   h_massK0->Draw();
   h_massLA->Draw();
   h_massAL->Draw();
   h_massK0LA->Draw("box");
 TFile *_filewOut= TFile::Open("outfile.root", "recreate");
 h_massK0->Write();
 h_massLA->Write(); 
 h_massAL->Write();
 h_massK0LA->Write();
 _filewOut->Close();
}
