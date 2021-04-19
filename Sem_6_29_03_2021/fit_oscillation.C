TFile *_file0 = TFile::Open("output.root");
TF1 *f12= new TF1("f12", "[0]*(0. + TMath::Cos( (x *[1])+ [2]))*TMath::Exp(
[3]*x)", 0.47, 3.91);

f12->SetParameter(0, 1200.00 );
f12->SetParameter(1, 17.7 );
f12->SetParameter(2, 0.009);
f12->SetParameter(3, -0.78);
f12->SetParLimits(0,-0.35 , 290000.0 );
f12->SetParLimits(1, 17.5, 17.9);
f12->SetParLimits(2, -3.555, 3.002);
hist_tau_tagdif->Fit( "f12","eR+same");

