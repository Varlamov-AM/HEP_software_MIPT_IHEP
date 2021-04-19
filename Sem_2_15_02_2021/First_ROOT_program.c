#include <iostream>
#include <TMath.h>

Double_t First_ROOT_program(){

	Double_t bb_px;	
	Double_t bb_py;
	Double_t bb_phi;

	bb_px = 1.;
	bb_py = 1.;
	
	bb_phi = TMath::ATan2(bb_py, bb_px);	

	std::cout << "TMath::ATan2(bb_py, bb_px) = " << bb_phi << "\n";
	
	return bb_phi;}
