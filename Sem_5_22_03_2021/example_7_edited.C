{
 TFile *_file0 = TFile::Open("ntuple.root");  // after exercise_5
 TF1 *myfit2 = new TF1("myfit2","gaus(0)+pol1(3)",0.65, 0.9  );
  h_002->Draw();
  gStyle-> SetOptFit();
  myfit2 -> SetParameter(0, 9000.);
  myfit2 -> SetParameter(1, 0.8);
  myfit2 -> SetParameter(2, 0.03 );
  myfit2 -> SetParameter(3, 5000.);
  myfit2 -> SetParameter(4, 0.0);
  h_002->Fit("myfit2","eR+");

}
