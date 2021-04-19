{
 TFile *_file0 = TFile::Open("ntuple.root");
 TF1 *myfit2 = new TF1("myfit2","gaus(0)",0.65, 0.9  );
  h_002->Draw();
 gStyle-> SetOptFit();
//myfit2 -> SetParameter(0, xxxxx);
//myfit2 -> SetParameter(1, xxxxx);
//myfit2 -> SetParameter(2,   xxxx );
 h_002->Fit("myfit2","eR+");
}
