TFile *_file0 = TFile::Open("nt_3pi_short.root");
TTree * new_tree = (TTree*)gROOT->FindObject("t4ev" );
new_tree->MakeClass("read_tree");

