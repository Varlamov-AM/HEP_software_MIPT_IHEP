//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 19 12:57:27 2021 by ROOT version 5.34/32
// from TTree t4ev/t4ev
// found on file: nt_3pi_short.root
//////////////////////////////////////////////////////////

#ifndef read_tree_h
#define read_tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class read_tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           ntape_t4;
   Int_t           nspil_t4;
   Int_t           nevt_t4;
   Double_t        m3pi;

   // List of branches
   TBranch        *b_ntape_t4;   //!
   TBranch        *b_nspil_t4;   //!
   TBranch        *b_nevt_t4;   //!
   TBranch        *b_m3pi;   //!

   read_tree(TTree *tree=0);
   virtual ~read_tree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef read_tree_cxx
read_tree::read_tree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("nt_3pi_short.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("nt_3pi_short.root");
      }
      f->GetObject("t4ev",tree);

   }
   Init(tree);
}

read_tree::~read_tree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t read_tree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t read_tree::LoadTree(Long64_t entry)
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

void read_tree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("ntape_t4", &ntape_t4, &b_ntape_t4);
   fChain->SetBranchAddress("nspil_t4", &nspil_t4, &b_nspil_t4);
   fChain->SetBranchAddress("nevt_t4", &nevt_t4, &b_nevt_t4);
   fChain->SetBranchAddress("m3pi", &m3pi, &b_m3pi);
   Notify();
}

Bool_t read_tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void read_tree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t read_tree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef read_tree_cxx
