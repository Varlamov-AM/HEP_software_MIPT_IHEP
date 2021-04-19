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
int  example_5_edited(){
  TFile *_file0 = TFile::Open("ntbeam_cher_r17_1_v15.root");
  TTree * tree1;
  TTree  *fChain;
  float plab[5][3];
  float prb[3];
  float Obs13_mtot;
//short           Npi0;
  TH1F * h_001;
  TH1F * h_002;
  UChar_t         Npi0;
   // List of branches
  TBranch        *b_Npi0;
  TBranch        *b_plab;
//   histograms
  h_001 = new TH1F("h_001", "Number of pi0", 10, 0.0, 10.0);
  h_002 = new TH1F("h_002", "mass(pi+ pi- pi0)", 100, 0.0, 1.0);
//   loop over events
        fChain =  (TTree*)gROOT->FindObject("h9024");
        if (fChain  == 0) return 0;
        cout << " found h9024 " << fChain << endl;
        fChain->Print();
        fChain->SetBranchStatus("*",0);  // disable all branches
//      fChain->SetBranchStatus("branchname",1);  // activate branchname
        fChain->SetBranchStatus("Npi0", 1);
        fChain->SetBranchStatus("plab", 1);
        fChain->SetBranchAddress("Npi0", &Npi0, &b_Npi0);
        fChain->SetBranchAddress("plab", plab, &b_plab);

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Int_t ientry = fChain->LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if(jentry<21) {
      cout << " Npi0 = " << Npi0 << endl;
      cout << " plab(0,0) = " << plab[0][0] << endl;
      }
      h_001->Fill(Npi0);
//  select events with pi0 [ NOT with eta ]
      if(Npi0>0) {
//  1-st secondary track, pi- or pi+
        float ppp = plab[1][0];
              ppp = TMath::Abs(ppp);
        float pxz = plab[1][1];
        float pyz = plab[1][2];
        float pz1 = ppp/TMath::Sqrt(1.0 + pxz*pxz + pyz*pyz);
        float px1 = plab[1][1]*pz1;
        float py1 = plab[1][2]*pz1;
        float p1sq= px1*px1 + py1*py1 + pz1*pz1;
        float e1sq= p1sq + 0.1396*0.1396;
        float p1  = TMath::Sqrt(p1sq);
        float e1  = TMath::Sqrt(e1sq);
        if(jentry<2) {
          cout << " debug " << plab[1][0] << " " << plab[1][1] << " " << plab[1][2] << endl;
          cout << px1 << " " << py1 << " " << pz1 << endl;
        }
//  2-nd secondary track, pi+ or pi-
              ppp = plab[2][0];
              ppp = TMath::Abs(ppp);
              pxz = plab[2][1];
              pyz = plab[2][2];
        float pz2 = ppp/TMath::Sqrt(1.0 + pxz*pxz + pyz*pyz);
        float px2 = plab[2][1]*pz2;
        float py2 = plab[2][2]*pz2;
        float p2sq= px2*px2 + py2*py2 + pz2*pz2;
        float e2sq= p2sq + 0.1396*0.1396;
        float p2  = TMath::Sqrt(p2sq);
        float e2  = TMath::Sqrt(e2sq);
//  3-rd secondary track, pi0 
              ppp = plab[3][0];
              ppp = TMath::Abs(ppp);
              pxz = plab[3][1];
              pyz = plab[3][2];
        float pz3 = ppp/TMath::Sqrt(1.0 + pxz*pxz + pyz*pyz);
        float px3 = plab[3][1]*pz3;
        float py3 = plab[3][2]*pz3;
        float p3sq= px3*px3 + py3*py3 + pz3*pz3;
        float e3sq= p3sq + 0.1350*0.1350;
        float p3  = TMath::Sqrt(p3sq);
        float e3  = TMath::Sqrt(e3sq);
//  get mass (pi+ pi- pi0)
//  user's code

        float fm3 = TMath::Sqrt((e1+e2+e3)*(e1+e2+e3)-((px1+px2+px3)*(px1+px2+px3)+
         (py1+py2+py3)*(py1+py2+py3)+(pz1+pz2+pz3)*(pz1+pz2+pz3)) );

        h_002->Fill(fm3);


      }    //   selected events with pi0
   }
//   end of loop over events
 h_001->Draw() ;
 h_002->Draw(); 
   TFile *_filewOut= TFile::Open("./ntuple.root", "recreate");
   h_002 -> Write();
   _filewOut -> Close();
}
