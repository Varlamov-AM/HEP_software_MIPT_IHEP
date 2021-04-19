#define oscillation_cxx
#include "oscillation.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void oscillation::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L oscillation.C
//      Root > oscillation t
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
   fChain->SetBranchStatus("*",0); // disable all branches
   fChain->SetBranchStatus("B_mass", 1);
   fChain->SetBranchStatus("B_chi2_ndof", 1);
   fChain->SetBranchStatus("B_A0xy_MinA0", 1); // Bs lifetime
   fChain->SetBranchStatus("B_tau_MinA0", 1); // Bs lifetime
   fChain->SetBranchStatus("new_v2", 1);// tagging


   TH1D* hist_tau_tagpos;
   TH1D* hist_tau_tagneg;
   TH1D* hist_tau_tagdif;


   hist_tau_tagpos = new TH1D("hist_tau_tagpos", "hist_tau_tagpos", 104, -0.707725, 3.89249);
   hist_tau_tagneg = new TH1D("hist_tau_tagneg", "hist_tau_tagpos", 104, -0.707725, 3.89249);
   hist_tau_tagdif = new TH1D("hist_tau_tagdif", "hist_tau_tagdif", 104, -0.707725, 3.89249);

   hist_tau_tagpos->Sumw2();
   hist_tau_tagneg->Sumw2();
   hist_tau_tagdif->Sumw2();



   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if( jentry%10000 ==1) cout << " jentry = " << jentry << endl;

      if( B_chi2_ndof < 3.0) {
          if( 5316.<B_mass && B_mass<5416.) {
              if( new_v2 != 0) {
                  if( new_v2 > 0.99) {	
		      hist_tau_tagpos->Fill(B_tau_MinA0 );
		  }
		  if( new_v2 < -0.99) {
                      hist_tau_tagneg->Fill(B_tau_MinA0 );
                  }
	      }
          }
      } 
   }

   hist_tau_tagdif->Add(hist_tau_tagpos, hist_tau_tagneg, 1., -1.);

   
   TFile *_filewOut= TFile::Open("output.root", "RECREATE");
   hist_tau_tagpos->Write();
   hist_tau_tagneg->Write();
   hist_tau_tagdif->Write();
   _filewOut->Close();


	
}
