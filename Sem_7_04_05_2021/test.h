//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 20 02:22:12 2020 by ROOT version 5.34/36
// from TTree h9024/NT9024
// found on file: /nfs/lfi.mipt.su/data/student/2019/20190325/ntbeam_cher_r17_1_v15.root
//////////////////////////////////////////////////////////

#ifndef test_h
#define test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class test {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         plab[5][3];
   Int_t           Itape;
   Int_t           Ispln;
   Int_t           Ievtn;
   UChar_t         Nrun;
   UChar_t         Ntr;
   Float_t         vertex[3];
   Float_t         prb[3];
   Char_t          Itypb;
   Float_t         Amp_bch[3];
   Int_t           Ngamlab;
   Float_t         chi2lab[20];   //[Ngamlab]
   Float_t         distlab[20];   //[Ngamlab]
   Int_t           Iratlab[20];   //[Ngamlab]
   Int_t           Iblcllab[20];   //[Ngamlab]
   Float_t         Egamlab[20][3];   //[Ngamlab]
   UChar_t         Npi0;
   UChar_t         Neth2g;
   UChar_t         Ngfree;
   Float_t         Obs13_mtot;
   Float_t         Obs13_m3pi;
   Float_t         Obs13_ch1;
   Float_t         Obs13_ch2;
   Float_t         Obs13_ch3;
   Float_t         Obs13_g1;
   Float_t         Obs13_g2;
   Float_t         Obs13_g3;
   Float_t         Obs13_g4;
   Float_t         Obs13_g5;
   Float_t         Obs13_g6;
   Float_t         Obs13_m3pi1;
   Float_t         Obs13_m3pi2;
   Float_t         Obs13_mpi0;
   Float_t         Obs13_t;
   Int_t           Iobs13_nadc12;
   Float_t         Obs13_ch1_b;
   UChar_t         Ntarg;
   Float_t         Amp_tgg[6];

   // List of branches
   TBranch        *b_plab;   //!
   TBranch        *b_Itape;   //!
   TBranch        *b_Ispln;   //!
   TBranch        *b_Ievtn;   //!
   TBranch        *b_Nrun;   //!
   TBranch        *b_Ntr;   //!
   TBranch        *b_vertex;   //!
   TBranch        *b_prb;   //!
   TBranch        *b_Itypb;   //!
   TBranch        *b_Amp_bch;   //!
   TBranch        *b_Ngamlab;   //!
   TBranch        *b_chi2lab;   //!
   TBranch        *b_distlab;   //!
   TBranch        *b_Iratlab;   //!
   TBranch        *b_Iblcllab;   //!
   TBranch        *b_Egamlab;   //!
   TBranch        *b_Npi0;   //!
   TBranch        *b_Neth2g;   //!
   TBranch        *b_Ngfree;   //!
   TBranch        *b_Obs13_mtot;   //!
   TBranch        *b_Obs13_m3pi;   //!
   TBranch        *b_Obs13_ch1;   //!
   TBranch        *b_Obs13_ch2;   //!
   TBranch        *b_Obs13_ch3;   //!
   TBranch        *b_Obs13_g1;   //!
   TBranch        *b_Obs13_g2;   //!
   TBranch        *b_Obs13_g3;   //!
   TBranch        *b_Obs13_g4;   //!
   TBranch        *b_Obs13_g5;   //!
   TBranch        *b_Obs13_g6;   //!
   TBranch        *b_Obs13_m3pi1;   //!
   TBranch        *b_Obs13_m3pi2;   //!
   TBranch        *b_Obs13_mpi0;   //!
   TBranch        *b_Obs13_t;   //!
   TBranch        *b_Iobs13_nadc12;   //!
   TBranch        *b_Obs13_ch1_b;   //!
   TBranch        *b_Ntarg;   //!
   TBranch        *b_Amp_tgg;   //!

   test(TTree *tree=0);
   virtual ~test();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef test_cxx
test::test(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/nfs/lfi.mipt.su/data/student/2019/20190325/ntbeam_cher_r17_1_v15.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/nfs/lfi.mipt.su/data/student/2019/20190325/ntbeam_cher_r17_1_v15.root");
      }
      f->GetObject("h9024",tree);

   }
   Init(tree);
}

test::~test()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t test::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t test::LoadTree(Long64_t entry)
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

void test::Init(TTree *tree)
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

   fChain->SetBranchAddress("plab", plab, &b_plab);
   fChain->SetBranchAddress("Itape", &Itape, &b_Itape);
   fChain->SetBranchAddress("Ispln", &Ispln, &b_Ispln);
   fChain->SetBranchAddress("Ievtn", &Ievtn, &b_Ievtn);
   fChain->SetBranchAddress("Nrun", &Nrun, &b_Nrun);
   fChain->SetBranchAddress("Ntr", &Ntr, &b_Ntr);
   fChain->SetBranchAddress("vertex", vertex, &b_vertex);
   fChain->SetBranchAddress("prb", prb, &b_prb);
   fChain->SetBranchAddress("Itypb", &Itypb, &b_Itypb);
   fChain->SetBranchAddress("Amp_bch", Amp_bch, &b_Amp_bch);
   fChain->SetBranchAddress("Ngamlab", &Ngamlab, &b_Ngamlab);
   fChain->SetBranchAddress("chi2lab", chi2lab, &b_chi2lab);
   fChain->SetBranchAddress("distlab", distlab, &b_distlab);
   fChain->SetBranchAddress("Iratlab", Iratlab, &b_Iratlab);
   fChain->SetBranchAddress("Iblcllab", Iblcllab, &b_Iblcllab);
   fChain->SetBranchAddress("Egamlab", Egamlab, &b_Egamlab);
   fChain->SetBranchAddress("Npi0", &Npi0, &b_Npi0);
   fChain->SetBranchAddress("Neth2g", &Neth2g, &b_Neth2g);
   fChain->SetBranchAddress("Ngfree", &Ngfree, &b_Ngfree);
   fChain->SetBranchAddress("Obs13_mtot", &Obs13_mtot, &b_Obs13_mtot);
   fChain->SetBranchAddress("Obs13_m3pi", &Obs13_m3pi, &b_Obs13_m3pi);
   fChain->SetBranchAddress("Obs13_ch1", &Obs13_ch1, &b_Obs13_ch1);
   fChain->SetBranchAddress("Obs13_ch2", &Obs13_ch2, &b_Obs13_ch2);
   fChain->SetBranchAddress("Obs13_ch3", &Obs13_ch3, &b_Obs13_ch3);
   fChain->SetBranchAddress("Obs13_g1", &Obs13_g1, &b_Obs13_g1);
   fChain->SetBranchAddress("Obs13_g2", &Obs13_g2, &b_Obs13_g2);
   fChain->SetBranchAddress("Obs13_g3", &Obs13_g3, &b_Obs13_g3);
   fChain->SetBranchAddress("Obs13_g4", &Obs13_g4, &b_Obs13_g4);
   fChain->SetBranchAddress("Obs13_g5", &Obs13_g5, &b_Obs13_g5);
   fChain->SetBranchAddress("Obs13_g6", &Obs13_g6, &b_Obs13_g6);
   fChain->SetBranchAddress("Obs13_m3pi1", &Obs13_m3pi1, &b_Obs13_m3pi1);
   fChain->SetBranchAddress("Obs13_m3pi2", &Obs13_m3pi2, &b_Obs13_m3pi2);
   fChain->SetBranchAddress("Obs13_mpi0", &Obs13_mpi0, &b_Obs13_mpi0);
   fChain->SetBranchAddress("Obs13_t", &Obs13_t, &b_Obs13_t);
   fChain->SetBranchAddress("Iobs13_nadc12", &Iobs13_nadc12, &b_Iobs13_nadc12);
   fChain->SetBranchAddress("Obs13_ch1_b", &Obs13_ch1_b, &b_Obs13_ch1_b);
   fChain->SetBranchAddress("Ntarg", &Ntarg, &b_Ntarg);
   fChain->SetBranchAddress("Amp_tgg", Amp_tgg, &b_Amp_tgg);
   Notify();
}

Bool_t test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void test::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t test::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef test_cxx
