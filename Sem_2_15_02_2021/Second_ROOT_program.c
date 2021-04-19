#include <iostream>
#include <TMath>
#include <TH1F.h>

int  Second_ROOT_program(){

	const char h[16] = 'head';
	const char d[16] = 'description';

        TH1F* h1 = new TH1F(h, d, 250, 0., 250.);

	h1->Fill(50);

	for (int i = 0; i < 250; i++){
                for (int j = 0; j < i*i; j++){
                        h1->Fill(i);
                }
        }

	h1->Draw();


        return 0;}
