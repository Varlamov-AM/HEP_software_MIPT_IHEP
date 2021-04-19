#define test_cxx
#include "test.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
 static TTree * t4ev;
 static int  ntape_t4;
 static int  nspil_t4;
 static int  nevt_t4;
 static double m3pi;

void test::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L test.C
//      Root > test t
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

   t4ev = new TTree("t4ev", "t4ev" );
   t4ev->Branch( "ntape_t4", &ntape_t4, "ntape_t4/I");
   t4ev->Branch( "nspil_t4", &nspil_t4, "nspil_t4/I");
   t4ev->Branch( "nevt_t4",  &nevt_t4,  "nevt_t4/I");   
   t4ev->Branch( "m3pi",     &m3pi,     "m3pi/D");

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      ntape_t4 = Itape;
      nspil_t4 = Ispln;
      nevt_t4  = Ievtn;
      m3pi     = 0;
      t4ev->Fill();     
   }
   t4ev->AutoSave();
   TFile * _filewOut = TFile::Open("./nt_3pi_short.root", "recreate");
   t4ev->Write();
   _filewOut ->Close();
}
