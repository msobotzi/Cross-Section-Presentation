void makeHists(char* FirstFile, char* SecondFile){

//load the Files
	TFile *f1 = TFile::Open(FirstFile);
	TFile *f2 = TFile::Open(SecondFile);

//open the hists
	//Proton
	TH1F *hThetaProton1   = (TH1F*) f1->Get("hThetaProton");
	TH1F *hThetaProton2   = (TH1F*) f2->Get("hThetaProton");

        TH1F *hThetaProtonFit1   = (TH1F*) f1->Get("hThetaProtonFit");
        TH1F *hThetaProtonFit2   = (TH1F*) f2->Get("hThetaProtonFit");
     
	TH1F *hPhiProton1   = (TH1F*) f1->Get("hPhiProton");
        TH1F *hPhiProton2   = (TH1F*) f2->Get("hPhiProton");

        TH1F *hPhiProtonFit1   = (TH1F*) f1->Get("hPhiProtonFit");
        TH1F *hPhiProtonFit2   = (TH1F*) f2->Get("hPhiProtonFit");

	TH1F *hEProton1   = (TH1F*) f1->Get("hEProton");
        TH1F *hEProton2   = (TH1F*) f2->Get("hEProton");

        TH1F *hEProtonFit1   = (TH1F*) f1->Get("hEProtonFit");
        TH1F *hEProtonFit2   = (TH1F*) f2->Get("hEProtonFit");


	//Bachelor
	TH1F *hThetaBachelor1 = (TH1F*) f1->Get("hThetaBachelor");
	TH1F *hThetaBachelor2 = (TH1F*) f2->Get("hThetaBachelor");

        TH1F *hThetaBachelorFit1   = (TH1F*) f1->Get("hThetaBachelorFit");
        TH1F *hThetaBachelorFit2   = (TH1F*) f2->Get("hThetaBachelorFit");

        TH1F *hPhiBachelor1   = (TH1F*) f1->Get("hPhiBachelor");
        TH1F *hPhiBachelor2   = (TH1F*) f2->Get("hPhiBachelor");

        TH1F *hPhiBachelorFit1   = (TH1F*) f1->Get("hPhiBachelorFit");
        TH1F *hPhiBachelorFit2   = (TH1F*) f2->Get("hPhiBachelorFit");

        TH1F *hEBachelor1   = (TH1F*) f1->Get("hEBachelor");
        TH1F *hEBachelor2   = (TH1F*) f2->Get("hEBachelor");

        TH1F *hEBachelorFit1   = (TH1F*) f1->Get("hEBachelorFit");
        TH1F *hEBachelorFit2   = (TH1F*) f2->Get("hEBachelorFit");

      //Pi0
        TH1F *hThetaPi01 = (TH1F*) f1->Get("hThetaPi0");
        TH1F *hThetaPi02 = (TH1F*) f2->Get("hThetaPi0");

        TH1F *hThetaPi0Fit1   = (TH1F*) f1->Get("hThetaPi0Fit");
        TH1F *hThetaPi0Fit2   = (TH1F*) f2->Get("hThetaPi0Fit");

        TH1F *hPhiPi01   = (TH1F*) f1->Get("hPhiPi0");
        TH1F *hPhiPi02   = (TH1F*) f2->Get("hPhiPi0");

        TH1F *hPhiPi0Fit1   = (TH1F*) f1->Get("hPhiPi0Fit");
        TH1F *hPhiPi0Fit2   = (TH1F*) f2->Get("hPhiPi0Fit");

        TH1F *hEPi01   = (TH1F*) f1->Get("hEPi0");
        TH1F *hEPi02   = (TH1F*) f2->Get("hEPi0");

        TH1F *hEPi0Fit1   = (TH1F*) f1->Get("hEPi0Fit");
        TH1F *hEPi0Fit2   = (TH1F*) f2->Get("hEPi0Fit");


        //photons
        TH1F *hThetaphotons1   = (TH1F*) f1->Get("hThetaphotons");
        TH1F *hThetaphotons2   = (TH1F*) f2->Get("hThetaphotons");

        TH1F *hThetaphotonsFit1   = (TH1F*) f1->Get("hThetaphotonsFit");
        TH1F *hThetaphotonsFit2   = (TH1F*) f2->Get("hThetaphotonsFit");

        TH1F *hPhiphotons1   = (TH1F*) f1->Get("hPhiphotons");
        TH1F *hPhiphotons2   = (TH1F*) f2->Get("hPhiphotons");

        TH1F *hPhiphotonsFit1   = (TH1F*) f1->Get("hPhiphotonsFit");
        TH1F *hPhiphotonsFit2   = (TH1F*) f2->Get("hPhiphotonsFit");

        TH1F *hEphotons1   = (TH1F*) f1->Get("hEphotons");
        TH1F *hEphotons2   = (TH1F*) f2->Get("hEphotons");

        TH1F *hEphotonsFit1   = (TH1F*) f1->Get("hEphotonsFit");
        TH1F *hEphotonsFit2   = (TH1F*) f2->Get("hEphotonsFit");





	//Proton 
	TCanvas *cProton = new TCanvas("cProton","Proton",800,600);
	cProton->Divide(2,3);

	//Proton
	cProton_1->cd();
	hThetaProton1->Draw();
	hThetaProton1->SetLineColor(2);
	hThetaProton2->Draw("same");

	cProton_2->cd();
	hThetaProtonFit1->Draw();
	hThetaProtonFit1->SetLineColor(2);
	hThetaProtonFit2->Draw("same");

	cProton_3->cd();
        hPhiProton1->Draw();
        hPhiProton1->SetLineColor(2);
        hPhiProton2->Draw("same");

	cProton_4->cd();
        hPhiProtonFit1->Draw();
        hPhiProtonFit1->SetLineColor(2);
        hPhiProtonFit2->Draw("same");

	cProton_5->cd();
        hEProton1->Draw();
        hEProton1->SetLineColor(2);
        hEProton2->Draw("same");
	
	cProton_6->cd();
        hEProtonFit1->Draw();
        hEProtonFit1->SetLineColor(2);
        hEProtonFit2->Draw("same");
	
	cProton->SaveAs("Proton.pdf");

        //Bachelor
        TCanvas *cBachelor = new TCanvas("cBachelor","Bachelor",800,600);
        cBachelor->Divide(2,3);
	//Bachelor
	cBachelor_1->cd();
	hThetaBachelor1->Draw();
	hThetaBachelor1->SetLineColor(2);
	hThetaBachelor->Draw("same");

        cBachelor_2->cd();
        hThetaBachelorFit1->Draw();
        hThetaBachelorFit1->SetLineColor(2);
        hThetaBachelorFit2->Draw("same");

        cBachelor_3->cd();
        hPhiBachelor1->Draw();
        hPhiBachelor1->SetLineColor(2);
        hPhiBachelor2->Draw("same");

        cBachelor_4->cd();
        hPhiBachelorFit1->Draw();
        hPhiBachelorFit1->SetLineColor(2);
        hPhiBachelorFit2->Draw("same");

        cBachelor_5->cd();
        hEBachelor1->Draw();
        hEBachelor1->SetLineColor(2);
        hEBachelor2->Draw("same");

        cBachelor_6->cd();
        hEBachelorFit1->Draw();
        hEBachelorFit1->SetLineColor(2);
        hEBachelorFit2->Draw("same");
       
        cBachelor->SaveAs("Bachelor.pdf");



        //Pi0 
        TCanvas *cPi0 = new TCanvas("cPi0","Pi0",800,600);
        cPi0->Divide(2,3);

        //Pi0
        cPi0_1->cd();
        hThetaPi01->Draw();
        hThetaPi01->SetLineColor(2);
        hThetaPi02->Draw("same");

        cPi0_2->cd();
        hThetaPi0Fit1->Draw();
        hThetaPi0Fit1->SetLineColor(2);
        hThetaPi0Fit2->Draw("same");

        cPi0_3->cd();
        hPhiPi01->Draw();
        hPhiPi01->SetLineColor(2);
        hPhiPi02->Draw("same");

        cPi0_4->cd();
        hPhiPi0Fit1->Draw();
        hPhiPi0Fit1->SetLineColor(2);
        hPhiPi0Fit2->Draw("same");

        cPi0_5->cd();
        hEPi01->Draw();
        hEPi01->SetLineColor(2);
        hEPi02->Draw("same");

        cPi0_6->cd();
        hEPi0Fit1->Draw();
        hEPi0Fit1->SetLineColor(2);
        hEPi0Fit2->Draw("same");

        cPi0->SaveAs("Pi0.pdf");


        //photons
        TCanvas *cphotons = new TCanvas("cphotons","photons",800,600);
        cphotons->Divide(2,3);
        
     	//Photons
        cphotons_1->cd();
        hThetaphotons1->Draw();
        hThetaphotons1->SetLineColor(2);
        hThetaphotons->Draw("same");

        cphotons_2->cd();
        hThetaphotonsFit1->Draw();
        hThetaphotonsFit1->SetLineColor(2);
        hThetaphotonsFit2->Draw("same");

        cphotons_3->cd();
        hPhiphotons1->Draw();
        hPhiphotons1->SetLineColor(2);
        hPhiphotons2->Draw("same");

        cphotons_4->cd();
        hPhiphotonsFit1->Draw();
        hPhiphotonsFit1->SetLineColor(2);
        hPhiphotonsFit2->Draw("same");

        cphotons_5->cd();
        hEphotons1->Draw();
        hEphotons1->SetLineColor(2);
        hEphotons2->Draw("same");

        cphotons_6->cd();
        hEphotonsFit1->Draw();
        hEphotonsFit1->SetLineColor(2);
        hEphotonsFit2->Draw("same");

        cphotons->SaveAs("Photons.pdf");

}

