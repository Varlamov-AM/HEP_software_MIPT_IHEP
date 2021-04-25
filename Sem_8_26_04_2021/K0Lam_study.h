//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Apr 25 23:40:05 2021 by ROOT version 5.34/36
// from TTree LambdaB/LambdaB
// found on file: /nfs/lfi.mipt.su/data/nikola/atlas/Bs_el_lambda/2018_Delayed/B/user.nikola.20734971.EXT0._000061.Output.root
//////////////////////////////////////////////////////////

#ifndef K0Lam_study_h
#define K0Lam_study_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class K0Lam_study {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          run_number;
   UInt_t          lumi_block;
   ULong64_t       evt_number;
   vector<float>   *x;
   vector<float>   *y;
   vector<float>   *z;
   vector<float>   *chi;
   vector<float>   *ndf;
   vector<float>   *pos_pt;
   vector<float>   *pos_eta;
   vector<float>   *pos_phi;
   vector<float>   *neg_pt;
   vector<float>   *neg_eta;
   vector<float>   *neg_phi;
   Int_t           Ntracks;

   // List of branches
   TBranch        *b_run_number;   //!
   TBranch        *b_lumi_block;   //!
   TBranch        *b_evt_number;   //!
   TBranch        *b_x;   //!
   TBranch        *b_y;   //!
   TBranch        *b_z;   //!
   TBranch        *b_chi;   //!
   TBranch        *b_ndf;   //!
   TBranch        *b_pos_pt;   //!
   TBranch        *b_pos_eta;   //!
   TBranch        *b_pos_phi;   //!
   TBranch        *b_neg_pt;   //!
   TBranch        *b_neg_eta;   //!
   TBranch        *b_neg_phi;   //!
   TBranch        *b_Ntracks;   //!

   K0Lam_study(TTree *tree=0);
   virtual ~K0Lam_study();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef K0Lam_study_cxx
K0Lam_study::K0Lam_study(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/nfs/lfi.mipt.su/data/nikola/atlas/Bs_el_lambda/2018_Delayed/B/user.nikola.20734971.EXT0._000061.Output.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/nfs/lfi.mipt.su/data/nikola/atlas/Bs_el_lambda/2018_Delayed/B/user.nikola.20734971.EXT0._000061.Output.root");
      }
      f->GetObject("LambdaB",tree);

   }
   Init(tree);
}

K0Lam_study::~K0Lam_study()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t K0Lam_study::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t K0Lam_study::LoadTree(Long64_t entry)
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

void K0Lam_study::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   x = 0;
   y = 0;
   z = 0;
   chi = 0;
   ndf = 0;
   pos_pt = 0;
   pos_eta = 0;
   pos_phi = 0;
   neg_pt = 0;
   neg_eta = 0;
   neg_phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
   fChain->SetBranchAddress("lumi_block", &lumi_block, &b_lumi_block);
   fChain->SetBranchAddress("evt_number", &evt_number, &b_evt_number);
   fChain->SetBranchAddress("x", &x, &b_x);
   fChain->SetBranchAddress("y", &y, &b_y);
   fChain->SetBranchAddress("z", &z, &b_z);
   fChain->SetBranchAddress("chi", &chi, &b_chi);
   fChain->SetBranchAddress("ndf", &ndf, &b_ndf);
   fChain->SetBranchAddress("pos_pt", &pos_pt, &b_pos_pt);
   fChain->SetBranchAddress("pos_eta", &pos_eta, &b_pos_eta);
   fChain->SetBranchAddress("pos_phi", &pos_phi, &b_pos_phi);
   fChain->SetBranchAddress("neg_pt", &neg_pt, &b_neg_pt);
   fChain->SetBranchAddress("neg_eta", &neg_eta, &b_neg_eta);
   fChain->SetBranchAddress("neg_phi", &neg_phi, &b_neg_phi);
   fChain->SetBranchAddress("Ntracks", &Ntracks, &b_Ntracks);
   Notify();
}

Bool_t K0Lam_study::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void K0Lam_study::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t K0Lam_study::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef K0Lam_study_cxx
