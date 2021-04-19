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
//    SUBROUTINE LOREN4  (DIR,P4IN,P4OUT)
//    DOUBLE PRECISION PCM2, ONMCM, EPBETA, PROD
//    DIMENSION DIR(4),P4IN(4),P4OUT(4)
//    PCM2=DIR(1)*DIR(1)+DIR(2)*DIR(2)+DIR(3)*DIR(3)
//    ONMCM=1.D0/DSQRT (DIR(4)*DIR(4)-PCM2)
//    EPBETA=P4IN(1)*DIR(1)+P4IN(2)*DIR(2)+P4IN(3)*DIR(3)
//    PROD=EPBETA*(DIR(4)*ONMCM-1.D0)/PCM2-P4IN(4)*ONMCM
//    P4OUT(4)=ONMCM*(P4IN(4)*DIR(4)-EPBETA)
//       DO 50 I=1,3
// 50 P4OUT(I)=P4IN(I)+DIR(I)*PROD
//    RETURN
//    END
void loren4(double* dir, double* p4in, double* p4out)
{
   double done = 1.0;
   double pcm2 = dir[0]*dir[0] + dir[1]*dir[1] + dir[2]*dir[2];
   double tmp  = dir[3]*dir[3] - pcm2;
   double tmp2 = TMath::Sqrt(tmp);
   double onmcm = done/tmp2;
   double onmcm = done/TMath::Sqrt(dir[3]*dir[3] - pcm2);
   double epbeta = p4in[0]*dir[0] + p4in[1]*dir[1] + p4in[2]*dir[2];
   double prod   = epbeta*(dir[3]*onmcm -done)/pcm2 - p4in[3]*onmcm;
          p4out[3] = onmcm*(p4in[3]*dir[3] - epbeta);
          for(int i=0; i<3; i++) {
           p4out[i] = p4in[i] + dir[i]*prod;
          }
}
void cross(double* v1, double* v2, double* v3)
{
  v3[0] = v1[1]*v2[2] - v1[2]*v2[1];
  v3[1] = v1[2]*v2[0] - v1[0]*v2[2];
  v3[2] = v1[0]*v2[1] - v1[1]*v2[0];
}
int  my_test_8 (){
  TFile *_file0 = TFile::Open("ntbeam_cher_r17_1_v15.root");
  TTree * tree1;
  TTree  *fChain;
  float plab[5][3];
  float prb[3];
  float Obs13_mtot;
//  short           Npi0;
  TH1F * h_001;
  TH1F * h_002;
  TH1F * h_003;
  TH2F * h_004;
  TH2F * h_005;
  TH2F * h_006;
  TH2F * h_007;
  TH2F * h_008;
  UChar_t         Npi0;
   // List of branches
  TBranch        *b_Npi0;
  TBranch        *b_plab;
//   counters
  int N_omega = 0;
//   histograms
  h_001 = new TH1F("h_001", "Number of pi0", 10, 0.0, 10.0);
  h_002 = new TH1F("h_002", "mass(pi+ pi- pi0)", 100, 0.0, 1.0);
  h_003 = new TH1F("h_003", "Normal to omega decay plane)/by MAX",22,0.0,1.1);
  h_004 = new TH2F("h_004", "Dalitz plot p2 vs p1 in omega r.f. ",100,0.0, 0.7, 100, 0.0, 0.7);
  h_005 = new TH2F("h_005", "Dalitz plot p3 vs p1 in omega r.f. ",100,0.0, 0.5, 100, 0.0, 0.5);
  h_006 = new TH2F("h_006", "X-components is the (1+2+3) c.m system ",100, -0.4, 0.4,100, -0.4, 0.4);
  h_007 = new TH2F("h_007", "Y-components is the (1+2+3) c.m system ",100, -0.4, 0.4,100, -0.4, 0.4);
  h_008 = new TH2F("h_008", "Z-components is the (1+2+3) c.m system ",100, -0.4, 0.4,100, -0.4, 0.4);
//   loop over events
        fChain =  (TTree*)gROOT->FindObject("h9024");
        if (fChain  == 0) return 0;
        cout << " found h9024 " << fChain << endl;
//      fChain->Print();
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
        double ppp = plab[1][0];
               ppp = TMath::Abs(ppp);
        double pxz = plab[1][1];
        double pyz = plab[1][2];
        double pz1 = ppp/TMath::Sqrt(1.0 + pxz*pxz + pyz*pyz);
        double px1 = plab[1][1]*pz1;
        double py1 = plab[1][2]*pz1;
        double p1sq= px1*px1 + py1*py1 + pz1*pz1;
        double e1sq= p1sq + 0.1396*0.1396;
        double p1  = TMath::Sqrt(p1sq);
        double e1  = TMath::Sqrt(e1sq);
        if(jentry<2) {
          cout << " debug " << plab[1][0] << " " << plab[1][1] << " " << plab[1][2] << endl;
          cout << px1 << " " << py1 << " " << pz1 << endl;
        }
//  2-nd secondary track, pi+ or pi-
              ppp = plab[2][0];
              ppp = TMath::Abs(ppp);
              pxz = plab[2][1];
              pyz = plab[2][2];
        double pz2 = ppp/TMath::Sqrt(1.0 + pxz*pxz + pyz*pyz);
        double px2 = plab[2][1]*pz2;
        double py2 = plab[2][2]*pz2;
        double p2sq= px2*px2 + py2*py2 + pz2*pz2;
        double e2sq= p2sq + 0.1396*0.1396;
        double p2  = TMath::Sqrt(p2sq);
        double e2  = TMath::Sqrt(e2sq);
//  3-rd secondary track, pi0 
               ppp = plab[3][0];
               ppp = TMath::Abs(ppp);
               pxz = plab[3][1];
               pyz = plab[3][2];
        double pz3 = ppp/TMath::Sqrt(1.0 + pxz*pxz + pyz*pyz);
        double px3 = plab[3][1]*pz3;
        double py3 = plab[3][2]*pz3;
        double p3sq= px3*px3 + py3*py3 + pz3*pz3;
        double e3sq= p3sq + 0.1350*0.1350;
        double p3  = TMath::Sqrt(p3sq);
        double e3  = TMath::Sqrt(e3sq);
//  get mass (pi+ pi- pi0)
        double esum = e1 + e2 + e3;
        double pxsum = px1 + px2 + px3;
        double pysum = py1 + py2 + py3;
        double pzsum = pz1 + pz2 + pz3;
        double fm3sq = esum*esum - pxsum*pxsum - pysum*pysum - pzsum*pzsum; 
        double fm3   = TMath::Sqrt(fm3sq);
        if(jentry<2) {
          cout << " sum " << esum << " " << pxsum << " " << pysum << " " << pzsum << endl;
        }
        h_002->Fill(fm3);
//  Lorenz transformation to \omega rest frame
        double  dpsum[4];
        double  dp1lab[4];
        double  dp1scm[4];
        double  dp2lab[4];
        double  dp2scm[4];
        double  dp3lab[4];
        double  dp3scm[4];
        double  dnorm[3];
//      double *dpsum[4];
//      double *dp1lab[4];
//      double *dp1scm[4];
        dpsum[0] = pxsum;
        dpsum[1] = pysum;
        dpsum[2] = pzsum;
        dpsum[3] = esum;
        dp1lab[0] = px1;  
        dp1lab[1] = py1;
        dp1lab[2] = pz1;
        dp1lab[3] = e1;
        dp2lab[0] = px2;  
        dp2lab[1] = py2;
        dp2lab[2] = pz2;
        dp2lab[3] = e2;
        dp3lab[0] = px3;  
        dp3lab[1] = py3;
        dp3lab[2] = pz3;
        dp3lab[3] = e3;
//   select \omega mass range
//      if(0.752<fm3 && fm3<0.812) {
        if(0.763<fm3 && fm3<0.803) {
           N_omega++;
//   1-st track Lorenz transformation to \omega rest frame
           loren4(dpsum, dp1lab, dp1scm);
//   2-nd track Lorenz transformation to \omega rest frame
           loren4(dpsum, dp2lab, dp2scm);
//   3-rd track Lorenz transformation to \omega rest frame
           loren4(dpsum, dp3lab, dp3scm);
//
           double p1scmtot = TMath::Sqrt(dp1scm[0]*dp1scm[0]+dp1scm[1]*dp1scm[1]+dp1scm[2]*dp1scm[2]);
           double p2scmtot = TMath::Sqrt(dp2scm[0]*dp2scm[0]+dp2scm[1]*dp2scm[1]+dp2scm[2]*dp2scm[2]);
           double p3scmtot = TMath::Sqrt(dp3scm[0]*dp3scm[0]+dp3scm[1]*dp3scm[1]+dp3scm[2]*dp3scm[2]);
           double e1scm = TMath::Sqrt(p1scmtot*p1scmtot+0.1396*0.1396);
           double e2scm = TMath::Sqrt(p2scmtot*p2scmtot+0.1396*0.1396);
           double e3scm = TMath::Sqrt(p3scmtot*p3scmtot+0.1350*0.1396);
           double fm13 = TMath::Sqrt((e1scm+e3scm)*(e1scm+e3scm)
                                 - (dp1scm[0]+dp3scm[0])*(dp1scm[0]+dp3scm[0])
                                 - (dp1scm[1]+dp3scm[1])*(dp1scm[1]+dp3scm[1])
                                 - (dp1scm[2]+dp3scm[2])*(dp1scm[2]+dp3scm[2]));
           double fm23 = TMath::Sqrt((e2scm+e3scm)*(e2scm+e3scm)
                                 - (dp2scm[0]+dp3scm[0])*(dp2scm[0]+dp3scm[0])
                                 - (dp2scm[1]+dp3scm[1])*(dp2scm[1]+dp3scm[1])
                                 - (dp2scm[2]+dp3scm[2])*(dp2scm[2]+dp3scm[2]));
           
           if(jentry%100==1) {
             cout << " p1scmtot = " << jentry << " " << p1scmtot << " " << p2scmtot << " " << p3scmtot << endl;
           }
           h_004 -> Fill( fm13, fm23);
           h_006 -> Fill( dp1scm[0], dp2scm[0]+dp3scm[0]);
           h_007 -> Fill( dp1scm[1], dp2scm[1]+dp3scm[1]);
           h_008 -> Fill( dp1scm[2], dp2scm[2]+dp3scm[2]);
        }  //   select \omega mass range
      }    //   selected events with pi0
   }
//   end of loop over events
// h_001->Draw();
// h_002->Draw();
  h_006->Draw();
  h_004->Draw("box");
//h_004->Draw("lego");

 h_004->GetXaxis()->SetTitle("f13, GeV^{2}" );
 h_004->GetYaxis()->SetTitle("f23, GeV^{2}" );
// h_004->GetXaxis()->SetTitle("m^{2}(#pi^{+}#pi^{0}), GeV^{2}" );
// h_004->GetYaxis()->SetTitle("m^{2}(#pi^{-}#pi^{0}), GeV^{2}" );
 TFile *_filewOut= TFile::Open("./ntuple_test_8_e.root", "recreate");
 h_006     -> Write();
 h_007     -> Write();
 h_008     -> Write();
 h_004     -> Write();
 _filewOut -> Close();
}
