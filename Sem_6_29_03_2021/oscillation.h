//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr  5 13:09:57 2021 by ROOT version 5.34/32
// from TTree BsBestChi/BsBestChi
// found on file: data15_data16_data_17_data18_Comdined_p3601.root
//////////////////////////////////////////////////////////

#ifndef oscillation_h
#define oscillation_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class oscillation {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          run_number;
   UInt_t          lumi_block;
   ULong64_t       evt_number;
   Float_t         BeamPos_x;
   Float_t         BeamPos_y;
   Float_t         BeamPos_z;
   Float_t         BeamPosSig_x;
   Float_t         BeamPosSig_y;
   Float_t         BeamPosSig_z;
   Float_t         el_tag_medium;
   Float_t         el_tag_tight;
   Int_t           n_electrons;
   Float_t         el_tag_eta;
   Float_t         el_tag_pt;
   Bool_t          pass_GRL;
   Float_t         B_mass;
   Float_t         B_mass_err;
   Float_t         B_rapidity;
   Float_t         B_pT;
   Float_t         B_pT_err;
   Float_t         B_Lxy_MaxSumPt;
   Float_t         B_Lxy_MaxSumPt_err;
   Float_t         B_A0_MaxSumPt;
   Float_t         B_A0_MaxSumPt_err;
   Float_t         B_A0xy_MaxSumPt;
   Float_t         B_A0xy_MaxSumPt_err;
   Float_t         B_Z0_MaxSumPt;
   Float_t         B_Z0_MaxSumPt_err;
   Float_t         B_tau_MaxSumPt;
   Float_t         B_tau_MaxSumPt_err;
   Float_t         B_Lxy_MinA0;
   Float_t         B_Lxy_MinA0_err;
   Float_t         B_A0_MinA0;
   Float_t         B_A0_MinA0_err;
   Float_t         B_A0xy_MinA0;
   Float_t         B_A0xy_MinA0_err;
   Float_t         B_Z0_MinA0;
   Float_t         B_Z0_MinA0_err;
   Float_t         B_tau_MinA0;
   Float_t         B_tau_MinA0_err;
   Float_t         B_Lxy_MinZ0;
   Float_t         B_Lxy_MinZ0_err;
   Float_t         B_A0_MinZ0;
   Float_t         B_A0_MinZ0_err;
   Float_t         B_A0xy_MinZ0;
   Float_t         B_A0xy_MinZ0_err;
   Float_t         B_Z0_MinZ0;
   Float_t         B_Z0_MinZ0_err;
   Float_t         B_tau_MinZ0;
   Float_t         B_tau_MinZ0_err;
   Float_t         B_chi2_ndof;
   Float_t         B_mu1_eta;
   Float_t         B_mu1_phi;
   Float_t         B_mu1_pT;
   Float_t         B_mu1_charge;
   Float_t         B_mu1_d0;
   Float_t         B_mu1_extrapd0_minA0;
   Float_t         B_mu2_eta;
   Float_t         B_mu2_phi;
   Float_t         B_mu2_pT;
   Float_t         B_mu2_charge;
   Float_t         B_mu2_d0;
   Float_t         B_mu2_extrapd0_minA0;
   Int_t           B_mu1_muonqual;
   Int_t           B_mu2_muonqual;
   Int_t           B_had1_muonqual;
   Int_t           B_had2_muonqual;
   Float_t         B_trk1_eta;
   Float_t         B_trk2_eta;
   Float_t         B_trk1_phi;
   Float_t         B_trk2_phi;
   Float_t         B_trk1_pT;
   Float_t         B_trk2_pT;
   Float_t         B_trk1_charge;
   Float_t         B_trk2_charge;
   Float_t         B_trk1_d0;
   Float_t         B_trk1_extrapd0_minA0;
   Float_t         B_trk2_d0;
   Float_t         B_trk2_extrapd0_minA0;
   UChar_t         B_Jpsi_index;
   Float_t         B_Jpsi_mass;
   Float_t         Jpsi_mass;
   Float_t         Jpsi_rapidity;
   Float_t         Jpsi_pT;
   Float_t         Jpsi_chi2;
   Float_t         Jpsi_mu1_eta;
   Float_t         Jpsi_mu1_pT;
   Float_t         Jpsi_mu2_eta;
   Float_t         Jpsi_mu2_pT;
   Int_t           MaxSumPt_orig_ntrk;
   Int_t           MaxSumPt_ref_ntrk;
   Int_t           MaxSumPt_ref_stat;
   Int_t           MinA0_orig_ntrk;
   Int_t           MinA0_ref_ntrk;
   Int_t           MinA0_ref_stat;
   Int_t           MinZ0_orig_ntrk;
   Int_t           MinZ0_ref_ntrk;
   Int_t           MinZ0_ref_stat;
   Int_t           MaxSumPt_vertextype;
   Int_t           MinA0_vertextype;
   Int_t           MinZ0_vertextype;
   Float_t         MaxSumPt_SumPt;
   Float_t         MaxSumPt_SumPtSq;
   Float_t         MinA0_SumPt;
   Float_t         MinA0_SumPtSq;
   Float_t         MinZ0_SumPt;
   Float_t         MinZ0_SumPtSq;
   Float_t         Orig_MaxSumPt_SumPt;
   Float_t         Orig_MaxSumPt_SumPtSq;
   Float_t         Orig_MinA0_SumPt;
   Float_t         Orig_MinA0_SumPtSq;
   Float_t         Orig_MinZ0_SumPt;
   Float_t         Orig_MinZ0_SumPtSq;
   Float_t         KK_massRF;
   Float_t         KK_mass;
   Int_t           IBLhits;
   Int_t           SCThitsmu1;
   Int_t           SCThitsmu2;
   Int_t           SCThithad1;
   Int_t           SCThithad2;
   Short_t         PartTypehad1;
   Short_t         PartTypehad2;
   Float_t         TRANS_phi;
   Float_t         TRANS_costheta;
   Float_t         HELTRANS_costheta2;
   Float_t         HEL_costheta1;
   Float_t         HEL_chi;
   Bool_t          exclusiveTrueBs;
   Bool_t          inclusiveTrueBs;
   Bool_t          m_HLT_2mu4_bBmumuxv2_EFBMuMuXFex_type9;
   vector<float>   *mu1_coVar;
   vector<float>   *mu2_coVar;
   vector<float>   *had1_coVar;
   vector<float>   *had2_coVar;
   Float_t         Jpsi_Lxy_MaxSumPt;
   Float_t         Jpsi_Lxy_MaxSumPt_err;
   Float_t         PV_minA0_x;
   Float_t         PV_minA0_y;
   Float_t         PV_minA0_z;
   Float_t         orig_PV_minA0_x;
   Float_t         orig_PV_minA0_y;
   Float_t         orig_PV_minA0_z;
   Float_t         SecVtx_x;
   Float_t         SecVtx_y;
   Float_t         SecVtx_z;
   vector<float>   *new_cone_trk_charge;
   vector<float>   *new_cone_trk_eta;
   vector<float>   *new_cone_trk_phi;
   vector<float>   *new_cone_trk_pt;
   vector<float>   *new_cone_trk_z0;
   vector<float>   *new_cone_trk_d0;
   Int_t           nPV;
   Int_t           nTracks;
   Float_t         averageInteractionsPerCrossing;
   Float_t         actualInteractionsPerCrossing;
   vector<float>   *TagMuonConeLowPtDR_TagValue;
   vector<int>     *TagMuonConeLowPtDR_VTX_index;
   vector<int>     *TagMuonConeLowPtDR_index;
   vector<float>   *TagMuonConeTightDR_TagValue;
   vector<int>     *TagMuonConeTightDR_VTX_index;
   vector<int>     *TagMuonConeTightDR_index;
   vector<float>   *TagJet_TestMinDR_TagValue;
   vector<int>     *TagJet_TestMinDR_VTX_index;
   vector<int>     *TagJet_TestMinDR_index;
   vector<float>   *TagJet_TestMinDR_WeightValue;
   vector<float>   *TagJet_TestMinDR_jet_pt;
   vector<float>   *TagJet_TestMinDR_jet_eta;
   vector<float>   *TagJet_TestMinDR_jet_phi;
   vector<int>     *TagJet_TestMinDR_jet_idx;
   vector<float>   *TagJet_TestMinDR_MV2c10;
   vector<float>   *TagJet_TestMinDR_MV2c20;
   vector<int>     *TagJet_TestMinDR_pass_MV2c20_FixedCutBEff_70;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         samesideS;
   Float_t         new_v;
   Float_t         new_v2;

   // List of branches
   TBranch        *b_run_number;   //!
   TBranch        *b_lumi_block;   //!
   TBranch        *b_evt_number;   //!
   TBranch        *b_BeamPos_x;   //!
   TBranch        *b_BeamPos_y;   //!
   TBranch        *b_BeamPos_z;   //!
   TBranch        *b_BeamPosSig_x;   //!
   TBranch        *b_BeamPosSig_y;   //!
   TBranch        *b_BeamPosSig_z;   //!
   TBranch        *b_el_tag_medium;   //!
   TBranch        *b_el_tag_tight;   //!
   TBranch        *b_n_electrons;   //!
   TBranch        *b_el_tag_eta;   //!
   TBranch        *b_el_tag_pt;   //!
   TBranch        *b_pass_GRL;   //!
   TBranch        *b_B_mass;   //!
   TBranch        *b_B_mass_err;   //!
   TBranch        *b_B_rapidity;   //!
   TBranch        *b_B_pT;   //!
   TBranch        *b_B_pT_err;   //!
   TBranch        *b_B_Lxy_MaxSumPt;   //!
   TBranch        *b_B_Lxy_MaxSumPt_err;   //!
   TBranch        *b_B_A0_MaxSumPt;   //!
   TBranch        *b_B_A0_MaxSumPt_err;   //!
   TBranch        *b_B_A0xy_MaxSumPt;   //!
   TBranch        *b_B_A0xy_MaxSumPt_err;   //!
   TBranch        *b_B_Z0_MaxSumPt;   //!
   TBranch        *b_B_Z0_MaxSumPt_err;   //!
   TBranch        *b_B_tau_MaxSumPt;   //!
   TBranch        *b_B_tau_MaxSumPt_err;   //!
   TBranch        *b_B_Lxy_MinA0;   //!
   TBranch        *b_B_Lxy_MinA0_err;   //!
   TBranch        *b_B_A0_MinA0;   //!
   TBranch        *b_B_A0_MinA0_err;   //!
   TBranch        *b_B_A0xy_MinA0;   //!
   TBranch        *b_B_A0xy_MinA0_err;   //!
   TBranch        *b_B_Z0_MinA0;   //!
   TBranch        *b_B_Z0_MinA0_err;   //!
   TBranch        *b_B_tau_MinA0;   //!
   TBranch        *b_B_tau_MinA0_err;   //!
   TBranch        *b_B_Lxy_MinZ0;   //!
   TBranch        *b_B_Lxy_MinZ0_err;   //!
   TBranch        *b_B_A0_MinZ0;   //!
   TBranch        *b_B_A0_MinZ0_err;   //!
   TBranch        *b_B_A0xy_MinZ0;   //!
   TBranch        *b_B_A0xy_MinZ0_err;   //!
   TBranch        *b_B_Z0_MinZ0;   //!
   TBranch        *b_B_Z0_MinZ0_err;   //!
   TBranch        *b_B_tau_MinZ0;   //!
   TBranch        *b_B_tau_MinZ0_err;   //!
   TBranch        *b_B_chi2_ndof;   //!
   TBranch        *b_B_mu1_eta;   //!
   TBranch        *b_B_mu1_phi;   //!
   TBranch        *b_B_mu1_pT;   //!
   TBranch        *b_B_mu1_charge;   //!
   TBranch        *b_B_mu1_d0;   //!
   TBranch        *b_B_mu1_extrapd0_minA0;   //!
   TBranch        *b_B_mu2_eta;   //!
   TBranch        *b_B_mu2_phi;   //!
   TBranch        *b_B_mu2_pT;   //!
   TBranch        *b_B_mu2_charge;   //!
   TBranch        *b_B_mu2_d0;   //!
   TBranch        *b_B_mu2_extrapd0_minA0;   //!
   TBranch        *b_B_mu1_muonqual;   //!
   TBranch        *b_B_mu2_muonqual;   //!
   TBranch        *b_B_had1_muonqual;   //!
   TBranch        *b_B_had2_muonqual;   //!
   TBranch        *b_B_trk1_eta;   //!
   TBranch        *b_B_trk2_eta;   //!
   TBranch        *b_B_trk1_phi;   //!
   TBranch        *b_B_trk2_phi;   //!
   TBranch        *b_B_trk1_pT;   //!
   TBranch        *b_B_trk2_pT;   //!
   TBranch        *b_B_trk1_charge;   //!
   TBranch        *b_B_trk2_charge;   //!
   TBranch        *b_B_trk1_d0;   //!
   TBranch        *b_B_trk1_extrapd0_minA0;   //!
   TBranch        *b_B_trk2_d0;   //!
   TBranch        *b_B_trk2_extrapd0_minA0;   //!
   TBranch        *b_B_Jpsi_index;   //!
   TBranch        *b_B_Jpsi_mass;   //!
   TBranch        *b_Jpsi_mass;   //!
   TBranch        *b_Jpsi_rapidity;   //!
   TBranch        *b_Jpsi_pT;   //!
   TBranch        *b_Jpsi_chi2;   //!
   TBranch        *b_Jpsi_mu1_eta;   //!
   TBranch        *b_Jpsi_mu1_pT;   //!
   TBranch        *b_Jpsi_mu2_eta;   //!
   TBranch        *b_Jpsi_mu2_pT;   //!
   TBranch        *b_MaxSumPt_orig_ntrk;   //!
   TBranch        *b_MaxSumPt_ref_ntrk;   //!
   TBranch        *b_MaxSumPt_ref_stat;   //!
   TBranch        *b_MinA0_orig_ntrk;   //!
   TBranch        *b_MinA0_ref_ntrk;   //!
   TBranch        *b_MinA0_ref_stat;   //!
   TBranch        *b_MinZ0_orig_ntrk;   //!
   TBranch        *b_MinZ0_ref_ntrk;   //!
   TBranch        *b_MinZ0_ref_stat;   //!
   TBranch        *b_MaxSumPt_vertextype;   //!
   TBranch        *b_MinA0_vertextype;   //!
   TBranch        *b_MinZ0_vertextype;   //!
   TBranch        *b_MaxSumPt_SumPt;   //!
   TBranch        *b_MaxSumPt_SumPtSq;   //!
   TBranch        *b_MinA0_SumPt;   //!
   TBranch        *b_MinA0_SumPtSq;   //!
   TBranch        *b_MinZ0_SumPt;   //!
   TBranch        *b_MinZ0_SumPtSq;   //!
   TBranch        *b_Orig_MaxSumPt_SumPt;   //!
   TBranch        *b_Orig_MaxSumPt_SumPtSq;   //!
   TBranch        *b_Orig_MinA0_SumPt;   //!
   TBranch        *b_Orig_MinA0_SumPtSq;   //!
   TBranch        *b_Orig_MinZ0_SumPt;   //!
   TBranch        *b_Orig_MinZ0_SumPtSq;   //!
   TBranch        *b_KK_massRF;   //!
   TBranch        *b_KK_mass;   //!
   TBranch        *b_IBLhits;   //!
   TBranch        *b_SCThitsmu1;   //!
   TBranch        *b_SCThitsmu2;   //!
   TBranch        *b_SCThithad1;   //!
   TBranch        *b_SCThithad2;   //!
   TBranch        *b_PartTypehad1;   //!
   TBranch        *b_PartTypehad2;   //!
   TBranch        *b_TRANS_phi;   //!
   TBranch        *b_TRANS_costheta;   //!
   TBranch        *b_HELTRANS_costheta2;   //!
   TBranch        *b_HEL_costheta1;   //!
   TBranch        *b_HEL_chi;   //!
   TBranch        *b_exclusiveTrueBs;   //!
   TBranch        *b_inclusiveTrueBs;   //!
   TBranch        *b_m_HLT_2mu4_bBmumuxv2_EFBMuMuXFex_type9;   //!
   TBranch        *b_mu1_coVar;   //!
   TBranch        *b_mu2_coVar;   //!
   TBranch        *b_had1_coVar;   //!
   TBranch        *b_had2_coVar;   //!
   TBranch        *b_Jpsi_Lxy_MaxSumPt;   //!
   TBranch        *b_Jpsi_Lxy_MaxSumPt_err;   //!
   TBranch        *b_PV_minA0_x;   //!
   TBranch        *b_PV_minA0_y;   //!
   TBranch        *b_PV_minA0_z;   //!
   TBranch        *b_orig_PV_minA0_x;   //!
   TBranch        *b_orig_PV_minA0_y;   //!
   TBranch        *b_orig_PV_minA0_z;   //!
   TBranch        *b_SecVtx_x;   //!
   TBranch        *b_SecVtx_y;   //!
   TBranch        *b_SecVtx_z;   //!
   TBranch        *b_new_cone_trk_charge;   //!
   TBranch        *b_new_cone_trk_eta;   //!
   TBranch        *b_new_cone_trk_phi;   //!
   TBranch        *b_new_cone_trk_pt;   //!
   TBranch        *b_new_cone_trk_z0;   //!
   TBranch        *b_new_cone_trk_d0;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_averageInteractionsPerCrossing;   //!
   TBranch        *b_actualInteractionsPerCrossing;   //!
   TBranch        *b_TagMuonConeLowPtDR_TagValue;   //!
   TBranch        *b_TagMuonConeLowPtDR_VTX_index;   //!
   TBranch        *b_TagMuonConeLowPtDR_index;   //!
   TBranch        *b_TagMuonConeTightDR_TagValue;   //!
   TBranch        *b_TagMuonConeTightDR_VTX_index;   //!
   TBranch        *b_TagMuonConeTightDR_index;   //!
   TBranch        *b_TagJet_TestMinDR_TagValue;   //!
   TBranch        *b_TagJet_TestMinDR_VTX_index;   //!
   TBranch        *b_TagJet_TestMinDR_index;   //!
   TBranch        *b_TagJet_TestMinDR_WeightValue;   //!
   TBranch        *b_TagJet_TestMinDR_jet_pt;   //!
   TBranch        *b_TagJet_TestMinDR_jet_eta;   //!
   TBranch        *b_TagJet_TestMinDR_jet_phi;   //!
   TBranch        *b_TagJet_TestMinDR_jet_idx;   //!
   TBranch        *b_TagJet_TestMinDR_MV2c10;   //!
   TBranch        *b_TagJet_TestMinDR_MV2c20;   //!
   TBranch        *b_TagJet_TestMinDR_pass_MV2c20_FixedCutBEff_70;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_samesideS;   //!
   TBranch        *b_new_v;   //!
   TBranch        *b_new_v2;   //!

   oscillation(TTree *tree=0);
   virtual ~oscillation();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef oscillation_cxx
oscillation::oscillation(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data15_data16_data_17_data18_Comdined_p3601.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("data15_data16_data_17_data18_Comdined_p3601.root");
      }
      f->GetObject("BsBestChi",tree);

   }
   Init(tree);
}

oscillation::~oscillation()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t oscillation::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t oscillation::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void oscillation::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   mu1_coVar = 0;
   mu2_coVar = 0;
   had1_coVar = 0;
   had2_coVar = 0;
   new_cone_trk_charge = 0;
   new_cone_trk_eta = 0;
   new_cone_trk_phi = 0;
   new_cone_trk_pt = 0;
   new_cone_trk_z0 = 0;
   new_cone_trk_d0 = 0;
   TagMuonConeLowPtDR_TagValue = 0;
   TagMuonConeLowPtDR_VTX_index = 0;
   TagMuonConeLowPtDR_index = 0;
   TagMuonConeTightDR_TagValue = 0;
   TagMuonConeTightDR_VTX_index = 0;
   TagMuonConeTightDR_index = 0;
   TagJet_TestMinDR_TagValue = 0;
   TagJet_TestMinDR_VTX_index = 0;
   TagJet_TestMinDR_index = 0;
   TagJet_TestMinDR_WeightValue = 0;
   TagJet_TestMinDR_jet_pt = 0;
   TagJet_TestMinDR_jet_eta = 0;
   TagJet_TestMinDR_jet_phi = 0;
   TagJet_TestMinDR_jet_idx = 0;
   TagJet_TestMinDR_MV2c10 = 0;
   TagJet_TestMinDR_MV2c20 = 0;
   TagJet_TestMinDR_pass_MV2c20_FixedCutBEff_70 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
   fChain->SetBranchAddress("lumi_block", &lumi_block, &b_lumi_block);
   fChain->SetBranchAddress("evt_number", &evt_number, &b_evt_number);
   fChain->SetBranchAddress("BeamPos_x", &BeamPos_x, &b_BeamPos_x);
   fChain->SetBranchAddress("BeamPos_y", &BeamPos_y, &b_BeamPos_y);
   fChain->SetBranchAddress("BeamPos_z", &BeamPos_z, &b_BeamPos_z);
   fChain->SetBranchAddress("BeamPosSig_x", &BeamPosSig_x, &b_BeamPosSig_x);
   fChain->SetBranchAddress("BeamPosSig_y", &BeamPosSig_y, &b_BeamPosSig_y);
   fChain->SetBranchAddress("BeamPosSig_z", &BeamPosSig_z, &b_BeamPosSig_z);
   fChain->SetBranchAddress("el_tag_medium", &el_tag_medium, &b_el_tag_medium);
   fChain->SetBranchAddress("el_tag_tight", &el_tag_tight, &b_el_tag_tight);
   fChain->SetBranchAddress("n_electrons", &n_electrons, &b_n_electrons);
   fChain->SetBranchAddress("el_tag_eta", &el_tag_eta, &b_el_tag_eta);
   fChain->SetBranchAddress("el_tag_pt", &el_tag_pt, &b_el_tag_pt);
   fChain->SetBranchAddress("pass_GRL", &pass_GRL, &b_pass_GRL);
   fChain->SetBranchAddress("B_mass", &B_mass, &b_B_mass);
   fChain->SetBranchAddress("B_mass_err", &B_mass_err, &b_B_mass_err);
   fChain->SetBranchAddress("B_rapidity", &B_rapidity, &b_B_rapidity);
   fChain->SetBranchAddress("B_pT", &B_pT, &b_B_pT);
   fChain->SetBranchAddress("B_pT_err", &B_pT_err, &b_B_pT_err);
   fChain->SetBranchAddress("B_Lxy_MaxSumPt", &B_Lxy_MaxSumPt, &b_B_Lxy_MaxSumPt);
   fChain->SetBranchAddress("B_Lxy_MaxSumPt_err", &B_Lxy_MaxSumPt_err, &b_B_Lxy_MaxSumPt_err);
   fChain->SetBranchAddress("B_A0_MaxSumPt", &B_A0_MaxSumPt, &b_B_A0_MaxSumPt);
   fChain->SetBranchAddress("B_A0_MaxSumPt_err", &B_A0_MaxSumPt_err, &b_B_A0_MaxSumPt_err);
   fChain->SetBranchAddress("B_A0xy_MaxSumPt", &B_A0xy_MaxSumPt, &b_B_A0xy_MaxSumPt);
   fChain->SetBranchAddress("B_A0xy_MaxSumPt_err", &B_A0xy_MaxSumPt_err, &b_B_A0xy_MaxSumPt_err);
   fChain->SetBranchAddress("B_Z0_MaxSumPt", &B_Z0_MaxSumPt, &b_B_Z0_MaxSumPt);
   fChain->SetBranchAddress("B_Z0_MaxSumPt_err", &B_Z0_MaxSumPt_err, &b_B_Z0_MaxSumPt_err);
   fChain->SetBranchAddress("B_tau_MaxSumPt", &B_tau_MaxSumPt, &b_B_tau_MaxSumPt);
   fChain->SetBranchAddress("B_tau_MaxSumPt_err", &B_tau_MaxSumPt_err, &b_B_tau_MaxSumPt_err);
   fChain->SetBranchAddress("B_Lxy_MinA0", &B_Lxy_MinA0, &b_B_Lxy_MinA0);
   fChain->SetBranchAddress("B_Lxy_MinA0_err", &B_Lxy_MinA0_err, &b_B_Lxy_MinA0_err);
   fChain->SetBranchAddress("B_A0_MinA0", &B_A0_MinA0, &b_B_A0_MinA0);
   fChain->SetBranchAddress("B_A0_MinA0_err", &B_A0_MinA0_err, &b_B_A0_MinA0_err);
   fChain->SetBranchAddress("B_A0xy_MinA0", &B_A0xy_MinA0, &b_B_A0xy_MinA0);
   fChain->SetBranchAddress("B_A0xy_MinA0_err", &B_A0xy_MinA0_err, &b_B_A0xy_MinA0_err);
   fChain->SetBranchAddress("B_Z0_MinA0", &B_Z0_MinA0, &b_B_Z0_MinA0);
   fChain->SetBranchAddress("B_Z0_MinA0_err", &B_Z0_MinA0_err, &b_B_Z0_MinA0_err);
   fChain->SetBranchAddress("B_tau_MinA0", &B_tau_MinA0, &b_B_tau_MinA0);
   fChain->SetBranchAddress("B_tau_MinA0_err", &B_tau_MinA0_err, &b_B_tau_MinA0_err);
   fChain->SetBranchAddress("B_Lxy_MinZ0", &B_Lxy_MinZ0, &b_B_Lxy_MinZ0);
   fChain->SetBranchAddress("B_Lxy_MinZ0_err", &B_Lxy_MinZ0_err, &b_B_Lxy_MinZ0_err);
   fChain->SetBranchAddress("B_A0_MinZ0", &B_A0_MinZ0, &b_B_A0_MinZ0);
   fChain->SetBranchAddress("B_A0_MinZ0_err", &B_A0_MinZ0_err, &b_B_A0_MinZ0_err);
   fChain->SetBranchAddress("B_A0xy_MinZ0", &B_A0xy_MinZ0, &b_B_A0xy_MinZ0);
   fChain->SetBranchAddress("B_A0xy_MinZ0_err", &B_A0xy_MinZ0_err, &b_B_A0xy_MinZ0_err);
   fChain->SetBranchAddress("B_Z0_MinZ0", &B_Z0_MinZ0, &b_B_Z0_MinZ0);
   fChain->SetBranchAddress("B_Z0_MinZ0_err", &B_Z0_MinZ0_err, &b_B_Z0_MinZ0_err);
   fChain->SetBranchAddress("B_tau_MinZ0", &B_tau_MinZ0, &b_B_tau_MinZ0);
   fChain->SetBranchAddress("B_tau_MinZ0_err", &B_tau_MinZ0_err, &b_B_tau_MinZ0_err);
   fChain->SetBranchAddress("B_chi2_ndof", &B_chi2_ndof, &b_B_chi2_ndof);
   fChain->SetBranchAddress("B_mu1_eta", &B_mu1_eta, &b_B_mu1_eta);
   fChain->SetBranchAddress("B_mu1_phi", &B_mu1_phi, &b_B_mu1_phi);
   fChain->SetBranchAddress("B_mu1_pT", &B_mu1_pT, &b_B_mu1_pT);
   fChain->SetBranchAddress("B_mu1_charge", &B_mu1_charge, &b_B_mu1_charge);
   fChain->SetBranchAddress("B_mu1_d0", &B_mu1_d0, &b_B_mu1_d0);
   fChain->SetBranchAddress("B_mu1_extrapd0_minA0", &B_mu1_extrapd0_minA0, &b_B_mu1_extrapd0_minA0);
   fChain->SetBranchAddress("B_mu2_eta", &B_mu2_eta, &b_B_mu2_eta);
   fChain->SetBranchAddress("B_mu2_phi", &B_mu2_phi, &b_B_mu2_phi);
   fChain->SetBranchAddress("B_mu2_pT", &B_mu2_pT, &b_B_mu2_pT);
   fChain->SetBranchAddress("B_mu2_charge", &B_mu2_charge, &b_B_mu2_charge);
   fChain->SetBranchAddress("B_mu2_d0", &B_mu2_d0, &b_B_mu2_d0);
   fChain->SetBranchAddress("B_mu2_extrapd0_minA0", &B_mu2_extrapd0_minA0, &b_B_mu2_extrapd0_minA0);
   fChain->SetBranchAddress("B_mu1_muonqual", &B_mu1_muonqual, &b_B_mu1_muonqual);
   fChain->SetBranchAddress("B_mu2_muonqual", &B_mu2_muonqual, &b_B_mu2_muonqual);
   fChain->SetBranchAddress("B_had1_muonqual", &B_had1_muonqual, &b_B_had1_muonqual);
   fChain->SetBranchAddress("B_had2_muonqual", &B_had2_muonqual, &b_B_had2_muonqual);
   fChain->SetBranchAddress("B_trk1_eta", &B_trk1_eta, &b_B_trk1_eta);
   fChain->SetBranchAddress("B_trk2_eta", &B_trk2_eta, &b_B_trk2_eta);
   fChain->SetBranchAddress("B_trk1_phi", &B_trk1_phi, &b_B_trk1_phi);
   fChain->SetBranchAddress("B_trk2_phi", &B_trk2_phi, &b_B_trk2_phi);
   fChain->SetBranchAddress("B_trk1_pT", &B_trk1_pT, &b_B_trk1_pT);
   fChain->SetBranchAddress("B_trk2_pT", &B_trk2_pT, &b_B_trk2_pT);
   fChain->SetBranchAddress("B_trk1_charge", &B_trk1_charge, &b_B_trk1_charge);
   fChain->SetBranchAddress("B_trk2_charge", &B_trk2_charge, &b_B_trk2_charge);
   fChain->SetBranchAddress("B_trk1_d0", &B_trk1_d0, &b_B_trk1_d0);
   fChain->SetBranchAddress("B_trk1_extrapd0_minA0", &B_trk1_extrapd0_minA0, &b_B_trk1_extrapd0_minA0);
   fChain->SetBranchAddress("B_trk2_d0", &B_trk2_d0, &b_B_trk2_d0);
   fChain->SetBranchAddress("B_trk2_extrapd0_minA0", &B_trk2_extrapd0_minA0, &b_B_trk2_extrapd0_minA0);
   fChain->SetBranchAddress("B_Jpsi_index", &B_Jpsi_index, &b_B_Jpsi_index);
   fChain->SetBranchAddress("B_Jpsi_mass", &B_Jpsi_mass, &b_B_Jpsi_mass);
   fChain->SetBranchAddress("Jpsi_mass", &Jpsi_mass, &b_Jpsi_mass);
   fChain->SetBranchAddress("Jpsi_rapidity", &Jpsi_rapidity, &b_Jpsi_rapidity);
   fChain->SetBranchAddress("Jpsi_pT", &Jpsi_pT, &b_Jpsi_pT);
   fChain->SetBranchAddress("Jpsi_chi2", &Jpsi_chi2, &b_Jpsi_chi2);
   fChain->SetBranchAddress("Jpsi_mu1_eta", &Jpsi_mu1_eta, &b_Jpsi_mu1_eta);
   fChain->SetBranchAddress("Jpsi_mu1_pT", &Jpsi_mu1_pT, &b_Jpsi_mu1_pT);
   fChain->SetBranchAddress("Jpsi_mu2_eta", &Jpsi_mu2_eta, &b_Jpsi_mu2_eta);
   fChain->SetBranchAddress("Jpsi_mu2_pT", &Jpsi_mu2_pT, &b_Jpsi_mu2_pT);
   fChain->SetBranchAddress("MaxSumPt_orig_ntrk", &MaxSumPt_orig_ntrk, &b_MaxSumPt_orig_ntrk);
   fChain->SetBranchAddress("MaxSumPt_ref_ntrk", &MaxSumPt_ref_ntrk, &b_MaxSumPt_ref_ntrk);
   fChain->SetBranchAddress("MaxSumPt_ref_stat", &MaxSumPt_ref_stat, &b_MaxSumPt_ref_stat);
   fChain->SetBranchAddress("MinA0_orig_ntrk", &MinA0_orig_ntrk, &b_MinA0_orig_ntrk);
   fChain->SetBranchAddress("MinA0_ref_ntrk", &MinA0_ref_ntrk, &b_MinA0_ref_ntrk);
   fChain->SetBranchAddress("MinA0_ref_stat", &MinA0_ref_stat, &b_MinA0_ref_stat);
   fChain->SetBranchAddress("MinZ0_orig_ntrk", &MinZ0_orig_ntrk, &b_MinZ0_orig_ntrk);
   fChain->SetBranchAddress("MinZ0_ref_ntrk", &MinZ0_ref_ntrk, &b_MinZ0_ref_ntrk);
   fChain->SetBranchAddress("MinZ0_ref_stat", &MinZ0_ref_stat, &b_MinZ0_ref_stat);
   fChain->SetBranchAddress("MaxSumPt_vertextype", &MaxSumPt_vertextype, &b_MaxSumPt_vertextype);
   fChain->SetBranchAddress("MinA0_vertextype", &MinA0_vertextype, &b_MinA0_vertextype);
   fChain->SetBranchAddress("MinZ0_vertextype", &MinZ0_vertextype, &b_MinZ0_vertextype);
   fChain->SetBranchAddress("MaxSumPt_SumPt", &MaxSumPt_SumPt, &b_MaxSumPt_SumPt);
   fChain->SetBranchAddress("MaxSumPt_SumPtSq", &MaxSumPt_SumPtSq, &b_MaxSumPt_SumPtSq);
   fChain->SetBranchAddress("MinA0_SumPt", &MinA0_SumPt, &b_MinA0_SumPt);
   fChain->SetBranchAddress("MinA0_SumPtSq", &MinA0_SumPtSq, &b_MinA0_SumPtSq);
   fChain->SetBranchAddress("MinZ0_SumPt", &MinZ0_SumPt, &b_MinZ0_SumPt);
   fChain->SetBranchAddress("MinZ0_SumPtSq", &MinZ0_SumPtSq, &b_MinZ0_SumPtSq);
   fChain->SetBranchAddress("Orig_MaxSumPt_SumPt", &Orig_MaxSumPt_SumPt, &b_Orig_MaxSumPt_SumPt);
   fChain->SetBranchAddress("Orig_MaxSumPt_SumPtSq", &Orig_MaxSumPt_SumPtSq, &b_Orig_MaxSumPt_SumPtSq);
   fChain->SetBranchAddress("Orig_MinA0_SumPt", &Orig_MinA0_SumPt, &b_Orig_MinA0_SumPt);
   fChain->SetBranchAddress("Orig_MinA0_SumPtSq", &Orig_MinA0_SumPtSq, &b_Orig_MinA0_SumPtSq);
   fChain->SetBranchAddress("Orig_MinZ0_SumPt", &Orig_MinZ0_SumPt, &b_Orig_MinZ0_SumPt);
   fChain->SetBranchAddress("Orig_MinZ0_SumPtSq", &Orig_MinZ0_SumPtSq, &b_Orig_MinZ0_SumPtSq);
   fChain->SetBranchAddress("KK_massRF", &KK_massRF, &b_KK_massRF);
   fChain->SetBranchAddress("KK_mass", &KK_mass, &b_KK_mass);
   fChain->SetBranchAddress("IBLhits", &IBLhits, &b_IBLhits);
   fChain->SetBranchAddress("SCThitsmu1", &SCThitsmu1, &b_SCThitsmu1);
   fChain->SetBranchAddress("SCThitsmu2", &SCThitsmu2, &b_SCThitsmu2);
   fChain->SetBranchAddress("SCThithad1", &SCThithad1, &b_SCThithad1);
   fChain->SetBranchAddress("SCThithad2", &SCThithad2, &b_SCThithad2);
   fChain->SetBranchAddress("PartTypehad1", &PartTypehad1, &b_PartTypehad1);
   fChain->SetBranchAddress("PartTypehad2", &PartTypehad2, &b_PartTypehad2);
   fChain->SetBranchAddress("TRANS_phi", &TRANS_phi, &b_TRANS_phi);
   fChain->SetBranchAddress("TRANS_costheta", &TRANS_costheta, &b_TRANS_costheta);
   fChain->SetBranchAddress("HELTRANS_costheta2", &HELTRANS_costheta2, &b_HELTRANS_costheta2);
   fChain->SetBranchAddress("HEL_costheta1", &HEL_costheta1, &b_HEL_costheta1);
   fChain->SetBranchAddress("HEL_chi", &HEL_chi, &b_HEL_chi);
   fChain->SetBranchAddress("exclusiveTrueBs", &exclusiveTrueBs, &b_exclusiveTrueBs);
   fChain->SetBranchAddress("inclusiveTrueBs", &inclusiveTrueBs, &b_inclusiveTrueBs);
   fChain->SetBranchAddress("m_HLT_2mu4_bBmumuxv2_EFBMuMuXFex_type9", &m_HLT_2mu4_bBmumuxv2_EFBMuMuXFex_type9, &b_m_HLT_2mu4_bBmumuxv2_EFBMuMuXFex_type9);
   fChain->SetBranchAddress("mu1_coVar", &mu1_coVar, &b_mu1_coVar);
   fChain->SetBranchAddress("mu2_coVar", &mu2_coVar, &b_mu2_coVar);
   fChain->SetBranchAddress("had1_coVar", &had1_coVar, &b_had1_coVar);
   fChain->SetBranchAddress("had2_coVar", &had2_coVar, &b_had2_coVar);
   fChain->SetBranchAddress("Jpsi_Lxy_MaxSumPt", &Jpsi_Lxy_MaxSumPt, &b_Jpsi_Lxy_MaxSumPt);
   fChain->SetBranchAddress("Jpsi_Lxy_MaxSumPt_err", &Jpsi_Lxy_MaxSumPt_err, &b_Jpsi_Lxy_MaxSumPt_err);
   fChain->SetBranchAddress("PV_minA0_x", &PV_minA0_x, &b_PV_minA0_x);
   fChain->SetBranchAddress("PV_minA0_y", &PV_minA0_y, &b_PV_minA0_y);
   fChain->SetBranchAddress("PV_minA0_z", &PV_minA0_z, &b_PV_minA0_z);
   fChain->SetBranchAddress("orig_PV_minA0_x", &orig_PV_minA0_x, &b_orig_PV_minA0_x);
   fChain->SetBranchAddress("orig_PV_minA0_y", &orig_PV_minA0_y, &b_orig_PV_minA0_y);
   fChain->SetBranchAddress("orig_PV_minA0_z", &orig_PV_minA0_z, &b_orig_PV_minA0_z);
   fChain->SetBranchAddress("SecVtx_x", &SecVtx_x, &b_SecVtx_x);
   fChain->SetBranchAddress("SecVtx_y", &SecVtx_y, &b_SecVtx_y);
   fChain->SetBranchAddress("SecVtx_z", &SecVtx_z, &b_SecVtx_z);
   fChain->SetBranchAddress("new_cone_trk_charge", &new_cone_trk_charge, &b_new_cone_trk_charge);
   fChain->SetBranchAddress("new_cone_trk_eta", &new_cone_trk_eta, &b_new_cone_trk_eta);
   fChain->SetBranchAddress("new_cone_trk_phi", &new_cone_trk_phi, &b_new_cone_trk_phi);
   fChain->SetBranchAddress("new_cone_trk_pt", &new_cone_trk_pt, &b_new_cone_trk_pt);
   fChain->SetBranchAddress("new_cone_trk_z0", &new_cone_trk_z0, &b_new_cone_trk_z0);
   fChain->SetBranchAddress("new_cone_trk_d0", &new_cone_trk_d0, &b_new_cone_trk_d0);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("averageInteractionsPerCrossing", &averageInteractionsPerCrossing, &b_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("actualInteractionsPerCrossing", &actualInteractionsPerCrossing, &b_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("TagMuonConeLowPtDR_TagValue", &TagMuonConeLowPtDR_TagValue, &b_TagMuonConeLowPtDR_TagValue);
   fChain->SetBranchAddress("TagMuonConeLowPtDR_VTX_index", &TagMuonConeLowPtDR_VTX_index, &b_TagMuonConeLowPtDR_VTX_index);
   fChain->SetBranchAddress("TagMuonConeLowPtDR_index", &TagMuonConeLowPtDR_index, &b_TagMuonConeLowPtDR_index);
   fChain->SetBranchAddress("TagMuonConeTightDR_TagValue", &TagMuonConeTightDR_TagValue, &b_TagMuonConeTightDR_TagValue);
   fChain->SetBranchAddress("TagMuonConeTightDR_VTX_index", &TagMuonConeTightDR_VTX_index, &b_TagMuonConeTightDR_VTX_index);
   fChain->SetBranchAddress("TagMuonConeTightDR_index", &TagMuonConeTightDR_index, &b_TagMuonConeTightDR_index);
   fChain->SetBranchAddress("TagJet_TestMinDR_TagValue", &TagJet_TestMinDR_TagValue, &b_TagJet_TestMinDR_TagValue);
   fChain->SetBranchAddress("TagJet_TestMinDR_VTX_index", &TagJet_TestMinDR_VTX_index, &b_TagJet_TestMinDR_VTX_index);
   fChain->SetBranchAddress("TagJet_TestMinDR_index", &TagJet_TestMinDR_index, &b_TagJet_TestMinDR_index);
   fChain->SetBranchAddress("TagJet_TestMinDR_WeightValue", &TagJet_TestMinDR_WeightValue, &b_TagJet_TestMinDR_WeightValue);
   fChain->SetBranchAddress("TagJet_TestMinDR_jet_pt", &TagJet_TestMinDR_jet_pt, &b_TagJet_TestMinDR_jet_pt);
   fChain->SetBranchAddress("TagJet_TestMinDR_jet_eta", &TagJet_TestMinDR_jet_eta, &b_TagJet_TestMinDR_jet_eta);
   fChain->SetBranchAddress("TagJet_TestMinDR_jet_phi", &TagJet_TestMinDR_jet_phi, &b_TagJet_TestMinDR_jet_phi);
   fChain->SetBranchAddress("TagJet_TestMinDR_jet_idx", &TagJet_TestMinDR_jet_idx, &b_TagJet_TestMinDR_jet_idx);
   fChain->SetBranchAddress("TagJet_TestMinDR_MV2c10", &TagJet_TestMinDR_MV2c10, &b_TagJet_TestMinDR_MV2c10);
   fChain->SetBranchAddress("TagJet_TestMinDR_MV2c20", &TagJet_TestMinDR_MV2c20, &b_TagJet_TestMinDR_MV2c20);
   fChain->SetBranchAddress("TagJet_TestMinDR_pass_MV2c20_FixedCutBEff_70", &TagJet_TestMinDR_pass_MV2c20_FixedCutBEff_70, &b_TagJet_TestMinDR_pass_MV2c20_FixedCutBEff_70);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
//    fChain->SetBranchAddress("samesideS", &samesideS, &b_samesideS);
   fChain->SetBranchAddress("new_v", &new_v, &b_new_v);
   fChain->SetBranchAddress("new_v2", &new_v2, &b_new_v2);
   Notify();
}

Bool_t oscillation::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void oscillation::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t oscillation::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef oscillation_cxx
