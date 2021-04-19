#include <fstream.h>
#include <TF1.h>
#include <TF2.h>
#include <TH1.h>
#include <TH2.h>
#include <TProfile.h>
#include <TList.h>
#include <TAttText.h>
#include <TText.h>
#include <TString.h>
#include "TRegexp.h"
#include <TCanvas.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TLine.h>
#include <TFile.h>
#include <TTree.h>
#include <TAttLine.h>
#include <TPostScript.h>
#include <TStyle.h>
#include <TUnixSystem.h>

#include "TApplication.h"
#include "TLorentzVector.h"
#include "TLorentzRotation.h"
#include "TROOT.h"
int  example_2_edited(){
  TFile *_file0 = TFile::Open("ntbeam_cher_r17_1_v15.root");
  TTree * tree1;
  TTree  *fChain;
  float plab[5][3];
  float prb[3];
  float Obs13_mtot;
//short           Npi0;
  TH1F * h_001;
  UChar_t         Npi0;
   // List of branches
  TBranch        *b_Npi0;
//   histograms
  h_001 = new TH1F("h_001", "Number of pi0", 10, 0.0, 10.0);
//   loop over events
        fChain =  (TTree*)gROOT->FindObject("h9024");
        if (fChain  == 0) return 0;
        cout << " found h9024 " << fChain << endl;
        fChain->Print();
        fChain->SetBranchStatus("*",0);  // disable all branches
//      fChain->SetBranchStatus("branchname",1);  // activate branchname
        fChain->SetBranchStatus("Npi0", 1);
        fChain->SetBranchAddress("Npi0", &Npi0, &b_Npi0);

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Int_t ientry = fChain->LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if(jentry<21) {
      cout << " Npi0 = " << Npi0 << endl;
      }
      h_001->Fill(Npi0);
   }
//   end of loop over events
 h_001->Draw();
}
