void makePlots(double cThMin=-1.0, double cThMax=1.0) {
  // open file with tree
  TFile *fin = TFile::Open("Ant_0_pluto.root.root");

  // access tree object in input file
  TChain *tree = new TChain("OmegaEtaG2/tree");
  //  TTree* tree = dynamic_cast<TTree*> (fin->Get("OmegaEtaG2/tree"));
  tree->Add("Ant_1_pluto.root.root");
tree->Add("Ant_112_pluto.root.root");
tree->Add("Ant_113_pluto.root.root");
tree->Add("Ant_114_pluto.root.root");
tree->Add("Ant_115_pluto.root.root");
tree->Add("Ant_116_pluto.root.root");
tree->Add("Ant_117_pluto.root.root");
tree->Add("Ant_118_pluto.root.root");
tree->Add("Ant_119_pluto.root.root");
tree->Add("Ant_10_pluto.root.root");
tree->Add("Ant_11_pluto.root.root");
tree->Add("Ant_12_pluto.root.root");
tree->Add("Ant_13_pluto.root.root");
tree->Add("Ant_14_pluto.root.root");
tree->Add("Ant_15_pluto.root.root");
tree->Add("Ant_16_pluto.root.root");
tree->Add("Ant_17_pluto.root.root");
tree->Add("Ant_18_pluto.root.root");
tree->Add("Ant_19_pluto.root.root");
tree->Add("Ant_120_pluto.root.root");
tree->Add("Ant_121_pluto.root.root");
tree->Add("Ant_122_pluto.root.root");
tree->Add("Ant_123_pluto.root.root");
tree->Add("Ant_124_pluto.root.root");
tree->Add("Ant_125_pluto.root.root");
tree->Add("Ant_126_pluto.root.root");
tree->Add("Ant_127_pluto.root.root");
tree->Add("Ant_128_pluto.root.root");
tree->Add("Ant_129_pluto.root.root");
tree->Add("Ant_130_pluto.root.root");
//tree->Add("Ant_31_pluto.root.root");
//tree->Add("Ant_32_pluto.root.root");
//tree->Add("Ant_33_pluto.root.root");
//tree->Add("Ant_34_pluto.root.root");
//tree->Add("Ant_35_pluto.root.root");
//tree->Add("Ant_36_pluto.root.root");
//tree->Add("Ant_37_pluto.root.root");
//tree->Add("Ant_38_pluto.root.root");
//tree->Add("Ant_39_pluto.root.root");
//tree->Add("Ant_40_pluto.root.root");
//tree->Add("Ant_41_pluto.root.root");
//tree->Add("Ant_42_pluto.root.root");
//tree->Add("Ant_43_pluto.root.root");
//tree->Add("Ant_44_pluto.root.root");
//tree->Add("Ant_45_pluto.root.root");
//tree->Add("Ant_46_pluto.root.root");
//tree->Add("Ant_47_pluto.root.root");
//tree->Add("Ant_48_pluto.root.root");
//tree->Add("Ant_49_pluto.root.root");
//tree->Add("Ant_50_pluto.root.root");



  if (tree == NULL) {
    cout << "Tree not found in input file!" << endl;
    return;
  }

  // create output file, to hold all the plots
  TFile *fout = TFile::Open (Form("testHists%f%f.root", cThMin, cThMax) , "RECREATE");

  
  // define histograms
  //Protons
  TH1F *hThetaProton    = new TH1F ("hThetaProton"   , "#theta_p (lab);#theta_{p} (lab, measured) [#circ]; Events", 90, 0, 90);
  TH1F *hThetaProtonFit = new TH1F ("hThetaProtonFit", "#theta_p (lab);#theta_{p} (lab, fitted) [#circ]; Events", 90, 0, 90);
  TH1F *hPhiProton      = new TH1F ("hPhiProton"     , "#Phi_p (lab); #Phi_{p} (lab, measured) [#circ]; Events",180,0,180);
  TH1F *hPhiProtonFit   = new TH1F ("hPhiProtonFit"  , "#Phi_p (lab); #Phi_{p} (lab, fitted) [#circ]; Events",180,0,180);
  TH1F *hEProton        = new TH1F ("hEProton"       , "E (lab) Proton;E [MeV] (lab, measured);Events",400,0,1600);
  TH1F *hEProtonFit     = new TH1F ("hEProtonFit"    , "E (lab) Proton;E [MeV] (lab, fitted);Events",400,0,1600);
  TH1F *hThetaDiffProton= new TH1F ("hThetaDiffProton","#theta_p (Diff);#theta_{p} (Diff) [#circ]; Events", 50, -25, 25);
  TH1F *hThetaFitDiffProton = new TH1F ("hThetaFitDiffProton" , "theta_p (Diff); #theta_p (Diff) [#circ];Events", 50,-25,25);
  TH2F *hThetaThetaProton   = new TH2F ("hThetaThetaProton" , "p : cos(#theta_{fit}) vs. cos(#theta_{gen}) ; cos(#theta_{gen}) [#circ] ; cos(#theta_{fit}) [#circ]",600,0.7,1,600,0.7,1);


 //Bachelor
  TH1F *hThetaBachelor    = new TH1F ("hThetaBachelor"   , "#theta_{bachelor} (lab);#theta_{bachelor} (lab, measured) [#circ]; Events", 90, 0, 90);
  TH1F *hThetaBachelorFit = new TH1F ("hThetaBachelorFit", "#theta_{bachelor} (lab);#theta_{bachelor} (lab, fitted) [#circ]; Events", 90, 0, 90);
  TH1F *hPhiBachelor      = new TH1F ("hPhiBachelor"     , "#Phi_{bachelor} (lab); #Phi_{bachelor} (lab, measured) [#circ]; Events",180,0,180);
  TH1F *hPhiBachelorFit   = new TH1F ("hPhiBachelorFit"  , "#Phi_{bachelor} (lab); #Phi_{bachelor} (lab, fitted) [#circ]; Events",180,0,180);
  TH1F *hEBachelor        = new TH1F ("hEBachelor"       , "E (lab) Bachelor;E [MeV] (lab, measured);Events",400,0,1600);
  TH1F *hEBachelorFit     = new TH1F ("hEBachelorFit"    , "E (lab) Bachelor;E [MeV] (lab, fitted);Events",400,0,1600);



 //Pi0

  TH1F *hThetaPi0    = new TH1F ("hThetaPi0"   , "#theta_{#pi^0} (lab);#theta_{#pi^0} (lab, measured) [#circ]; Events", 90, 0, 90);
  TH1F *hThetaPi0Fit = new TH1F ("hThetaPi0Fit", "#theta_{#pi^0} (lab);#theta_{#pi^0} (lab, fitted) [#circ]; Events", 90, 0, 90);
  TH1F *hPhiPi0      = new TH1F ("hPhiPi0"     , "#Phi_{#pi^0} (lab); #Phi_{#pi^0} (lab, measured) [#circ]; Events",180,0,180);
  TH1F *hPhiPi0Fit   = new TH1F ("hPhiPi0Fit"  , "#Phi_{#pi^0} (lab); #Phi_{#pi^0} (lab, fitted) [#circ]; Events",180,0,180);
  TH1F *hEPi0        = new TH1F ("hEPi0"       , "E (lab) #pi^0;E [MeV] (lab, measured);Events",400,0,1600);
  TH1F *hEPi0Fit     = new TH1F ("hEPi0Fit"    , "E (lab) #pi^0;E [MeV] (lab, fitted);Events",400,0,1600);




 //Photons
  
  TH1F *hThetaphotons    = new TH1F ("hThetaphotons"   , "#theta_{photons} (lab);#theta_{photons} (lab, measured) [#circ]; Events", 90, 0, 90);
  TH1F *hThetaphotonsFit = new TH1F ("hThetaphotonsFit", "#theta_{photons} (lab);#theta_{photons} (lab, fitted) [#circ]; Events", 90, 0, 90);
  TH1F *hPhiphotons      = new TH1F ("hPhiphotons"     , "#Phi_{photons} (lab); #Phi_{photons} (lab, measured) [#circ]; Events",180,0,180);
  TH1F *hPhiphotonsFit   = new TH1F ("hPhiphotonsFit"  , "#Phi_{photons} (lab); #Phi_{photons} (lab, fitted) [#circ]; Events",180,0,180);
  TH1F *hEphotons        = new TH1F ("hEphotons"       , "E (lab) Photons;E [MeV] (lab, measured);Events",400,0,1600);
  TH1F *hEphotonsFit     = new TH1F ("hEphotonsFit"    , "E (lab) Photons;E [MeV] (lab, fitted);Events",400,0,1600);

//Omega

  TH1F *hThetaDiffOmega = new TH1F ("hThetaDiffOmega"  ,"#theta_{#omega};#theta_{#omega} [#circ];Events",50,-25,25); 
  TH1F *hThetaDiffFitOmega = new TH1F ("hThetaDiffFitOmega"  ,"#theta_{#omega Fit};#theta_{#omega} [#circ];Events",50,-25,25);
  TH2F *hThetaThetaOmega   = new TH2F ("hThetaThetaOmega","#omega : cos(#theta_{fit}) vs. cos(#theta_{gen});cos(#theta_{gen}) [#circ];cos(#theta_{fit}) [#circ]",400,-1,1,400,-1,1);


  // define all cuts
  TCut w_taggW ("TaggW");
  TCut w_mass_Cut("ggg.M()>700");
  TCut cut_cosThOmega1 ("-0.45 <= TMath::Cos(ggg_cm.Theta()) && TMath::Cos(ggg_cm.Theta()) < -0.35");
  TCut cut_cosThOmega2 ("-0.35 <= TMath::Cos(ggg_cm.Theta()) && TMath::Cos(ggg_cm.Theta()) < -0.25");
  TCut cut_cosThOmega3 ("-0.65 <= TMath::Cos(ggg_cm.Theta()) && TMath::Cos(ggg_cm.Theta()) < -0.55");



  TCut cut_KCut ("KinFitProb > 0.2 && nCandsInput  == 4 && copl_angle < 0.05");
  TCut cut_cosThOmega(Form("%f <= TMath::Cos(ggg_cm.Theta()) && TMath::Cos(ggg_cm.Theta()) < %f", cThMin, cThMax));

  // project variables from tree into histogram
  //Protons
  tree->Project ("hThetaProton", "p.Theta() * 180 / TMath::Pi()",
		 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hThetaProtonFit", "p_fitted.Theta() * 180 / TMath::Pi()",
		 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiProton", "p.Phi() * 180 / TMath::Pi()",
		w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiProtonFit", "p_fitted.Phi() * 180 / TMath::Pi()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEProton", "p.E()",
		w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEProtonFit", "p_fitted.E()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));
 
  tree->Project("hThetaDiffProton","(p.Theta()*180/TMath::Pi()) -  (p_true.Theta()* 180 / TMath::Pi() )"
               ,cut_cosThOmega && cut_KCut && w_mass_Cut); 

  tree->Project("hThetaFitDiffProton","(p_fitted.Theta()*180/TMath::Pi()) - (p_true.Theta()*180 / TMath::Pi() )",
		cut_cosThOmega && cut_KCut && w_mass_Cut);

  tree->Project("hThetaThetaProton","p_fitted.CosTheta():p_true.CosTheta()"
		,cut_cosThOmega && cut_KCut && w_mass_Cut
);

//Bachelor

  tree->Project ("hThetaBachelor", "BachelorPhoton.Theta() * 180 / TMath::Pi()",
                 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hThetaBachelorFit", "BachelorPhoton_fitted.Theta() * 180 / TMath::Pi()",
                 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiBachelor", "BachelorPhoton.Phi() * 180 / TMath::Pi()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiBachelorFit", "BachelorPhoton_fitted.Phi() * 180 / TMath::Pi()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEBachelor", "BachelorPhoton.E()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEBachelorFit", "BachelorPhoton_fitted.E()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));
 
  //Pi0



  tree->Project ("hThetaPi0", "ggIM.Theta() * 180 / TMath::Pi()",
                 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hThetaPi0Fit", "ggIM_fitted.Theta() * 180 / TMath::Pi()",
                 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiPi0", "ggIM.Phi() * 180 / TMath::Pi()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiPi0Fit", "ggIM_fitted.Phi() * 180 / TMath::Pi()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEPi0", "ggIM.E()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEPi0Fit", "ggIM_fitted.E()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

//Photons



  tree->Project ("hThetaphotons", "photons.Theta() * 180 / TMath::Pi()",
                 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hThetaphotonsFit", "photons_fitted.Theta() * 180 / TMath::Pi()",
                 w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiphotons", "photons.Phi() * 180 / TMath::Pi()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hPhiphotonsFit", "photons_fitted.Phi() * 180 / TMath::Pi()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEphotons", "photons.E()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));

  tree->Project ("hEphotonsFit", "photons_fitted.E()",
                w_taggW * (cut_cosThOmega && cut_KCut && w_mass_Cut));


//Omega  

  tree->Project("hThetaDiffOmega","(ggg.Theta()*180/TMath::Pi()) - (ggg_true.Theta()*180 / TMath::Pi() )",
                cut_cosThOmega && cut_KCut && w_mass_Cut);

  tree->Project("hThetaDiffFitOmega","(ggg_fitted.Theta()*180/TMath::Pi()) - (ggg_true.Theta()*180 / TMath::Pi() )",
                cut_cosThOmega && cut_KCut && w_mass_Cut);
  tree->Project("hThetaThetaOmega","ggg_cm_fitted.CosTheta():ggg_cm_true.CosTheta()",
                cut_cosThOmega && cut_KCut && w_mass_Cut);




  // optional:  draw the histograms
  hThetaProton->DrawCopy();
  
  // write histograms to output file and close that file
  fout->Write();
  fout->Close();

}
