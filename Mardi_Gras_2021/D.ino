

void StarSigned () {
  
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} 


if (AstrologyStage == 0) {
      
//signSave = 11; //comment in to select final frame

switch (starsigns) {

  case 0: for (int i = 0; i< 32; i++){ leds[Aries [i]] = CHSV(hueF, 255, 150);} break;
  case 1: for (int i = 0; i< 32; i++){ leds[Taurus [i]] = CHSV(hueE, 255, 150);}  break;
  case 2: for (int i = 0; i< 38; i++){ leds[Gemini [i]] = CHSV(hueA, 150, 150);} break;
  case 3: for (int i = 0; i< 30; i++){ leds[Cancer [i]] = CHSV(hueW, 255, 150);} break;
  case 4: for (int i = 0; i< 28; i++){ leds[Leo [i]] = CHSV(hueF, 255, 150);} break;
  case 5: for (int i = 0; i< 54; i++){ leds[Virgo [i]] = CHSV(hueE, 255, 150);} break;
  case 6: for (int i = 0; i< 34; i++){ leds[Libra [i]] = CHSV(hueA, 150, 150); } break;
  case 7: for (int i = 0; i< 44; i++){ leds[Scorpio [i]] = CHSV(hueW, 255, 150); } break;
  case 8: for (int i = 0; i< 22; i++){ leds[Sagitarius [i]] = CHSV(hueF, 255, 150); } break;
  case 9: for (int i = 0; i< 30; i++){ leds[Capricorn [i]] = CHSV(hueE, 255, 150); } break;
  case 10: for (int i = 0; i< 20; i++){ leds[Aquarius [i]] = CHSV(hueA, 150, 150); } break;
  case 11: for (int i = 0; i< 28; i++){ leds[Pieces [i]] = CHSV(hueP, 255, 150); } break;
  
  }

switch (starsignsBB) {

  case 0: for (int i = 0; i< 32; i++){ leds[AriesBB [i]] = CHSV(hueF, 255, 150);} break;
  case 1: for (int i = 0; i< 32; i++){ leds[TaurusBB [i]] = CHSV(hueE, 255, 150);}  break;
  case 2: for (int i = 0; i< 38; i++){ leds[GeminiBB [i]] = CHSV(hueA, 150, 150);} break;
  case 3: for (int i = 0; i< 30; i++){ leds[CancerBB [i]] = CHSV(hueW, 255, 150);} break;
  case 4: for (int i = 0; i< 28; i++){ leds[LeoBB [i]] = CHSV(hueF, 255, 150);} break;
  case 5: for (int i = 0; i< 54; i++){ leds[VirgoBB [i]] = CHSV(hueE, 255, 150);} break;
  case 6: for (int i = 0; i< 34; i++){ leds[LibraBB [i]] = CHSV(hueA, 150, 150); } break;
  case 7: for (int i = 0; i< 44; i++){ leds[ScorpioBB [i]] = CHSV(hueW, 255, 150); } break;
  case 8: for (int i = 0; i< 22; i++){ leds[SagitariusBB [i]] = CHSV(hueF, 255, 150); } break;
  case 9: for (int i = 0; i< 30; i++){ leds[CapricornBB [i]] = CHSV(hueE, 255, 150); } break;
  case 10: for (int i = 0; i< 20; i++){ leds[AquariusBB [i]] = CHSV(hueA, 150, 150); } break;
  case 11: for (int i = 0; i< 28; i++){ leds[PiecesBB [i]] = CHSV(hueP, 255, 150); } break;
  
  }

switch (starsignsCC) {

  case 0: for (int i = 0; i< 32; i++){ leds[AriesCC [i]] = CHSV(hueF, 255, 150);} break;
  case 1: for (int i = 0; i< 32; i++){ leds[TaurusCC [i]] = CHSV(hueE, 255, 150);}  break;
  case 2: for (int i = 0; i< 38; i++){ leds[GeminiCC [i]] = CHSV(hueA, 150, 150);} break;
  case 3: for (int i = 0; i< 30; i++){ leds[CancerCC [i]] = CHSV(hueW, 255, 150);} break;
  case 4: for (int i = 0; i< 28; i++){ leds[LeoCC [i]] = CHSV(hueF, 255, 150);} break;
  case 5: for (int i = 0; i< 54; i++){ leds[VirgoCC [i]] = CHSV(hueE, 255, 150);} break;
  case 6: for (int i = 0; i< 34; i++){ leds[LibraCC [i]] = CHSV(hueA, 150, 150); } break;
  case 7: for (int i = 0; i< 44; i++){ leds[ScorpioCC [i]] = CHSV(hueW, 255, 150); } break;
  case 8: for (int i = 0; i< 22; i++){ leds[SagitariusCC [i]] = CHSV(hueF, 255, 150); } break;
  case 9: for (int i = 0; i< 30; i++){ leds[CapricornCC [i]] = CHSV(hueE, 255, 150); } break;
  case 10: for (int i = 0; i< 20; i++){ leds[AquariusCC [i]] = CHSV(hueA, 150, 150); } break;
  case 11: for (int i = 0; i< 28; i++){ leds[PiecesCC [i]] = CHSV(hueP, 255, 150); } break;
  
  }

switch (starsignsDD) {

  case 0: for (int i = 0; i< 32; i++){ leds[AriesDD [i]] = CHSV(hueF, 255, 150);} break;
  case 1: for (int i = 0; i< 32; i++){ leds[TaurusDD [i]] = CHSV(hueE, 255, 150);}  break;
  case 2: for (int i = 0; i< 38; i++){ leds[GeminiDD [i]] = CHSV(hueA, 150, 150);} break;
  case 3: for (int i = 0; i< 30; i++){ leds[CancerDD [i]] = CHSV(hueW, 255, 150);} break;
  case 4: for (int i = 0; i< 28; i++){ leds[LeoDD [i]] = CHSV(hueF, 255, 150);} break;
  case 5: for (int i = 0; i< 54; i++){ leds[VirgoDD [i]] = CHSV(hueE, 255, 150);} break;
  case 6: for (int i = 0; i< 34; i++){ leds[LibraDD [i]] = CHSV(hueA, 150, 150); } break;
  case 7: for (int i = 0; i< 44; i++){ leds[ScorpioDD [i]] = CHSV(hueW, 255, 150); } break;
  case 8: for (int i = 0; i< 22; i++){ leds[SagitariusDD [i]] = CHSV(hueF, 255, 150); } break;
  case 9: for (int i = 0; i< 30; i++){ leds[CapricornDD [i]] = CHSV(hueE, 255, 150); } break;
  case 10: for (int i = 0; i< 20; i++){ leds[AquariusDD [i]] = CHSV(hueA, 150, 150); } break;
  case 11: for (int i = 0; i< 28; i++){ leds[PiecesDD [i]] = CHSV(hueP, 255, 150); } break;
  
  }

switch (starsignsEE) {

  case 0: for (int i = 0; i< 32; i++){ leds[AriesEE [i]] = CHSV(hueF, 255, 150);} break;
  case 1: for (int i = 0; i< 32; i++){ leds[TaurusEE [i]] = CHSV(hueE, 255, 150);}  break;
  case 2: for (int i = 0; i< 38; i++){ leds[GeminiEE [i]] = CHSV(hueA, 150, 150);} break;
  case 3: for (int i = 0; i< 30; i++){ leds[CancerEE [i]] = CHSV(hueW, 255, 150);} break;
  case 4: for (int i = 0; i< 28; i++){ leds[LeoEE [i]] = CHSV(hueF, 255, 150);} break;
  case 5: for (int i = 0; i< 54; i++){ leds[VirgoEE [i]] = CHSV(hueE, 255, 150);} break;
  case 6: for (int i = 0; i< 34; i++){ leds[LibraEE [i]] = CHSV(hueA, 150, 150); } break;
  case 7: for (int i = 0; i< 44; i++){ leds[ScorpioEE [i]] = CHSV(hueW, 255, 150); } break;
  case 8: for (int i = 0; i< 22; i++){ leds[SagitariusEE [i]] = CHSV(hueF, 255, 150); } break;
  case 9: for (int i = 0; i< 30; i++){ leds[CapricornEE [i]] = CHSV(hueE, 255, 150); } break;
  case 10: for (int i = 0; i< 20; i++){ leds[AquariusEE [i]] = CHSV(hueA, 150, 150); } break;
  case 11: for (int i = 0; i< 28; i++){ leds[PiecesEE [i]] = CHSV(hueP, 255, 150); } break;
  
  }


if (CounterAA <= 77){  if (AA >= TimerAA) {starsigns = random (0,12);   AA = 0;  CounterAA ++; if (CounterAA >= 35) {TimerAA = 150;} if (CounterAA >= 40) {TimerAA = 200;} if (CounterAA >= 50) {TimerAA = 250;} if (CounterAA >= 60) {TimerAA = 300;} if (CounterAA >= 65) {TimerAA = 400;} if (CounterAA >= 70) {TimerAA = 600;}  } }
if (CounterAA >= 78){ starsigns = signSave; }

if (CounterBB <= 73){  if (BB >= TimerBB) {starsignsBB = random (0,12);   BB = 0;  CounterBB ++; if (CounterBB >= 35) {TimerBB = 150;} if (CounterBB >= 40) {TimerBB = 200;} if (CounterBB >= 50) {TimerBB = 250;} if (CounterBB >= 60) {TimerBB = 300;} if (CounterBB >= 65) {TimerBB = 400;} if (CounterBB >= 70) {TimerBB = 600;}  } }
if (CounterBB >= 74){ starsignsBB = signSave;}

if (CounterCC <= 75){  if (CC >= TimerCC) {starsignsCC = random (0,12);   CC = 0;  CounterCC ++; if (CounterCC >= 35) {TimerCC = 150;} if (CounterCC >= 40) {TimerCC = 200;} if (CounterCC >= 50) {TimerCC = 250;} if (CounterCC >= 60) {TimerCC = 300;} if (CounterCC >= 65) {TimerCC = 400;} if (CounterCC >= 70) {TimerCC = 600;}  } }
if (CounterCC >= 76){ starsignsCC = signSave; }

if (CounterDD <= 71){  if (DD >= TimerDD) {starsignsDD = random (0,12);   DD = 0;  CounterDD ++; if (CounterDD >= 35) {TimerDD = 150;} if (CounterDD >= 40) {TimerDD = 200;} if (CounterDD >= 50) {TimerDD = 250;} if (CounterDD >= 60) {TimerDD = 300;} if (CounterDD >= 65) {TimerDD = 400;} if (CounterDD >= 70) {TimerDD = 600;}  } }
if (CounterDD >= 72){ starsignsDD = signSave; }

if (CounterEE <= 80){  if (EE >= TimerEE) {starsignsEE = random (0,12);   EE = 0;  CounterEE ++; if (CounterEE >= 35) {TimerEE = 150;} if (CounterEE >= 40) {TimerEE = 200;} if (CounterEE >= 50) {TimerEE = 250;} if (CounterEE >= 60) {TimerEE = 300;} if (CounterEE >= 65) {TimerEE = 400;} if (CounterEE >= 70) {TimerEE = 600;}  } }
if (CounterEE >= 81){ starsignsEE = signSave;  AstrologyStage = 1; AA = 0; CounterAA = 0;}

}


if (AstrologyStage == 1) { 

  switch (signSave) {
case 0: for (int i = 0; i< 32; i++){ leds[Aries [i]] = CHSV(hueF, 255, 150);}for (int i = 0; i< 32; i++){ leds[AriesBB [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 32; i++){ leds[AriesCC [i]] = CHSV(hueF, 255, 150);}for (int i = 0; i< 32; i++){ leds[AriesDD [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 32; i++){ leds[AriesEE [i]] = CHSV(hueF, 255, 150);} break;
case 1: for (int i = 0; i< 32; i++){ leds[Taurus [i]] = CHSV(hueE, 255, 150);}   for (int i = 0; i< 32; i++){ leds[TaurusBB [i]] = CHSV(hueE, 255, 150);}  for (int i = 0; i< 32; i++){ leds[TaurusCC [i]] = CHSV(hueE, 255, 150);}  for (int i = 0; i< 32; i++){ leds[TaurusDD [i]] = CHSV(hueE, 255, 150);}  for (int i = 0; i< 32; i++){ leds[TaurusEE [i]] = CHSV(hueE, 255, 150);}  break;
case 2: for (int i = 0; i< 38; i++){ leds[Gemini [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiBB [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiCC [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiDD [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiEE [i]] = CHSV(hueA, 150, 150);} break;
case 3: for (int i = 0; i< 30; i++){ leds[Cancer [i]] = CHSV(hueW, 255, 150);} for (int i = 0; i< 30; i++){ leds[CancerBB [i]] = CHSV(hueW, 255, 150);}for (int i = 0; i< 30; i++){ leds[CancerCC [i]] = CHSV(hueW, 255, 150);}for (int i = 0; i< 30; i++){ leds[CancerDD [i]] = CHSV(hueW, 255, 150);} for (int i = 0; i< 30; i++){ leds[CancerEE [i]] = CHSV(hueW, 255, 150);} break;
case 4: for (int i = 0; i< 28; i++){ leds[Leo [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoBB [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoCC [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoDD [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoEE [i]] = CHSV(hueF, 255, 150);}  break;
case 5: for (int i = 0; i< 54; i++){ leds[Virgo [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoBB [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoCC [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoDD [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoEE [i]] = CHSV(hueE, 255, 150);} break;
case 6: for (int i = 0; i< 34; i++){ leds[Libra [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraBB [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraCC [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraDD [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraEE [i]] = CHSV(hueA, 150, 150); } break;
case 7: for (int i = 0; i< 44; i++){ leds[Scorpio [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioBB [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioCC [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioDD [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioEE [i]] = CHSV(hueW, 255, 150); } break;
case 8: for (int i = 0; i< 22; i++){ leds[Sagitarius [i]] = CHSV(hueF, 255, 150); }  for (int i = 0; i< 22; i++){ leds[SagitariusBB [i]] = CHSV(hueF, 255, 150); } for (int i = 0; i< 22; i++){ leds[SagitariusCC [i]] = CHSV(hueF, 255, 150); } for (int i = 0; i< 22; i++){ leds[SagitariusDD [i]] = CHSV(hueF, 255, 150); } for (int i = 0; i< 22; i++){ leds[SagitariusEE [i]] = CHSV(hueF, 255, 150); } break;
case 9: for (int i = 0; i< 150; i++){ leds[CapricornAll [i]] = CHSV(hueE, 255, 150); } break;
case 10: for (int i = 0; i< 100; i++){ leds[AquariusALL [i]] = CHSV(hueA, 255, 150); }  break;
case 11: for (int i = 0; i< 140; i++){ leds[PiecesALL [i]] = CHSV(hueW, 255, 150); }  break;
  
  }  
  if (AA > 500) {  AstrologyStage = 2; AA = 0; }} //cause it otherwise didnt wait on the last one. dirty fix.

if (AstrologyStage == 2) {
   
  
  if (AA > 500) {
  switch (signSave) {
case 0: for (int i = 0; i< 32; i++){ leds[Aries [i]] = CHSV(hueF, 255, 150);}for (int i = 0; i< 32; i++){ leds[AriesBB [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 32; i++){ leds[AriesCC [i]] = CHSV(hueF, 255, 150);}for (int i = 0; i< 32; i++){ leds[AriesDD [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 32; i++){ leds[AriesEE [i]] = CHSV(hueF, 255, 150);} break;
case 1: for (int i = 0; i< 32; i++){ leds[Taurus [i]] = CHSV(hueE, 255, 150);}   for (int i = 0; i< 32; i++){ leds[TaurusBB [i]] = CHSV(hueE, 255, 150);}  for (int i = 0; i< 32; i++){ leds[TaurusCC [i]] = CHSV(hueE, 255, 150);}  for (int i = 0; i< 32; i++){ leds[TaurusDD [i]] = CHSV(hueE, 255, 150);}  for (int i = 0; i< 32; i++){ leds[TaurusEE [i]] = CHSV(hueE, 255, 150);} break;
case 2: for (int i = 0; i< 38; i++){ leds[Gemini [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiBB [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiCC [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiDD [i]] = CHSV(hueA, 150, 150);} for (int i = 0; i< 38; i++){ leds[GeminiEE [i]] = CHSV(hueA, 150, 150);} break;
case 3: for (int i = 0; i< 30; i++){ leds[Cancer [i]] = CHSV(hueW, 255, 150);} for (int i = 0; i< 30; i++){ leds[CancerBB [i]] = CHSV(hueW, 255, 150);}for (int i = 0; i< 30; i++){ leds[CancerCC [i]] = CHSV(hueW, 255, 150);}for (int i = 0; i< 30; i++){ leds[CancerDD [i]] = CHSV(hueW, 255, 150);} for (int i = 0; i< 30; i++){ leds[CancerEE [i]] = CHSV(hueW, 255, 150);} break;
case 4: for (int i = 0; i< 28; i++){ leds[Leo [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoBB [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoCC [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoDD [i]] = CHSV(hueF, 255, 150);} for (int i = 0; i< 28; i++){ leds[LeoEE [i]] = CHSV(hueF, 255, 150);} break;
case 5: for (int i = 0; i< 54; i++){ leds[Virgo [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoBB [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoCC [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoDD [i]] = CHSV(hueE, 255, 150);} for (int i = 0; i< 54; i++){ leds[VirgoEE [i]] = CHSV(hueE, 255, 150);} break;
case 6: for (int i = 0; i< 34; i++){ leds[Libra [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraBB [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraCC [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraDD [i]] = CHSV(hueA, 150, 150); } for (int i = 0; i< 34; i++){ leds[LibraEE [i]] = CHSV(hueA, 150, 150); } break;
case 7: for (int i = 0; i< 44; i++){ leds[Scorpio [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioBB [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioCC [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioDD [i]] = CHSV(hueW, 255, 150); } for (int i = 0; i< 44; i++){ leds[ScorpioEE [i]] = CHSV(hueW, 255, 150); } break;
case 8: for (int i = 0; i< 22; i++){ leds[Sagitarius [i]] = CHSV(hueF, 255, 150); }  for (int i = 0; i< 22; i++){ leds[SagitariusBB [i]] = CHSV(hueF, 255, 150); } for (int i = 0; i< 22; i++){ leds[SagitariusCC [i]] = CHSV(hueF, 255, 150); } for (int i = 0; i< 22; i++){ leds[SagitariusDD [i]] = CHSV(hueF, 255, 150); } for (int i = 0; i< 22; i++){ leds[SagitariusEE [i]] = CHSV(hueF, 255, 150); } break;
case 9: for (int i = 0; i< 150; i++){ leds[CapricornAll [i]] = CHSV(hueE, 255, 150); }  break;
case 10: for (int i = 0; i< 100; i++){ leds[AquariusALL [i]] = CHSV(hueA, 255, 150); }   break;
case 11: for (int i = 0; i< 140; i++){ leds[PiecesALL [i]] = CHSV(hueW, 255, 150); }  break;
  
  }  
  
  }
 if (AA > 1000) {AA = 0; CounterAA++;}
  
  if (CounterAA >= 5) { AstrologyStage = 3; AA = 0; BB = 0; ZZ = 0; CounterAA = 0; for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }}
  }

if (AstrologyStage == 3) {

/*

if (signSave == 0) {
leds[Aries [0]] = CHSV(hueP, 255, 150);  
leds[Aries [1]] = CHSV(hueP, 255, 150);  
leds[Aries [2]] = CHSV(hueP+16, 255, 150);  
leds[Aries [3]] = CHSV(hueP+16, 255, 150);  
leds[Aries [4]] = CHSV(hueP+32, 255, 150);  
leds[Aries [5]] = CHSV(hueP+32, 255, 150);  
leds[Aries [6]] = CHSV(hueP+48, 255, 150);  
leds[Aries [7]] = CHSV(hueP+48, 255, 150);  
leds[Aries [8]] = CHSV(hueP+64, 255, 150);  
leds[Aries [9]] = CHSV(hueP+64, 255, 150);  
leds[Aries [10]] = CHSV(hueP+80, 255, 150);  
leds[Aries [11]] = CHSV(hueP+80, 255, 150);  
leds[Aries [12]] = CHSV(hueP+80, 255, 150);  
leds[Aries [13]] = CHSV(hueP+80, 255, 150);  
leds[Aries [14]] = CHSV(hueP+80, 255, 150);  
leds[Aries [15]] = CHSV(hueP+80, 255, 150);  
leds[Aries [16]] = CHSV(hueP+80, 255, 150);  
leds[Aries [17]] = CHSV(hueP+80, 255, 150);  
leds[Aries [18]] = CHSV(hueP+96, 255, 150);  
leds[Aries [19]] = CHSV(hueP+96, 255, 150);  
leds[Aries [20]] = CHSV(hueP+112, 255, 150);  
leds[Aries [21]] = CHSV(hueP+112, 255, 150);  
leds[Aries [22]] = CHSV(hueP+128, 255, 150);  
leds[Aries [23]] = CHSV(hueP+128, 255, 150);  
leds[Aries [24]] = CHSV(hueP+144, 255, 150);  
leds[Aries [25]] = CHSV(hueP+144, 255, 150);  
leds[Aries [26]] = CHSV(hueP+160, 255, 150);  
leds[Aries [27]] = CHSV(hueP+160, 255, 150); 
leds[Aries [28]] = CHSV(hueP+178, 255, 150); 
leds[Aries [29]] = CHSV(hueP+178, 255, 150); 
leds[Aries [28]] = CHSV(hueP+178, 255, 150); 
leds[Aries [29]] = CHSV(hueP+178, 255, 150);
leds[Aries [30]] = CHSV(hueP+194, 255, 150); 
leds[Aries [31]] = CHSV(hueP+194, 255, 150);



leds[AriesBB [0]] = CHSV(hueP, 255, 150);  
leds[AriesBB [1]] = CHSV(hueP, 255, 150);  
leds[AriesBB [2]] = CHSV(hueP+16, 255, 150);  
leds[AriesBB [3]] = CHSV(hueP+16, 255, 150);  
leds[AriesBB [4]] = CHSV(hueP+32, 255, 150);  
leds[AriesBB [5]] = CHSV(hueP+32, 255, 150);  
leds[AriesBB [6]] = CHSV(hueP+48, 255, 150);  
leds[AriesBB [7]] = CHSV(hueP+48, 255, 150);  
leds[AriesBB [8]] = CHSV(hueP+64, 255, 150);  
leds[AriesBB [9]] = CHSV(hueP+64, 255, 150);  
leds[AriesBB [10]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [11]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [12]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [13]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [14]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [15]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [16]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [17]] = CHSV(hueP+80, 255, 150);  
leds[AriesBB [18]] = CHSV(hueP+96, 255, 150);  
leds[AriesBB [19]] = CHSV(hueP+96, 255, 150);  
leds[AriesBB [20]] = CHSV(hueP+112, 255, 150);  
leds[AriesBB [21]] = CHSV(hueP+112, 255, 150);  
leds[AriesBB [22]] = CHSV(hueP+128, 255, 150);  
leds[AriesBB [23]] = CHSV(hueP+128, 255, 150);  
leds[AriesBB [24]] = CHSV(hueP+144, 255, 150);  
leds[AriesBB [25]] = CHSV(hueP+144, 255, 150);  
leds[AriesBB [26]] = CHSV(hueP+160, 255, 150);  
leds[AriesBB [27]] = CHSV(hueP+160, 255, 150); 
leds[AriesBB [28]] = CHSV(hueP+178, 255, 150); 
leds[AriesBB [29]] = CHSV(hueP+178, 255, 150);
leds[AriesBB [28]] = CHSV(hueP+178, 255, 150); 
leds[AriesBB [29]] = CHSV(hueP+178, 255, 150);
leds[AriesBB [30]] = CHSV(hueP+194, 255, 150); 
leds[AriesBB [31]] = CHSV(hueP+194, 255, 150);



leds[AriesCC [0]] = CHSV(hueP, 255, 150);  
leds[AriesCC [1]] = CHSV(hueP, 255, 150);  
leds[AriesCC [2]] = CHSV(hueP+16, 255, 150);  
leds[AriesCC [3]] = CHSV(hueP+16, 255, 150);  
leds[AriesCC [4]] = CHSV(hueP+32, 255, 150);  
leds[AriesCC [5]] = CHSV(hueP+32, 255, 150);  
leds[AriesCC [6]] = CHSV(hueP+48, 255, 150);  
leds[AriesCC [7]] = CHSV(hueP+48, 255, 150);  
leds[AriesCC [8]] = CHSV(hueP+64, 255, 150);  
leds[AriesCC [9]] = CHSV(hueP+64, 255, 150);  
leds[AriesCC [10]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [11]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [12]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [13]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [14]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [15]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [16]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [17]] = CHSV(hueP+80, 255, 150);  
leds[AriesCC [18]] = CHSV(hueP+96, 255, 150);  
leds[AriesCC [19]] = CHSV(hueP+96, 255, 150);  
leds[AriesCC [20]] = CHSV(hueP+112, 255, 150);  
leds[AriesCC [21]] = CHSV(hueP+112, 255, 150);  
leds[AriesCC [22]] = CHSV(hueP+128, 255, 150);  
leds[AriesCC [23]] = CHSV(hueP+128, 255, 150);  
leds[AriesCC [24]] = CHSV(hueP+144, 255, 150);  
leds[AriesCC [25]] = CHSV(hueP+144, 255, 150);  
leds[AriesCC [26]] = CHSV(hueP+160, 255, 150);  
leds[AriesCC [27]] = CHSV(hueP+160, 255, 150); 
leds[AriesCC [28]] = CHSV(hueP+178, 255, 150); 
leds[AriesCC [29]] = CHSV(hueP+178, 255, 150); 
leds[AriesCC [28]] = CHSV(hueP+178, 255, 150); 
leds[AriesCC [29]] = CHSV(hueP+178, 255, 150);
leds[AriesCC [30]] = CHSV(hueP+194, 255, 150); 
leds[AriesCC [31]] = CHSV(hueP+194, 255, 150);



leds[AriesDD [0]] = CHSV(hueP, 255, 150);  
leds[AriesDD [1]] = CHSV(hueP, 255, 150);  
leds[AriesDD [2]] = CHSV(hueP+16, 255, 150);  
leds[AriesDD [3]] = CHSV(hueP+16, 255, 150);  
leds[AriesDD [4]] = CHSV(hueP+32, 255, 150);  
leds[AriesDD [5]] = CHSV(hueP+32, 255, 150);  
leds[AriesDD [6]] = CHSV(hueP+48, 255, 150);  
leds[AriesDD [7]] = CHSV(hueP+48, 255, 150);  
leds[AriesDD [8]] = CHSV(hueP+64, 255, 150);  
leds[AriesDD [9]] = CHSV(hueP+64, 255, 150);  
leds[AriesDD [10]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [11]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [12]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [13]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [14]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [15]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [16]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [17]] = CHSV(hueP+80, 255, 150);  
leds[AriesDD [18]] = CHSV(hueP+96, 255, 150);  
leds[AriesDD [19]] = CHSV(hueP+96, 255, 150);  
leds[AriesDD [20]] = CHSV(hueP+112, 255, 150);  
leds[AriesDD [21]] = CHSV(hueP+112, 255, 150);  
leds[AriesDD [22]] = CHSV(hueP+128, 255, 150);  
leds[AriesDD [23]] = CHSV(hueP+128, 255, 150);  
leds[AriesDD [24]] = CHSV(hueP+144, 255, 150);  
leds[AriesDD [25]] = CHSV(hueP+144, 255, 150);  
leds[AriesDD [26]] = CHSV(hueP+160, 255, 150);  
leds[AriesDD [27]] = CHSV(hueP+160, 255, 150); 
leds[AriesDD [28]] = CHSV(hueP+178, 255, 150); 
leds[AriesDD [29]] = CHSV(hueP+178, 255, 150);
leds[AriesDD [28]] = CHSV(hueP+178, 255, 150); 
leds[AriesDD [29]] = CHSV(hueP+178, 255, 150);
leds[AriesDD [30]] = CHSV(hueP+194, 255, 150); 
leds[AriesDD [31]] = CHSV(hueP+194, 255, 150);



leds[AriesEE [0]] = CHSV(hueP, 255, 150);  
leds[AriesEE [1]] = CHSV(hueP, 255, 150);  
leds[AriesEE [2]] = CHSV(hueP+16, 255, 150);  
leds[AriesEE [3]] = CHSV(hueP+16, 255, 150);  
leds[AriesEE [4]] = CHSV(hueP+32, 255, 150);  
leds[AriesEE [5]] = CHSV(hueP+32, 255, 150);  
leds[AriesEE [6]] = CHSV(hueP+48, 255, 150);  
leds[AriesEE [7]] = CHSV(hueP+48, 255, 150);  
leds[AriesEE [8]] = CHSV(hueP+64, 255, 150);  
leds[AriesEE [9]] = CHSV(hueP+64, 255, 150);  
leds[AriesEE [10]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [11]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [12]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [13]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [14]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [15]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [16]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [17]] = CHSV(hueP+80, 255, 150);  
leds[AriesEE [18]] = CHSV(hueP+96, 255, 150);  
leds[AriesEE [19]] = CHSV(hueP+96, 255, 150);  
leds[AriesEE [20]] = CHSV(hueP+112, 255, 150);  
leds[AriesEE [21]] = CHSV(hueP+112, 255, 150);  
leds[AriesEE [22]] = CHSV(hueP+128, 255, 150);  
leds[AriesEE [23]] = CHSV(hueP+128, 255, 150);  
leds[AriesEE [24]] = CHSV(hueP+144, 255, 150);  
leds[AriesEE [25]] = CHSV(hueP+144, 255, 150);  
leds[AriesEE [26]] = CHSV(hueP+160, 255, 150);  
leds[AriesEE [27]] = CHSV(hueP+160, 255, 150); 
leds[AriesEE [28]] = CHSV(hueP+178, 255, 150); 
leds[AriesEE [29]] = CHSV(hueP+178, 255, 150);
leds[AriesEE [30]] = CHSV(hueP+194, 255, 150); 
leds[AriesEE [31]] = CHSV(hueP+194, 255, 150);
}



if (signSave == 1) {
leds[Taurus [0]] = CHSV(hueP, 255, 150);  
leds[Taurus [1]] = CHSV(hueP, 255, 150);  
leds[Taurus [2]] = CHSV(hueP+16, 255, 150);  
leds[Taurus [3]] = CHSV(hueP+16, 255, 150);  
leds[Taurus [4]] = CHSV(hueP+32, 255, 150);  
leds[Taurus [5]] = CHSV(hueP+32, 255, 150);  
leds[Taurus [6]] = CHSV(hueP+48, 255, 150);  
leds[Taurus [7]] = CHSV(hueP+48, 255, 150);  
leds[Taurus [8]] = CHSV(hueP+64, 255, 150);  
leds[Taurus [9]] = CHSV(hueP+64, 255, 150);  
leds[Taurus [10]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [11]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [12]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [13]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [14]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [15]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [16]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [17]] = CHSV(hueP+80, 255, 150);  
leds[Taurus [18]] = CHSV(hueP+96, 255, 150);  
leds[Taurus [19]] = CHSV(hueP+96, 255, 150);  
leds[Taurus [20]] = CHSV(hueP+112, 255, 150);  
leds[Taurus [21]] = CHSV(hueP+112, 255, 150);  
leds[Taurus [22]] = CHSV(hueP+128, 255, 150);  
leds[Taurus [23]] = CHSV(hueP+128, 255, 150);  
leds[Taurus [24]] = CHSV(hueP+144, 255, 150);  
leds[Taurus [25]] = CHSV(hueP+144, 255, 150);  
leds[Taurus [26]] = CHSV(hueP+160, 255, 150);  
leds[Taurus [27]] = CHSV(hueP+160, 255, 150); 
leds[Taurus [28]] = CHSV(hueP+178, 255, 150); 
leds[Taurus [29]] = CHSV(hueP+178, 255, 150); 
leds[Taurus [28]] = CHSV(hueP+178, 255, 150); 
leds[Taurus [29]] = CHSV(hueP+178, 255, 150);
leds[Taurus [30]] = CHSV(hueP+194, 255, 150); 
leds[Taurus [31]] = CHSV(hueP+194, 255, 150);



leds[TaurusBB [0]] = CHSV(hueP, 255, 150);  
leds[TaurusBB [1]] = CHSV(hueP, 255, 150);  
leds[TaurusBB [2]] = CHSV(hueP+16, 255, 150);  
leds[TaurusBB [3]] = CHSV(hueP+16, 255, 150);  
leds[TaurusBB [4]] = CHSV(hueP+32, 255, 150);  
leds[TaurusBB [5]] = CHSV(hueP+32, 255, 150);  
leds[TaurusBB [6]] = CHSV(hueP+48, 255, 150);  
leds[TaurusBB [7]] = CHSV(hueP+48, 255, 150);  
leds[TaurusBB [8]] = CHSV(hueP+64, 255, 150);  
leds[TaurusBB [9]] = CHSV(hueP+64, 255, 150);  
leds[TaurusBB [10]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [11]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [12]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [13]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [14]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [15]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [16]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [17]] = CHSV(hueP+80, 255, 150);  
leds[TaurusBB [18]] = CHSV(hueP+96, 255, 150);  
leds[TaurusBB [19]] = CHSV(hueP+96, 255, 150);  
leds[TaurusBB [20]] = CHSV(hueP+112, 255, 150);  
leds[TaurusBB [21]] = CHSV(hueP+112, 255, 150);  
leds[TaurusBB [22]] = CHSV(hueP+128, 255, 150);  
leds[TaurusBB [23]] = CHSV(hueP+128, 255, 150);  
leds[TaurusBB [24]] = CHSV(hueP+144, 255, 150);  
leds[TaurusBB [25]] = CHSV(hueP+144, 255, 150);  
leds[TaurusBB [26]] = CHSV(hueP+160, 255, 150);  
leds[TaurusBB [27]] = CHSV(hueP+160, 255, 150); 
leds[TaurusBB [28]] = CHSV(hueP+178, 255, 150); 
leds[TaurusBB [29]] = CHSV(hueP+178, 255, 150);
leds[TaurusBB [28]] = CHSV(hueP+178, 255, 150); 
leds[TaurusBB [29]] = CHSV(hueP+178, 255, 150);
leds[TaurusBB [30]] = CHSV(hueP+194, 255, 150); 
leds[TaurusBB [31]] = CHSV(hueP+194, 255, 150);



leds[TaurusCC [0]] = CHSV(hueP, 255, 150);  
leds[TaurusCC [1]] = CHSV(hueP, 255, 150);  
leds[TaurusCC [2]] = CHSV(hueP+16, 255, 150);  
leds[TaurusCC [3]] = CHSV(hueP+16, 255, 150);  
leds[TaurusCC [4]] = CHSV(hueP+32, 255, 150);  
leds[TaurusCC [5]] = CHSV(hueP+32, 255, 150);  
leds[TaurusCC [6]] = CHSV(hueP+48, 255, 150);  
leds[TaurusCC [7]] = CHSV(hueP+48, 255, 150);  
leds[TaurusCC [8]] = CHSV(hueP+64, 255, 150);  
leds[TaurusCC [9]] = CHSV(hueP+64, 255, 150);  
leds[TaurusCC [10]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [11]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [12]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [13]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [14]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [15]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [16]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [17]] = CHSV(hueP+80, 255, 150);  
leds[TaurusCC [18]] = CHSV(hueP+96, 255, 150);  
leds[TaurusCC [19]] = CHSV(hueP+96, 255, 150);  
leds[TaurusCC [20]] = CHSV(hueP+112, 255, 150);  
leds[TaurusCC [21]] = CHSV(hueP+112, 255, 150);  
leds[TaurusCC [22]] = CHSV(hueP+128, 255, 150);  
leds[TaurusCC [23]] = CHSV(hueP+128, 255, 150);  
leds[TaurusCC [24]] = CHSV(hueP+144, 255, 150);  
leds[TaurusCC [25]] = CHSV(hueP+144, 255, 150);  
leds[TaurusCC [26]] = CHSV(hueP+160, 255, 150);  
leds[TaurusCC [27]] = CHSV(hueP+160, 255, 150); 
leds[TaurusCC [28]] = CHSV(hueP+178, 255, 150); 
leds[TaurusCC [29]] = CHSV(hueP+178, 255, 150); 
leds[TaurusCC [28]] = CHSV(hueP+178, 255, 150); 
leds[TaurusCC [29]] = CHSV(hueP+178, 255, 150);
leds[TaurusCC [30]] = CHSV(hueP+194, 255, 150); 
leds[TaurusCC [31]] = CHSV(hueP+194, 255, 150);



leds[TaurusDD [0]] = CHSV(hueP, 255, 150);  
leds[TaurusDD [1]] = CHSV(hueP, 255, 150);  
leds[TaurusDD [2]] = CHSV(hueP+16, 255, 150);  
leds[TaurusDD [3]] = CHSV(hueP+16, 255, 150);  
leds[TaurusDD [4]] = CHSV(hueP+32, 255, 150);  
leds[TaurusDD [5]] = CHSV(hueP+32, 255, 150);  
leds[TaurusDD [6]] = CHSV(hueP+48, 255, 150);  
leds[TaurusDD [7]] = CHSV(hueP+48, 255, 150);  
leds[TaurusDD [8]] = CHSV(hueP+64, 255, 150);  
leds[TaurusDD [9]] = CHSV(hueP+64, 255, 150);  
leds[TaurusDD [10]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [11]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [12]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [13]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [14]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [15]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [16]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [17]] = CHSV(hueP+80, 255, 150);  
leds[TaurusDD [18]] = CHSV(hueP+96, 255, 150);  
leds[TaurusDD [19]] = CHSV(hueP+96, 255, 150);  
leds[TaurusDD [20]] = CHSV(hueP+112, 255, 150);  
leds[TaurusDD [21]] = CHSV(hueP+112, 255, 150);  
leds[TaurusDD [22]] = CHSV(hueP+128, 255, 150);  
leds[TaurusDD [23]] = CHSV(hueP+128, 255, 150);  
leds[TaurusDD [24]] = CHSV(hueP+144, 255, 150);  
leds[TaurusDD [25]] = CHSV(hueP+144, 255, 150);  
leds[TaurusDD [26]] = CHSV(hueP+160, 255, 150);  
leds[TaurusDD [27]] = CHSV(hueP+160, 255, 150); 
leds[TaurusDD [28]] = CHSV(hueP+178, 255, 150); 
leds[TaurusDD [29]] = CHSV(hueP+178, 255, 150);
leds[TaurusDD [28]] = CHSV(hueP+178, 255, 150); 
leds[TaurusDD [29]] = CHSV(hueP+178, 255, 150);
leds[TaurusDD [30]] = CHSV(hueP+194, 255, 150); 
leds[TaurusDD [31]] = CHSV(hueP+194, 255, 150);



leds[TaurusEE [0]] = CHSV(hueP, 255, 150);  
leds[TaurusEE [1]] = CHSV(hueP, 255, 150);  
leds[TaurusEE [2]] = CHSV(hueP+16, 255, 150);  
leds[TaurusEE [3]] = CHSV(hueP+16, 255, 150);  
leds[TaurusEE [4]] = CHSV(hueP+32, 255, 150);  
leds[TaurusEE [5]] = CHSV(hueP+32, 255, 150);  
leds[TaurusEE [6]] = CHSV(hueP+48, 255, 150);  
leds[TaurusEE [7]] = CHSV(hueP+48, 255, 150);  
leds[TaurusEE [8]] = CHSV(hueP+64, 255, 150);  
leds[TaurusEE [9]] = CHSV(hueP+64, 255, 150);  
leds[TaurusEE [10]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [11]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [12]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [13]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [14]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [15]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [16]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [17]] = CHSV(hueP+80, 255, 150);  
leds[TaurusEE [18]] = CHSV(hueP+96, 255, 150);  
leds[TaurusEE [19]] = CHSV(hueP+96, 255, 150);  
leds[TaurusEE [20]] = CHSV(hueP+112, 255, 150);  
leds[TaurusEE [21]] = CHSV(hueP+112, 255, 150);  
leds[TaurusEE [22]] = CHSV(hueP+128, 255, 150);  
leds[TaurusEE [23]] = CHSV(hueP+128, 255, 150);  
leds[TaurusEE [24]] = CHSV(hueP+144, 255, 150);  
leds[TaurusEE [25]] = CHSV(hueP+144, 255, 150);  
leds[TaurusEE [26]] = CHSV(hueP+160, 255, 150);  
leds[TaurusEE [27]] = CHSV(hueP+160, 255, 150); 
leds[TaurusEE [28]] = CHSV(hueP+178, 255, 150); 
leds[TaurusEE [29]] = CHSV(hueP+178, 255, 150);
leds[TaurusEE [30]] = CHSV(hueP+194, 255, 150); 
leds[TaurusEE [31]] = CHSV(hueP+194, 255, 150);




}

if (signSave == 2) {
leds[Gemini [0]] = CHSV(hueP, 255, 150);  
leds[Gemini [1]] = CHSV(hueP, 255, 150);  
leds[Gemini [2]] = CHSV(hueP+16, 255, 150);  
leds[Gemini [3]] = CHSV(hueP+16, 255, 150);  
leds[Gemini [4]] = CHSV(hueP+32, 255, 150);  
leds[Gemini [5]] = CHSV(hueP+32, 255, 150);  
leds[Gemini [6]] = CHSV(hueP+48, 255, 150);  
leds[Gemini [7]] = CHSV(hueP+48, 255, 150);  
leds[Gemini [8]] = CHSV(hueP+64, 255, 150);  
leds[Gemini [9]] = CHSV(hueP+64, 255, 150);  
leds[Gemini [10]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [11]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [12]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [13]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [14]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [15]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [16]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [17]] = CHSV(hueP+80, 255, 150);  
leds[Gemini [18]] = CHSV(hueP+96, 255, 150);  
leds[Gemini [19]] = CHSV(hueP+96, 255, 150);  
leds[Gemini [20]] = CHSV(hueP+112, 255, 150);  
leds[Gemini [21]] = CHSV(hueP+112, 255, 150);  
leds[Gemini [22]] = CHSV(hueP+128, 255, 150);  
leds[Gemini [23]] = CHSV(hueP+128, 255, 150);  
leds[Gemini [24]] = CHSV(hueP+144, 255, 150);  
leds[Gemini [25]] = CHSV(hueP+144, 255, 150);  
leds[Gemini [26]] = CHSV(hueP+160, 255, 150);  
leds[Gemini [27]] = CHSV(hueP+160, 255, 150); 
leds[Gemini [28]] = CHSV(hueP+178, 255, 150); 
leds[Gemini [29]] = CHSV(hueP+178, 255, 150); 
leds[Gemini [28]] = CHSV(hueP+178, 255, 150); 
leds[Gemini [29]] = CHSV(hueP+178, 255, 150);
leds[Gemini [30]] = CHSV(hueP+194, 255, 150); 
leds[Gemini [31]] = CHSV(hueP+194, 255, 150);
leds[Gemini [32]] = CHSV(hueP+210, 255, 150); 
leds[Gemini [33]] = CHSV(hueP+210, 255, 150);
leds[Gemini [34]] = CHSV(hueP+226, 255, 150); 
leds[Gemini [35]] = CHSV(hueP+226, 255, 150);
leds[Gemini [36]] = CHSV(hueP+242, 255, 150); 
leds[Gemini [37]] = CHSV(hueP+242, 255, 150);


leds[GeminiBB [0]] = CHSV(hueP, 255, 150);  
leds[GeminiBB [1]] = CHSV(hueP, 255, 150);  
leds[GeminiBB [2]] = CHSV(hueP+16, 255, 150);  
leds[GeminiBB [3]] = CHSV(hueP+16, 255, 150);  
leds[GeminiBB [4]] = CHSV(hueP+32, 255, 150);  
leds[GeminiBB [5]] = CHSV(hueP+32, 255, 150);  
leds[GeminiBB [6]] = CHSV(hueP+48, 255, 150);  
leds[GeminiBB [7]] = CHSV(hueP+48, 255, 150);  
leds[GeminiBB [8]] = CHSV(hueP+64, 255, 150);  
leds[GeminiBB [9]] = CHSV(hueP+64, 255, 150);  
leds[GeminiBB [10]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [11]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [12]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [13]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [14]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [15]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [16]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [17]] = CHSV(hueP+80, 255, 150);  
leds[GeminiBB [18]] = CHSV(hueP+96, 255, 150);  
leds[GeminiBB [19]] = CHSV(hueP+96, 255, 150);  
leds[GeminiBB [20]] = CHSV(hueP+112, 255, 150);  
leds[GeminiBB [21]] = CHSV(hueP+112, 255, 150);  
leds[GeminiBB [22]] = CHSV(hueP+128, 255, 150);  
leds[GeminiBB [23]] = CHSV(hueP+128, 255, 150);  
leds[GeminiBB [24]] = CHSV(hueP+144, 255, 150);  
leds[GeminiBB [25]] = CHSV(hueP+144, 255, 150);  
leds[GeminiBB [26]] = CHSV(hueP+160, 255, 150);  
leds[GeminiBB [27]] = CHSV(hueP+160, 255, 150); 
leds[GeminiBB [28]] = CHSV(hueP+178, 255, 150); 
leds[GeminiBB [29]] = CHSV(hueP+178, 255, 150);
leds[GeminiBB [28]] = CHSV(hueP+178, 255, 150); 
leds[GeminiBB [29]] = CHSV(hueP+178, 255, 150);
leds[GeminiBB [30]] = CHSV(hueP+194, 255, 150); 
leds[GeminiBB [31]] = CHSV(hueP+194, 255, 150);
leds[GeminiBB [32]] = CHSV(hueP+210, 255, 150); 
leds[GeminiBB [33]] = CHSV(hueP+210, 255, 150);
leds[GeminiBB [34]] = CHSV(hueP+226, 255, 150); 
leds[GeminiBB [35]] = CHSV(hueP+226, 255, 150);
leds[GeminiBB [36]] = CHSV(hueP+242, 255, 150); 
leds[GeminiBB [37]] = CHSV(hueP+242, 255, 150);


leds[GeminiCC [0]] = CHSV(hueP, 255, 150);  
leds[GeminiCC [1]] = CHSV(hueP, 255, 150);  
leds[GeminiCC [2]] = CHSV(hueP+16, 255, 150);  
leds[GeminiCC [3]] = CHSV(hueP+16, 255, 150);  
leds[GeminiCC [4]] = CHSV(hueP+32, 255, 150);  
leds[GeminiCC [5]] = CHSV(hueP+32, 255, 150);  
leds[GeminiCC [6]] = CHSV(hueP+48, 255, 150);  
leds[GeminiCC [7]] = CHSV(hueP+48, 255, 150);  
leds[GeminiCC [8]] = CHSV(hueP+64, 255, 150);  
leds[GeminiCC [9]] = CHSV(hueP+64, 255, 150);  
leds[GeminiCC [10]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [11]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [12]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [13]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [14]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [15]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [16]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [17]] = CHSV(hueP+80, 255, 150);  
leds[GeminiCC [18]] = CHSV(hueP+96, 255, 150);  
leds[GeminiCC [19]] = CHSV(hueP+96, 255, 150);  
leds[GeminiCC [20]] = CHSV(hueP+112, 255, 150);  
leds[GeminiCC [21]] = CHSV(hueP+112, 255, 150);  
leds[GeminiCC [22]] = CHSV(hueP+128, 255, 150);  
leds[GeminiCC [23]] = CHSV(hueP+128, 255, 150);  
leds[GeminiCC [24]] = CHSV(hueP+144, 255, 150);  
leds[GeminiCC [25]] = CHSV(hueP+144, 255, 150);  
leds[GeminiCC [26]] = CHSV(hueP+160, 255, 150);  
leds[GeminiCC [27]] = CHSV(hueP+160, 255, 150); 
leds[GeminiCC [28]] = CHSV(hueP+178, 255, 150); 
leds[GeminiCC [29]] = CHSV(hueP+178, 255, 150); 
leds[GeminiCC [28]] = CHSV(hueP+178, 255, 150); 
leds[GeminiCC [29]] = CHSV(hueP+178, 255, 150);
leds[GeminiCC [30]] = CHSV(hueP+194, 255, 150); 
leds[GeminiCC [31]] = CHSV(hueP+194, 255, 150);
leds[GeminiCC [32]] = CHSV(hueP+210, 255, 150); 
leds[GeminiCC [33]] = CHSV(hueP+210, 255, 150);
leds[GeminiCC [34]] = CHSV(hueP+226, 255, 150); 
leds[GeminiCC [35]] = CHSV(hueP+226, 255, 150);
leds[GeminiCC [36]] = CHSV(hueP+242, 255, 150); 
leds[GeminiCC [37]] = CHSV(hueP+242, 255, 150);


leds[GeminiDD [0]] = CHSV(hueP, 255, 150);  
leds[GeminiDD [1]] = CHSV(hueP, 255, 150);  
leds[GeminiDD [2]] = CHSV(hueP+16, 255, 150);  
leds[GeminiDD [3]] = CHSV(hueP+16, 255, 150);  
leds[GeminiDD [4]] = CHSV(hueP+32, 255, 150);  
leds[GeminiDD [5]] = CHSV(hueP+32, 255, 150);  
leds[GeminiDD [6]] = CHSV(hueP+48, 255, 150);  
leds[GeminiDD [7]] = CHSV(hueP+48, 255, 150);  
leds[GeminiDD [8]] = CHSV(hueP+64, 255, 150);  
leds[GeminiDD [9]] = CHSV(hueP+64, 255, 150);  
leds[GeminiDD [10]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [11]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [12]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [13]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [14]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [15]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [16]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [17]] = CHSV(hueP+80, 255, 150);  
leds[GeminiDD [18]] = CHSV(hueP+96, 255, 150);  
leds[GeminiDD [19]] = CHSV(hueP+96, 255, 150);  
leds[GeminiDD [20]] = CHSV(hueP+112, 255, 150);  
leds[GeminiDD [21]] = CHSV(hueP+112, 255, 150);  
leds[GeminiDD [22]] = CHSV(hueP+128, 255, 150);  
leds[GeminiDD [23]] = CHSV(hueP+128, 255, 150);  
leds[GeminiDD [24]] = CHSV(hueP+144, 255, 150);  
leds[GeminiDD [25]] = CHSV(hueP+144, 255, 150);  
leds[GeminiDD [26]] = CHSV(hueP+160, 255, 150);  
leds[GeminiDD [27]] = CHSV(hueP+160, 255, 150); 
leds[GeminiDD [28]] = CHSV(hueP+178, 255, 150); 
leds[GeminiDD [29]] = CHSV(hueP+178, 255, 150);
leds[GeminiDD [28]] = CHSV(hueP+178, 255, 150); 
leds[GeminiDD [29]] = CHSV(hueP+178, 255, 150);
leds[GeminiDD [30]] = CHSV(hueP+194, 255, 150); 
leds[GeminiDD [31]] = CHSV(hueP+194, 255, 150);
leds[GeminiDD [32]] = CHSV(hueP+210, 255, 150); 
leds[GeminiDD [33]] = CHSV(hueP+210, 255, 150);
leds[GeminiDD [34]] = CHSV(hueP+226, 255, 150); 
leds[GeminiDD [35]] = CHSV(hueP+226, 255, 150);
leds[GeminiDD [36]] = CHSV(hueP+242, 255, 150); 
leds[GeminiDD [37]] = CHSV(hueP+242, 255, 150);


leds[GeminiEE [0]] = CHSV(hueP, 255, 150);  
leds[GeminiEE [1]] = CHSV(hueP, 255, 150);  
leds[GeminiEE [2]] = CHSV(hueP+16, 255, 150);  
leds[GeminiEE [3]] = CHSV(hueP+16, 255, 150);  
leds[GeminiEE [4]] = CHSV(hueP+32, 255, 150);  
leds[GeminiEE [5]] = CHSV(hueP+32, 255, 150);  
leds[GeminiEE [6]] = CHSV(hueP+48, 255, 150);  
leds[GeminiEE [7]] = CHSV(hueP+48, 255, 150);  
leds[GeminiEE [8]] = CHSV(hueP+64, 255, 150);  
leds[GeminiEE [9]] = CHSV(hueP+64, 255, 150);  
leds[GeminiEE [10]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [11]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [12]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [13]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [14]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [15]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [16]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [17]] = CHSV(hueP+80, 255, 150);  
leds[GeminiEE [18]] = CHSV(hueP+96, 255, 150);  
leds[GeminiEE [19]] = CHSV(hueP+96, 255, 150);  
leds[GeminiEE [20]] = CHSV(hueP+112, 255, 150);  
leds[GeminiEE [21]] = CHSV(hueP+112, 255, 150);  
leds[GeminiEE [22]] = CHSV(hueP+128, 255, 150);  
leds[GeminiEE [23]] = CHSV(hueP+128, 255, 150);  
leds[GeminiEE [24]] = CHSV(hueP+144, 255, 150);  
leds[GeminiEE [25]] = CHSV(hueP+144, 255, 150);  
leds[GeminiEE [26]] = CHSV(hueP+160, 255, 150);  
leds[GeminiEE [27]] = CHSV(hueP+160, 255, 150); 
leds[GeminiEE [28]] = CHSV(hueP+178, 255, 150); 
leds[GeminiEE [29]] = CHSV(hueP+178, 255, 150);
leds[GeminiEE [30]] = CHSV(hueP+194, 255, 150); 
leds[GeminiEE [31]] = CHSV(hueP+194, 255, 150);
leds[GeminiEE [32]] = CHSV(hueP+210, 255, 150); 
leds[GeminiEE [33]] = CHSV(hueP+210, 255, 150);
leds[GeminiEE [34]] = CHSV(hueP+226, 255, 150); 
leds[GeminiEE [35]] = CHSV(hueP+226, 255, 150);
leds[GeminiEE [36]] = CHSV(hueP+242, 255, 150); 
leds[GeminiEE [37]] = CHSV(hueP+242, 255, 150);



}


if (signSave == 3) {
leds[Cancer [0]] = CHSV(hueP, 255, 150);  
leds[Cancer [1]] = CHSV(hueP, 255, 150);  
leds[Cancer [2]] = CHSV(hueP+16, 255, 150);  
leds[Cancer [3]] = CHSV(hueP+16, 255, 150);  
leds[Cancer [4]] = CHSV(hueP+32, 255, 150);  
leds[Cancer [5]] = CHSV(hueP+32, 255, 150);  
leds[Cancer [6]] = CHSV(hueP+48, 255, 150);  
leds[Cancer [7]] = CHSV(hueP+48, 255, 150);  
leds[Cancer [8]] = CHSV(hueP+64, 255, 150);  
leds[Cancer [9]] = CHSV(hueP+64, 255, 150);  
leds[Cancer [10]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [11]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [12]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [13]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [14]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [15]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [16]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [17]] = CHSV(hueP+80, 255, 150);  
leds[Cancer [18]] = CHSV(hueP+96, 255, 150);  
leds[Cancer [19]] = CHSV(hueP+96, 255, 150);  
leds[Cancer [20]] = CHSV(hueP+112, 255, 150);  
leds[Cancer [21]] = CHSV(hueP+112, 255, 150);  
leds[Cancer [22]] = CHSV(hueP+128, 255, 150);  
leds[Cancer [23]] = CHSV(hueP+128, 255, 150);  
leds[Cancer [24]] = CHSV(hueP+144, 255, 150);  
leds[Cancer [25]] = CHSV(hueP+144, 255, 150);  
leds[Cancer [26]] = CHSV(hueP+160, 255, 150);  
leds[Cancer [27]] = CHSV(hueP+160, 255, 150); 
leds[Cancer [28]] = CHSV(hueP+178, 255, 150); 
leds[Cancer [29]] = CHSV(hueP+178, 255, 150); 
leds[Cancer [28]] = CHSV(hueP+178, 255, 150); 
leds[Cancer [29]] = CHSV(hueP+178, 255, 150);

leds[CancerBB [0]] = CHSV(hueP, 255, 150);  
leds[CancerBB [1]] = CHSV(hueP, 255, 150);  
leds[CancerBB [2]] = CHSV(hueP+16, 255, 150);  
leds[CancerBB [3]] = CHSV(hueP+16, 255, 150);  
leds[CancerBB [4]] = CHSV(hueP+32, 255, 150);  
leds[CancerBB [5]] = CHSV(hueP+32, 255, 150);  
leds[CancerBB [6]] = CHSV(hueP+48, 255, 150);  
leds[CancerBB [7]] = CHSV(hueP+48, 255, 150);  
leds[CancerBB [8]] = CHSV(hueP+64, 255, 150);  
leds[CancerBB [9]] = CHSV(hueP+64, 255, 150);  
leds[CancerBB [10]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [11]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [12]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [13]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [14]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [15]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [16]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [17]] = CHSV(hueP+80, 255, 150);  
leds[CancerBB [18]] = CHSV(hueP+96, 255, 150);  
leds[CancerBB [19]] = CHSV(hueP+96, 255, 150);  
leds[CancerBB [20]] = CHSV(hueP+112, 255, 150);  
leds[CancerBB [21]] = CHSV(hueP+112, 255, 150);  
leds[CancerBB [22]] = CHSV(hueP+128, 255, 150);  
leds[CancerBB [23]] = CHSV(hueP+128, 255, 150);  
leds[CancerBB [24]] = CHSV(hueP+144, 255, 150);  
leds[CancerBB [25]] = CHSV(hueP+144, 255, 150);  
leds[CancerBB [26]] = CHSV(hueP+160, 255, 150);  
leds[CancerBB [27]] = CHSV(hueP+160, 255, 150); 
leds[CancerBB [28]] = CHSV(hueP+178, 255, 150); 
leds[CancerBB [29]] = CHSV(hueP+178, 255, 150);
leds[CancerBB [28]] = CHSV(hueP+178, 255, 150); 
leds[CancerBB [29]] = CHSV(hueP+178, 255, 150);

leds[CancerCC [0]] = CHSV(hueP, 255, 150);  
leds[CancerCC [1]] = CHSV(hueP, 255, 150);  
leds[CancerCC [2]] = CHSV(hueP+16, 255, 150);  
leds[CancerCC [3]] = CHSV(hueP+16, 255, 150);  
leds[CancerCC [4]] = CHSV(hueP+32, 255, 150);  
leds[CancerCC [5]] = CHSV(hueP+32, 255, 150);  
leds[CancerCC [6]] = CHSV(hueP+48, 255, 150);  
leds[CancerCC [7]] = CHSV(hueP+48, 255, 150);  
leds[CancerCC [8]] = CHSV(hueP+64, 255, 150);  
leds[CancerCC [9]] = CHSV(hueP+64, 255, 150);  
leds[CancerCC [10]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [11]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [12]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [13]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [14]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [15]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [16]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [17]] = CHSV(hueP+80, 255, 150);  
leds[CancerCC [18]] = CHSV(hueP+96, 255, 150);  
leds[CancerCC [19]] = CHSV(hueP+96, 255, 150);  
leds[CancerCC [20]] = CHSV(hueP+112, 255, 150);  
leds[CancerCC [21]] = CHSV(hueP+112, 255, 150);  
leds[CancerCC [22]] = CHSV(hueP+128, 255, 150);  
leds[CancerCC [23]] = CHSV(hueP+128, 255, 150);  
leds[CancerCC [24]] = CHSV(hueP+144, 255, 150);  
leds[CancerCC [25]] = CHSV(hueP+144, 255, 150);  
leds[CancerCC [26]] = CHSV(hueP+160, 255, 150);  
leds[CancerCC [27]] = CHSV(hueP+160, 255, 150); 
leds[CancerCC [28]] = CHSV(hueP+178, 255, 150); 
leds[CancerCC [29]] = CHSV(hueP+178, 255, 150); 
leds[CancerCC [28]] = CHSV(hueP+178, 255, 150); 
leds[CancerCC [29]] = CHSV(hueP+178, 255, 150);



leds[CancerDD [0]] = CHSV(hueP, 255, 150);  
leds[CancerDD [1]] = CHSV(hueP, 255, 150);  
leds[CancerDD [2]] = CHSV(hueP+16, 255, 150);  
leds[CancerDD [3]] = CHSV(hueP+16, 255, 150);  
leds[CancerDD [4]] = CHSV(hueP+32, 255, 150);  
leds[CancerDD [5]] = CHSV(hueP+32, 255, 150);  
leds[CancerDD [6]] = CHSV(hueP+48, 255, 150);  
leds[CancerDD [7]] = CHSV(hueP+48, 255, 150);  
leds[CancerDD [8]] = CHSV(hueP+64, 255, 150);  
leds[CancerDD [9]] = CHSV(hueP+64, 255, 150);  
leds[CancerDD [10]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [11]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [12]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [13]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [14]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [15]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [16]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [17]] = CHSV(hueP+80, 255, 150);  
leds[CancerDD [18]] = CHSV(hueP+96, 255, 150);  
leds[CancerDD [19]] = CHSV(hueP+96, 255, 150);  
leds[CancerDD [20]] = CHSV(hueP+112, 255, 150);  
leds[CancerDD [21]] = CHSV(hueP+112, 255, 150);  
leds[CancerDD [22]] = CHSV(hueP+128, 255, 150);  
leds[CancerDD [23]] = CHSV(hueP+128, 255, 150);  
leds[CancerDD [24]] = CHSV(hueP+144, 255, 150);  
leds[CancerDD [25]] = CHSV(hueP+144, 255, 150);  
leds[CancerDD [26]] = CHSV(hueP+160, 255, 150);  
leds[CancerDD [27]] = CHSV(hueP+160, 255, 150); 
leds[CancerDD [28]] = CHSV(hueP+178, 255, 150); 
leds[CancerDD [29]] = CHSV(hueP+178, 255, 150);
leds[CancerDD [28]] = CHSV(hueP+178, 255, 150); 
leds[CancerDD [29]] = CHSV(hueP+178, 255, 150);



leds[CancerEE [0]] = CHSV(hueP, 255, 150);  
leds[CancerEE [1]] = CHSV(hueP, 255, 150);  
leds[CancerEE [2]] = CHSV(hueP+16, 255, 150);  
leds[CancerEE [3]] = CHSV(hueP+16, 255, 150);  
leds[CancerEE [4]] = CHSV(hueP+32, 255, 150);  
leds[CancerEE [5]] = CHSV(hueP+32, 255, 150);  
leds[CancerEE [6]] = CHSV(hueP+48, 255, 150);  
leds[CancerEE [7]] = CHSV(hueP+48, 255, 150);  
leds[CancerEE [8]] = CHSV(hueP+64, 255, 150);  
leds[CancerEE [9]] = CHSV(hueP+64, 255, 150);  
leds[CancerEE [10]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [11]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [12]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [13]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [14]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [15]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [16]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [17]] = CHSV(hueP+80, 255, 150);  
leds[CancerEE [18]] = CHSV(hueP+96, 255, 150);  
leds[CancerEE [19]] = CHSV(hueP+96, 255, 150);  
leds[CancerEE [20]] = CHSV(hueP+112, 255, 150);  
leds[CancerEE [21]] = CHSV(hueP+112, 255, 150);  
leds[CancerEE [22]] = CHSV(hueP+128, 255, 150);  
leds[CancerEE [23]] = CHSV(hueP+128, 255, 150);  
leds[CancerEE [24]] = CHSV(hueP+144, 255, 150);  
leds[CancerEE [25]] = CHSV(hueP+144, 255, 150);  
leds[CancerEE [26]] = CHSV(hueP+160, 255, 150);  
leds[CancerEE [27]] = CHSV(hueP+160, 255, 150); 
leds[CancerEE [28]] = CHSV(hueP+178, 255, 150); 

}
*/

if (signSave == 4) {
leds[Leo [0]] = CHSV(hueP, 255, 150);  
leds[Leo [1]] = CHSV(hueP, 255, 150);  
leds[Leo [2]] = CHSV(hueP+16, 255, 150);  
leds[Leo [3]] = CHSV(hueP+16, 255, 150);  
leds[Leo [4]] = CHSV(hueP+32, 255, 150);  
leds[Leo [5]] = CHSV(hueP+32, 255, 150);  
leds[Leo [6]] = CHSV(hueP+48, 255, 150);  
leds[Leo [7]] = CHSV(hueP+48, 255, 150);  
leds[Leo [8]] = CHSV(hueP+64, 255, 150);  
leds[Leo [9]] = CHSV(hueP+64, 255, 150);  
leds[Leo [10]] = CHSV(hueP+80, 255, 150);  
leds[Leo [11]] = CHSV(hueP+80, 255, 150);  
leds[Leo [12]] = CHSV(hueP+80, 255, 150);  
leds[Leo [13]] = CHSV(hueP+80, 255, 150);  
leds[Leo [14]] = CHSV(hueP+80, 255, 150);  
leds[Leo [15]] = CHSV(hueP+80, 255, 150);  
leds[Leo [16]] = CHSV(hueP+80, 255, 150);  
leds[Leo [17]] = CHSV(hueP+80, 255, 150);  
leds[Leo [18]] = CHSV(hueP+96, 255, 150);  
leds[Leo [19]] = CHSV(hueP+96, 255, 150);  
leds[Leo [20]] = CHSV(hueP+112, 255, 150);  
leds[Leo [21]] = CHSV(hueP+112, 255, 150);  
leds[Leo [22]] = CHSV(hueP+128, 255, 150);  
leds[Leo [23]] = CHSV(hueP+128, 255, 150);  
leds[Leo [24]] = CHSV(hueP+144, 255, 150);  
leds[Leo [25]] = CHSV(hueP+144, 255, 150);  
leds[Leo [26]] = CHSV(hueP+160, 255, 150);  
leds[Leo [27]] = CHSV(hueP+160, 255, 150); 


leds[LeoBB [0]] = CHSV(hueP, 255, 150);  
leds[LeoBB [1]] = CHSV(hueP, 255, 150);  
leds[LeoBB [2]] = CHSV(hueP+16, 255, 150);  
leds[LeoBB [3]] = CHSV(hueP+16, 255, 150);  
leds[LeoBB [4]] = CHSV(hueP+32, 255, 150);  
leds[LeoBB [5]] = CHSV(hueP+32, 255, 150);  
leds[LeoBB [6]] = CHSV(hueP+48, 255, 150);  
leds[LeoBB [7]] = CHSV(hueP+48, 255, 150);  
leds[LeoBB [8]] = CHSV(hueP+64, 255, 150);  
leds[LeoBB [9]] = CHSV(hueP+64, 255, 150);  
leds[LeoBB [10]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [11]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [12]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [13]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [14]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [15]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [16]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [17]] = CHSV(hueP+80, 255, 150);  
leds[LeoBB [18]] = CHSV(hueP+96, 255, 150);  
leds[LeoBB [19]] = CHSV(hueP+96, 255, 150);  
leds[LeoBB [20]] = CHSV(hueP+112, 255, 150);  
leds[LeoBB [21]] = CHSV(hueP+112, 255, 150);  
leds[LeoBB [22]] = CHSV(hueP+128, 255, 150);  
leds[LeoBB [23]] = CHSV(hueP+128, 255, 150);  
leds[LeoBB [24]] = CHSV(hueP+144, 255, 150);  
leds[LeoBB [25]] = CHSV(hueP+144, 255, 150);  
leds[LeoBB [26]] = CHSV(hueP+160, 255, 150);  
leds[LeoBB [27]] = CHSV(hueP+160, 255, 150); 

leds[LeoCC [0]] = CHSV(hueP, 255, 150);  
leds[LeoCC [1]] = CHSV(hueP, 255, 150);  
leds[LeoCC [2]] = CHSV(hueP+16, 255, 150);  
leds[LeoCC [3]] = CHSV(hueP+16, 255, 150);  
leds[LeoCC [4]] = CHSV(hueP+32, 255, 150);  
leds[LeoCC [5]] = CHSV(hueP+32, 255, 150);  
leds[LeoCC [6]] = CHSV(hueP+48, 255, 150);  
leds[LeoCC [7]] = CHSV(hueP+48, 255, 150);  
leds[LeoCC [8]] = CHSV(hueP+64, 255, 150);  
leds[LeoCC [9]] = CHSV(hueP+64, 255, 150);  
leds[LeoCC [10]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [11]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [12]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [13]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [14]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [15]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [16]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [17]] = CHSV(hueP+80, 255, 150);  
leds[LeoCC [18]] = CHSV(hueP+96, 255, 150);  
leds[LeoCC [19]] = CHSV(hueP+96, 255, 150);  
leds[LeoCC [20]] = CHSV(hueP+112, 255, 150);  
leds[LeoCC [21]] = CHSV(hueP+112, 255, 150);  
leds[LeoCC [22]] = CHSV(hueP+128, 255, 150);  
leds[LeoCC [23]] = CHSV(hueP+128, 255, 150);  
leds[LeoCC [24]] = CHSV(hueP+144, 255, 150);  
leds[LeoCC [25]] = CHSV(hueP+144, 255, 150);  
leds[LeoCC [26]] = CHSV(hueP+160, 255, 150);  
leds[LeoCC [27]] = CHSV(hueP+160, 255, 150); 

leds[LeoDD [0]] = CHSV(hueP, 255, 150);  
leds[LeoDD [1]] = CHSV(hueP, 255, 150);  
leds[LeoDD [2]] = CHSV(hueP+16, 255, 150);  
leds[LeoDD [3]] = CHSV(hueP+16, 255, 150);  
leds[LeoDD [4]] = CHSV(hueP+32, 255, 150);  
leds[LeoDD [5]] = CHSV(hueP+32, 255, 150);  
leds[LeoDD [6]] = CHSV(hueP+48, 255, 150);  
leds[LeoDD [7]] = CHSV(hueP+48, 255, 150);  
leds[LeoDD [8]] = CHSV(hueP+64, 255, 150);  
leds[LeoDD [9]] = CHSV(hueP+64, 255, 150);  
leds[LeoDD [10]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [11]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [12]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [13]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [14]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [15]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [16]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [17]] = CHSV(hueP+80, 255, 150);  
leds[LeoDD [18]] = CHSV(hueP+96, 255, 150);  
leds[LeoDD [19]] = CHSV(hueP+96, 255, 150);  
leds[LeoDD [20]] = CHSV(hueP+112, 255, 150);  
leds[LeoDD [21]] = CHSV(hueP+112, 255, 150);  
leds[LeoDD [22]] = CHSV(hueP+128, 255, 150);  
leds[LeoDD [23]] = CHSV(hueP+128, 255, 150);  
leds[LeoDD [24]] = CHSV(hueP+144, 255, 150);  
leds[LeoDD [25]] = CHSV(hueP+144, 255, 150);  
leds[LeoDD [26]] = CHSV(hueP+160, 255, 150);  
leds[LeoDD [27]] = CHSV(hueP+160, 255, 150); 


leds[LeoEE [0]] = CHSV(hueP, 255, 150);  
leds[LeoEE [1]] = CHSV(hueP, 255, 150);  
leds[LeoEE [2]] = CHSV(hueP+16, 255, 150);  
leds[LeoEE [3]] = CHSV(hueP+16, 255, 150);  
leds[LeoEE [4]] = CHSV(hueP+32, 255, 150);  
leds[LeoEE [5]] = CHSV(hueP+32, 255, 150);  
leds[LeoEE [6]] = CHSV(hueP+48, 255, 150);  
leds[LeoEE [7]] = CHSV(hueP+48, 255, 150);  
leds[LeoEE [8]] = CHSV(hueP+64, 255, 150);  
leds[LeoEE [9]] = CHSV(hueP+64, 255, 150);  
leds[LeoEE [10]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [11]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [12]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [13]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [14]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [15]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [16]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [17]] = CHSV(hueP+80, 255, 150);  
leds[LeoEE [18]] = CHSV(hueP+96, 255, 150);  
leds[LeoEE [19]] = CHSV(hueP+96, 255, 150);  
leds[LeoEE [20]] = CHSV(hueP+112, 255, 150);  
leds[LeoEE [21]] = CHSV(hueP+112, 255, 150);  
leds[LeoEE [22]] = CHSV(hueP+128, 255, 150);  
leds[LeoEE [23]] = CHSV(hueP+128, 255, 150);  
leds[LeoEE [24]] = CHSV(hueP+144, 255, 150);  
leds[LeoEE [25]] = CHSV(hueP+144, 255, 150);  
leds[LeoEE [26]] = CHSV(hueP+160, 255, 150);  
leds[LeoEE [27]] = CHSV(hueP+160, 255, 150); 



}

if (signSave == 5) {
leds[Virgo [0]] = CHSV(hueP, 255, 150);  
leds[Virgo [1]] = CHSV(hueP, 255, 150);  
leds[Virgo [2]] = CHSV(hueP+16, 255, 150);  
leds[Virgo [3]] = CHSV(hueP+16, 255, 150);  
leds[Virgo [4]] = CHSV(hueP+32, 255, 150);  
leds[Virgo [5]] = CHSV(hueP+32, 255, 150);  
leds[Virgo [6]] = CHSV(hueP+48, 255, 150);  
leds[Virgo [7]] = CHSV(hueP+48, 255, 150);  
leds[Virgo [8]] = CHSV(hueP+64, 255, 150);  
leds[Virgo [9]] = CHSV(hueP+64, 255, 150);  
leds[Virgo [10]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [11]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [12]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [13]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [14]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [15]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [16]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [17]] = CHSV(hueP+80, 255, 150);  
leds[Virgo [18]] = CHSV(hueP+96, 255, 150);  
leds[Virgo [19]] = CHSV(hueP+96, 255, 150);  
leds[Virgo [20]] = CHSV(hueP+112, 255, 150);  
leds[Virgo [21]] = CHSV(hueP+112, 255, 150);  
leds[Virgo [22]] = CHSV(hueP+128, 255, 150);  
leds[Virgo [23]] = CHSV(hueP+128, 255, 150);  
leds[Virgo [24]] = CHSV(hueP+144, 255, 150);  
leds[Virgo [25]] = CHSV(hueP+144, 255, 150);  
leds[Virgo [26]] = CHSV(hueP+160, 255, 150);  
leds[Virgo [27]] = CHSV(hueP+160, 255, 150); 
leds[Virgo [28]] = CHSV(hueP+178, 255, 150); 
leds[Virgo [29]] = CHSV(hueP+178, 255, 150); 
leds[Virgo [28]] = CHSV(hueP+178, 255, 150); 
leds[Virgo [29]] = CHSV(hueP+178, 255, 150);
leds[Virgo [30]] = CHSV(hueP+194, 255, 150); 
leds[Virgo [31]] = CHSV(hueP+194, 255, 150);
leds[Virgo [32]] = CHSV(hueP+210, 255, 150); 
leds[Virgo [33]] = CHSV(hueP+210, 255, 150);
leds[Virgo [34]] = CHSV(hueP+226, 255, 150); 
leds[Virgo [35]] = CHSV(hueP+226, 255, 150);
leds[Virgo [36]] = CHSV(hueP+242, 255, 150); 
leds[Virgo [37]] = CHSV(hueP+242, 255, 150);
leds[Virgo [38]] = CHSV(hueP+258, 255, 150); 
leds[Virgo [39]] = CHSV(hueP+258, 255, 150);
leds[Virgo [40]] = CHSV(hueP+274, 255, 150); 
leds[Virgo [41]] = CHSV(hueP+274, 255, 150);
leds[Virgo [42]] = CHSV(hueP+290, 255, 150); 
leds[Virgo [43]] = CHSV(hueP+290, 255, 150);
leds[Virgo [44]] = CHSV(hueP+316, 255, 150); 
leds[Virgo [45]] = CHSV(hueP+316, 255, 150);
leds[Virgo [46]] = CHSV(hueP+332, 255, 150); 
leds[Virgo [47]] = CHSV(hueP+332, 255, 150);
leds[Virgo [48]] = CHSV(hueP+348, 255, 150); 
leds[Virgo [49]] = CHSV(hueP+348, 255, 150);
leds[Virgo [50]] = CHSV(hueP+364, 255, 150); 
leds[Virgo [51]] = CHSV(hueP+364, 255, 150);
leds[Virgo [52]] = CHSV(hueP+380, 255, 150); 
leds[Virgo [53]] = CHSV(hueP+380, 255, 150);

leds[VirgoBB [0]] = CHSV(hueP, 255, 150);  
leds[VirgoBB [1]] = CHSV(hueP, 255, 150);  
leds[VirgoBB [2]] = CHSV(hueP+16, 255, 150);  
leds[VirgoBB [3]] = CHSV(hueP+16, 255, 150);  
leds[VirgoBB [4]] = CHSV(hueP+32, 255, 150);  
leds[VirgoBB [5]] = CHSV(hueP+32, 255, 150);  
leds[VirgoBB [6]] = CHSV(hueP+48, 255, 150);  
leds[VirgoBB [7]] = CHSV(hueP+48, 255, 150);  
leds[VirgoBB [8]] = CHSV(hueP+64, 255, 150);  
leds[VirgoBB [9]] = CHSV(hueP+64, 255, 150);  
leds[VirgoBB [10]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [11]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [12]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [13]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [14]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [15]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [16]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [17]] = CHSV(hueP+80, 255, 150);  
leds[VirgoBB [18]] = CHSV(hueP+96, 255, 150);  
leds[VirgoBB [19]] = CHSV(hueP+96, 255, 150);  
leds[VirgoBB [20]] = CHSV(hueP+112, 255, 150);  
leds[VirgoBB [21]] = CHSV(hueP+112, 255, 150);  
leds[VirgoBB [22]] = CHSV(hueP+128, 255, 150);  
leds[VirgoBB [23]] = CHSV(hueP+128, 255, 150);  
leds[VirgoBB [24]] = CHSV(hueP+144, 255, 150);  
leds[VirgoBB [25]] = CHSV(hueP+144, 255, 150);  
leds[VirgoBB [26]] = CHSV(hueP+160, 255, 150);  
leds[VirgoBB [27]] = CHSV(hueP+160, 255, 150); 
leds[VirgoBB [28]] = CHSV(hueP+178, 255, 150); 
leds[VirgoBB [29]] = CHSV(hueP+178, 255, 150);
leds[VirgoBB [28]] = CHSV(hueP+178, 255, 150); 
leds[VirgoBB [29]] = CHSV(hueP+178, 255, 150);
leds[VirgoBB [30]] = CHSV(hueP+194, 255, 150); 
leds[VirgoBB [31]] = CHSV(hueP+194, 255, 150);
leds[VirgoBB [32]] = CHSV(hueP+210, 255, 150); 
leds[VirgoBB [33]] = CHSV(hueP+210, 255, 150);
leds[VirgoBB [34]] = CHSV(hueP+226, 255, 150); 
leds[VirgoBB [35]] = CHSV(hueP+226, 255, 150);
leds[VirgoBB [36]] = CHSV(hueP+242, 255, 150); 
leds[VirgoBB [37]] = CHSV(hueP+242, 255, 150);
leds[VirgoBB [38]] = CHSV(hueP+258, 255, 150); 
leds[VirgoBB [39]] = CHSV(hueP+258, 255, 150);
leds[VirgoBB [40]] = CHSV(hueP+274, 255, 150); 
leds[VirgoBB [41]] = CHSV(hueP+274, 255, 150);
leds[VirgoBB [42]] = CHSV(hueP+290, 255, 150); 
leds[VirgoBB [43]] = CHSV(hueP+290, 255, 150); 
leds[VirgoBB [44]] = CHSV(hueP+316, 255, 150); 
leds[VirgoBB [45]] = CHSV(hueP+316, 255, 150);
leds[VirgoBB [46]] = CHSV(hueP+332, 255, 150); 
leds[VirgoBB [47]] = CHSV(hueP+332, 255, 150);
leds[VirgoBB [48]] = CHSV(hueP+348, 255, 150); 
leds[VirgoBB [49]] = CHSV(hueP+348, 255, 150);
leds[VirgoBB [50]] = CHSV(hueP+364, 255, 150); 
leds[VirgoBB [51]] = CHSV(hueP+364, 255, 150);
leds[VirgoBB [52]] = CHSV(hueP+380, 255, 150); 
leds[VirgoBB [53]] = CHSV(hueP+380, 255, 150);

leds[VirgoCC [0]] = CHSV(hueP, 255, 150);  
leds[VirgoCC [1]] = CHSV(hueP, 255, 150);  
leds[VirgoCC [2]] = CHSV(hueP+16, 255, 150);  
leds[VirgoCC [3]] = CHSV(hueP+16, 255, 150);  
leds[VirgoCC [4]] = CHSV(hueP+32, 255, 150);  
leds[VirgoCC [5]] = CHSV(hueP+32, 255, 150);  
leds[VirgoCC [6]] = CHSV(hueP+48, 255, 150);  
leds[VirgoCC [7]] = CHSV(hueP+48, 255, 150);  
leds[VirgoCC [8]] = CHSV(hueP+64, 255, 150);  
leds[VirgoCC [9]] = CHSV(hueP+64, 255, 150);  
leds[VirgoCC [10]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [11]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [12]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [13]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [14]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [15]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [16]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [17]] = CHSV(hueP+80, 255, 150);  
leds[VirgoCC [18]] = CHSV(hueP+96, 255, 150);  
leds[VirgoCC [19]] = CHSV(hueP+96, 255, 150);  
leds[VirgoCC [20]] = CHSV(hueP+112, 255, 150);  
leds[VirgoCC [21]] = CHSV(hueP+112, 255, 150);  
leds[VirgoCC [22]] = CHSV(hueP+128, 255, 150);  
leds[VirgoCC [23]] = CHSV(hueP+128, 255, 150);  
leds[VirgoCC [24]] = CHSV(hueP+144, 255, 150);  
leds[VirgoCC [25]] = CHSV(hueP+144, 255, 150);  
leds[VirgoCC [26]] = CHSV(hueP+160, 255, 150);  
leds[VirgoCC [27]] = CHSV(hueP+160, 255, 150); 
leds[VirgoCC [28]] = CHSV(hueP+178, 255, 150); 
leds[VirgoCC [29]] = CHSV(hueP+178, 255, 150); 
leds[VirgoCC [28]] = CHSV(hueP+178, 255, 150); 
leds[VirgoCC [29]] = CHSV(hueP+178, 255, 150);
leds[VirgoCC [30]] = CHSV(hueP+194, 255, 150); 
leds[VirgoCC [31]] = CHSV(hueP+194, 255, 150);
leds[VirgoCC [32]] = CHSV(hueP+210, 255, 150); 
leds[VirgoCC [33]] = CHSV(hueP+210, 255, 150);
leds[VirgoCC [34]] = CHSV(hueP+226, 255, 150); 
leds[VirgoCC [35]] = CHSV(hueP+226, 255, 150);
leds[VirgoCC [36]] = CHSV(hueP+242, 255, 150); 
leds[VirgoCC [37]] = CHSV(hueP+242, 255, 150);
leds[VirgoCC [38]] = CHSV(hueP+258, 255, 150); 
leds[VirgoCC [39]] = CHSV(hueP+258, 255, 150);
leds[VirgoCC [40]] = CHSV(hueP+274, 255, 150); 
leds[VirgoCC [41]] = CHSV(hueP+274, 255, 150);
leds[VirgoCC [42]] = CHSV(hueP+290, 255, 150); 
leds[VirgoCC [43]] = CHSV(hueP+290, 255, 150);
leds[VirgoCC [44]] = CHSV(hueP+316, 255, 150); 
leds[VirgoCC [45]] = CHSV(hueP+316, 255, 150);
leds[VirgoCC [46]] = CHSV(hueP+332, 255, 150); 
leds[VirgoCC [47]] = CHSV(hueP+332, 255, 150);
leds[VirgoCC [48]] = CHSV(hueP+348, 255, 150); 
leds[VirgoCC [49]] = CHSV(hueP+348, 255, 150);
leds[VirgoCC [50]] = CHSV(hueP+364, 255, 150); 
leds[VirgoCC [51]] = CHSV(hueP+364, 255, 150);
leds[VirgoCC [52]] = CHSV(hueP+380, 255, 150); 
leds[VirgoCC [53]] = CHSV(hueP+380, 255, 150);

leds[VirgoDD [0]] = CHSV(hueP, 255, 150);  
leds[VirgoDD [1]] = CHSV(hueP, 255, 150);  
leds[VirgoDD [2]] = CHSV(hueP+16, 255, 150);  
leds[VirgoDD [3]] = CHSV(hueP+16, 255, 150);  
leds[VirgoDD [4]] = CHSV(hueP+32, 255, 150);  
leds[VirgoDD [5]] = CHSV(hueP+32, 255, 150);  
leds[VirgoDD [6]] = CHSV(hueP+48, 255, 150);  
leds[VirgoDD [7]] = CHSV(hueP+48, 255, 150);  
leds[VirgoDD [8]] = CHSV(hueP+64, 255, 150);  
leds[VirgoDD [9]] = CHSV(hueP+64, 255, 150);  
leds[VirgoDD [10]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [11]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [12]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [13]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [14]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [15]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [16]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [17]] = CHSV(hueP+80, 255, 150);  
leds[VirgoDD [18]] = CHSV(hueP+96, 255, 150);  
leds[VirgoDD [19]] = CHSV(hueP+96, 255, 150);  
leds[VirgoDD [20]] = CHSV(hueP+112, 255, 150);  
leds[VirgoDD [21]] = CHSV(hueP+112, 255, 150);  
leds[VirgoDD [22]] = CHSV(hueP+128, 255, 150);  
leds[VirgoDD [23]] = CHSV(hueP+128, 255, 150);  
leds[VirgoDD [24]] = CHSV(hueP+144, 255, 150);  
leds[VirgoDD [25]] = CHSV(hueP+144, 255, 150);  
leds[VirgoDD [26]] = CHSV(hueP+160, 255, 150);  
leds[VirgoDD [27]] = CHSV(hueP+160, 255, 150); 
leds[VirgoDD [28]] = CHSV(hueP+178, 255, 150); 
leds[VirgoDD [29]] = CHSV(hueP+178, 255, 150);
leds[VirgoDD [28]] = CHSV(hueP+178, 255, 150); 
leds[VirgoDD [29]] = CHSV(hueP+178, 255, 150);
leds[VirgoDD [30]] = CHSV(hueP+194, 255, 150); 
leds[VirgoDD [31]] = CHSV(hueP+194, 255, 150);
leds[VirgoDD [32]] = CHSV(hueP+210, 255, 150); 
leds[VirgoDD [33]] = CHSV(hueP+210, 255, 150);
leds[VirgoDD [34]] = CHSV(hueP+226, 255, 150); 
leds[VirgoDD [35]] = CHSV(hueP+226, 255, 150);
leds[VirgoDD [36]] = CHSV(hueP+242, 255, 150); 
leds[VirgoDD [37]] = CHSV(hueP+242, 255, 150);
leds[VirgoDD [38]] = CHSV(hueP+258, 255, 150); 
leds[VirgoDD [39]] = CHSV(hueP+258, 255, 150);
leds[VirgoDD [40]] = CHSV(hueP+274, 255, 150); 
leds[VirgoDD [41]] = CHSV(hueP+274, 255, 150);
leds[VirgoDD [42]] = CHSV(hueP+290, 255, 150); 
leds[VirgoDD [43]] = CHSV(hueP+290, 255, 150);
leds[VirgoDD [44]] = CHSV(hueP+316, 255, 150); 
leds[VirgoDD [45]] = CHSV(hueP+316, 255, 150);
leds[VirgoDD [46]] = CHSV(hueP+332, 255, 150); 
leds[VirgoDD [47]] = CHSV(hueP+332, 255, 150);
leds[VirgoDD [48]] = CHSV(hueP+348, 255, 150); 
leds[VirgoDD [49]] = CHSV(hueP+348, 255, 150);
leds[VirgoDD [50]] = CHSV(hueP+364, 255, 150); 
leds[VirgoDD [51]] = CHSV(hueP+364, 255, 150);
leds[VirgoDD [52]] = CHSV(hueP+380, 255, 150); 
leds[VirgoDD [53]] = CHSV(hueP+380, 255, 150);

leds[VirgoEE [0]] = CHSV(hueP, 255, 150);  
leds[VirgoEE [1]] = CHSV(hueP, 255, 150);  
leds[VirgoEE [2]] = CHSV(hueP+16, 255, 150);  
leds[VirgoEE [3]] = CHSV(hueP+16, 255, 150);  
leds[VirgoEE [4]] = CHSV(hueP+32, 255, 150);  
leds[VirgoEE [5]] = CHSV(hueP+32, 255, 150);  
leds[VirgoEE [6]] = CHSV(hueP+48, 255, 150);  
leds[VirgoEE [7]] = CHSV(hueP+48, 255, 150);  
leds[VirgoEE [8]] = CHSV(hueP+64, 255, 150);  
leds[VirgoEE [9]] = CHSV(hueP+64, 255, 150);  
leds[VirgoEE [10]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [11]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [12]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [13]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [14]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [15]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [16]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [17]] = CHSV(hueP+80, 255, 150);  
leds[VirgoEE [18]] = CHSV(hueP+96, 255, 150);  
leds[VirgoEE [19]] = CHSV(hueP+96, 255, 150);  
leds[VirgoEE [20]] = CHSV(hueP+112, 255, 150);  
leds[VirgoEE [21]] = CHSV(hueP+112, 255, 150);  
leds[VirgoEE [22]] = CHSV(hueP+128, 255, 150);  
leds[VirgoEE [23]] = CHSV(hueP+128, 255, 150);  
leds[VirgoEE [24]] = CHSV(hueP+144, 255, 150);  
leds[VirgoEE [25]] = CHSV(hueP+144, 255, 150);  
leds[VirgoEE [26]] = CHSV(hueP+160, 255, 150);  
leds[VirgoEE [27]] = CHSV(hueP+160, 255, 150); 
leds[VirgoEE [28]] = CHSV(hueP+178, 255, 150); 
leds[VirgoEE [29]] = CHSV(hueP+178, 255, 150);
leds[VirgoEE [30]] = CHSV(hueP+194, 255, 150); 
leds[VirgoEE [31]] = CHSV(hueP+194, 255, 150);
leds[VirgoEE [32]] = CHSV(hueP+210, 255, 150); 
leds[VirgoEE [33]] = CHSV(hueP+210, 255, 150);
leds[VirgoEE [34]] = CHSV(hueP+226, 255, 150); 
leds[VirgoEE [35]] = CHSV(hueP+226, 255, 150);
leds[VirgoEE [36]] = CHSV(hueP+242, 255, 150); 
leds[VirgoEE [37]] = CHSV(hueP+242, 255, 150);
leds[VirgoEE [38]] = CHSV(hueP+258, 255, 150); 
leds[VirgoEE [39]] = CHSV(hueP+258, 255, 150);
leds[VirgoEE [40]] = CHSV(hueP+274, 255, 150); 
leds[VirgoEE [41]] = CHSV(hueP+274, 255, 150);
leds[VirgoEE [42]] = CHSV(hueP+290, 255, 150); 
leds[VirgoEE [43]] = CHSV(hueP+290, 255, 150);
leds[VirgoEE [44]] = CHSV(hueP+316, 255, 150); 
leds[VirgoEE [45]] = CHSV(hueP+316, 255, 150);
leds[VirgoEE [46]] = CHSV(hueP+332, 255, 150); 
leds[VirgoEE [47]] = CHSV(hueP+332, 255, 150);
leds[VirgoEE [48]] = CHSV(hueP+348, 255, 150); 
leds[VirgoEE [49]] = CHSV(hueP+348, 255, 150);
leds[VirgoEE [50]] = CHSV(hueP+364, 255, 150); 
leds[VirgoEE [51]] = CHSV(hueP+364, 255, 150);
leds[VirgoEE [52]] = CHSV(hueP+380, 255, 150); 
leds[VirgoEE [53]] = CHSV(hueP+380, 255, 150);


}

if (signSave == 6) {
leds[Libra [0]] = CHSV(hueP, 255, 150);  
leds[Libra [1]] = CHSV(hueP, 255, 150);  
leds[Libra [2]] = CHSV(hueP+16, 255, 150);  
leds[Libra [3]] = CHSV(hueP+16, 255, 150);  
leds[Libra [4]] = CHSV(hueP+32, 255, 150);  
leds[Libra [5]] = CHSV(hueP+32, 255, 150);  
leds[Libra [6]] = CHSV(hueP+48, 255, 150);  
leds[Libra [7]] = CHSV(hueP+48, 255, 150);  
leds[Libra [8]] = CHSV(hueP+64, 255, 150);  
leds[Libra [9]] = CHSV(hueP+64, 255, 150);  
leds[Libra [10]] = CHSV(hueP+80, 255, 150);  
leds[Libra [11]] = CHSV(hueP+80, 255, 150);  
leds[Libra [12]] = CHSV(hueP+80, 255, 150);  
leds[Libra [13]] = CHSV(hueP+80, 255, 150);  
leds[Libra [14]] = CHSV(hueP+80, 255, 150);  
leds[Libra [15]] = CHSV(hueP+80, 255, 150);  
leds[Libra [16]] = CHSV(hueP+80, 255, 150);  
leds[Libra [17]] = CHSV(hueP+80, 255, 150);  
leds[Libra [18]] = CHSV(hueP+96, 255, 150);  
leds[Libra [19]] = CHSV(hueP+96, 255, 150);  
leds[Libra [20]] = CHSV(hueP+112, 255, 150);  
leds[Libra [21]] = CHSV(hueP+112, 255, 150);  
leds[Libra [22]] = CHSV(hueP+128, 255, 150);  
leds[Libra [23]] = CHSV(hueP+128, 255, 150);  
leds[Libra [24]] = CHSV(hueP+144, 255, 150);  
leds[Libra [25]] = CHSV(hueP+144, 255, 150);  
leds[Libra [26]] = CHSV(hueP+160, 255, 150);  
leds[Libra [27]] = CHSV(hueP+160, 255, 150); 
leds[Libra [28]] = CHSV(hueP+178, 255, 150); 
leds[Libra [29]] = CHSV(hueP+178, 255, 150); 
leds[Libra [28]] = CHSV(hueP+178, 255, 150); 
leds[Libra [29]] = CHSV(hueP+178, 255, 150);
leds[Libra [30]] = CHSV(hueP+194, 255, 150); 
leds[Libra [31]] = CHSV(hueP+194, 255, 150);
leds[Libra [32]] = CHSV(hueP+210, 255, 150); 
leds[Libra [33]] = CHSV(hueP+210, 255, 150);


leds[LibraBB [0]] = CHSV(hueP, 255, 150);  
leds[LibraBB [1]] = CHSV(hueP, 255, 150);  
leds[LibraBB [2]] = CHSV(hueP+16, 255, 150);  
leds[LibraBB [3]] = CHSV(hueP+16, 255, 150);  
leds[LibraBB [4]] = CHSV(hueP+32, 255, 150);  
leds[LibraBB [5]] = CHSV(hueP+32, 255, 150);  
leds[LibraBB [6]] = CHSV(hueP+48, 255, 150);  
leds[LibraBB [7]] = CHSV(hueP+48, 255, 150);  
leds[LibraBB [8]] = CHSV(hueP+64, 255, 150);  
leds[LibraBB [9]] = CHSV(hueP+64, 255, 150);  
leds[LibraBB [10]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [11]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [12]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [13]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [14]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [15]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [16]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [17]] = CHSV(hueP+80, 255, 150);  
leds[LibraBB [18]] = CHSV(hueP+96, 255, 150);  
leds[LibraBB [19]] = CHSV(hueP+96, 255, 150);  
leds[LibraBB [20]] = CHSV(hueP+112, 255, 150);  
leds[LibraBB [21]] = CHSV(hueP+112, 255, 150);  
leds[LibraBB [22]] = CHSV(hueP+128, 255, 150);  
leds[LibraBB [23]] = CHSV(hueP+128, 255, 150);  
leds[LibraBB [24]] = CHSV(hueP+144, 255, 150);  
leds[LibraBB [25]] = CHSV(hueP+144, 255, 150);  
leds[LibraBB [26]] = CHSV(hueP+160, 255, 150);  
leds[LibraBB [27]] = CHSV(hueP+160, 255, 150); 
leds[LibraBB [28]] = CHSV(hueP+178, 255, 150); 
leds[LibraBB [29]] = CHSV(hueP+178, 255, 150);
leds[LibraBB [28]] = CHSV(hueP+178, 255, 150); 
leds[LibraBB [29]] = CHSV(hueP+178, 255, 150);
leds[LibraBB [30]] = CHSV(hueP+194, 255, 150); 
leds[LibraBB [31]] = CHSV(hueP+194, 255, 150);
leds[LibraBB [32]] = CHSV(hueP+210, 255, 150); 
leds[LibraBB [33]] = CHSV(hueP+210, 255, 150);


leds[LibraCC [0]] = CHSV(hueP, 255, 150);  
leds[LibraCC [1]] = CHSV(hueP, 255, 150);  
leds[LibraCC [2]] = CHSV(hueP+16, 255, 150);  
leds[LibraCC [3]] = CHSV(hueP+16, 255, 150);  
leds[LibraCC [4]] = CHSV(hueP+32, 255, 150);  
leds[LibraCC [5]] = CHSV(hueP+32, 255, 150);  
leds[LibraCC [6]] = CHSV(hueP+48, 255, 150);  
leds[LibraCC [7]] = CHSV(hueP+48, 255, 150);  
leds[LibraCC [8]] = CHSV(hueP+64, 255, 150);  
leds[LibraCC [9]] = CHSV(hueP+64, 255, 150);  
leds[LibraCC [10]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [11]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [12]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [13]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [14]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [15]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [16]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [17]] = CHSV(hueP+80, 255, 150);  
leds[LibraCC [18]] = CHSV(hueP+96, 255, 150);  
leds[LibraCC [19]] = CHSV(hueP+96, 255, 150);  
leds[LibraCC [20]] = CHSV(hueP+112, 255, 150);  
leds[LibraCC [21]] = CHSV(hueP+112, 255, 150);  
leds[LibraCC [22]] = CHSV(hueP+128, 255, 150);  
leds[LibraCC [23]] = CHSV(hueP+128, 255, 150);  
leds[LibraCC [24]] = CHSV(hueP+144, 255, 150);  
leds[LibraCC [25]] = CHSV(hueP+144, 255, 150);  
leds[LibraCC [26]] = CHSV(hueP+160, 255, 150);  
leds[LibraCC [27]] = CHSV(hueP+160, 255, 150); 
leds[LibraCC [28]] = CHSV(hueP+178, 255, 150); 
leds[LibraCC [29]] = CHSV(hueP+178, 255, 150); 
leds[LibraCC [28]] = CHSV(hueP+178, 255, 150); 
leds[LibraCC [29]] = CHSV(hueP+178, 255, 150);
leds[LibraCC [30]] = CHSV(hueP+194, 255, 150); 
leds[LibraCC [31]] = CHSV(hueP+194, 255, 150);
leds[LibraCC [32]] = CHSV(hueP+210, 255, 150); 
leds[LibraCC [33]] = CHSV(hueP+210, 255, 150);


leds[LibraDD [0]] = CHSV(hueP, 255, 150);  
leds[LibraDD [1]] = CHSV(hueP, 255, 150);  
leds[LibraDD [2]] = CHSV(hueP+16, 255, 150);  
leds[LibraDD [3]] = CHSV(hueP+16, 255, 150);  
leds[LibraDD [4]] = CHSV(hueP+32, 255, 150);  
leds[LibraDD [5]] = CHSV(hueP+32, 255, 150);  
leds[LibraDD [6]] = CHSV(hueP+48, 255, 150);  
leds[LibraDD [7]] = CHSV(hueP+48, 255, 150);  
leds[LibraDD [8]] = CHSV(hueP+64, 255, 150);  
leds[LibraDD [9]] = CHSV(hueP+64, 255, 150);  
leds[LibraDD [10]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [11]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [12]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [13]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [14]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [15]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [16]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [17]] = CHSV(hueP+80, 255, 150);  
leds[LibraDD [18]] = CHSV(hueP+96, 255, 150);  
leds[LibraDD [19]] = CHSV(hueP+96, 255, 150);  
leds[LibraDD [20]] = CHSV(hueP+112, 255, 150);  
leds[LibraDD [21]] = CHSV(hueP+112, 255, 150);  
leds[LibraDD [22]] = CHSV(hueP+128, 255, 150);  
leds[LibraDD [23]] = CHSV(hueP+128, 255, 150);  
leds[LibraDD [24]] = CHSV(hueP+144, 255, 150);  
leds[LibraDD [25]] = CHSV(hueP+144, 255, 150);  
leds[LibraDD [26]] = CHSV(hueP+160, 255, 150);  
leds[LibraDD [27]] = CHSV(hueP+160, 255, 150); 
leds[LibraDD [28]] = CHSV(hueP+178, 255, 150); 
leds[LibraDD [29]] = CHSV(hueP+178, 255, 150);
leds[LibraDD [28]] = CHSV(hueP+178, 255, 150); 
leds[LibraDD [29]] = CHSV(hueP+178, 255, 150);
leds[LibraDD [30]] = CHSV(hueP+194, 255, 150); 
leds[LibraDD [31]] = CHSV(hueP+194, 255, 150);
leds[LibraDD [32]] = CHSV(hueP+210, 255, 150); 
leds[LibraDD [33]] = CHSV(hueP+210, 255, 150);


leds[LibraEE [0]] = CHSV(hueP, 255, 150);  
leds[LibraEE [1]] = CHSV(hueP, 255, 150);  
leds[LibraEE [2]] = CHSV(hueP+16, 255, 150);  
leds[LibraEE [3]] = CHSV(hueP+16, 255, 150);  
leds[LibraEE [4]] = CHSV(hueP+32, 255, 150);  
leds[LibraEE [5]] = CHSV(hueP+32, 255, 150);  
leds[LibraEE [6]] = CHSV(hueP+48, 255, 150);  
leds[LibraEE [7]] = CHSV(hueP+48, 255, 150);  
leds[LibraEE [8]] = CHSV(hueP+64, 255, 150);  
leds[LibraEE [9]] = CHSV(hueP+64, 255, 150);  
leds[LibraEE [10]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [11]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [12]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [13]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [14]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [15]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [16]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [17]] = CHSV(hueP+80, 255, 150);  
leds[LibraEE [18]] = CHSV(hueP+96, 255, 150);  
leds[LibraEE [19]] = CHSV(hueP+96, 255, 150);  
leds[LibraEE [20]] = CHSV(hueP+112, 255, 150);  
leds[LibraEE [21]] = CHSV(hueP+112, 255, 150);  
leds[LibraEE [22]] = CHSV(hueP+128, 255, 150);  
leds[LibraEE [23]] = CHSV(hueP+128, 255, 150);  
leds[LibraEE [24]] = CHSV(hueP+144, 255, 150);  
leds[LibraEE [25]] = CHSV(hueP+144, 255, 150);  
leds[LibraEE [26]] = CHSV(hueP+160, 255, 150);  
leds[LibraEE [27]] = CHSV(hueP+160, 255, 150); 
leds[LibraEE [28]] = CHSV(hueP+178, 255, 150); 
leds[LibraEE [29]] = CHSV(hueP+178, 255, 150);
leds[LibraEE [30]] = CHSV(hueP+194, 255, 150); 
leds[LibraEE [31]] = CHSV(hueP+194, 255, 150);
leds[LibraEE [32]] = CHSV(hueP+210, 255, 150); 
leds[LibraEE [33]] = CHSV(hueP+210, 255, 150);


}

if (signSave == 7) {
leds[Scorpio [0]] = CHSV(hueP, 255, 150);  
leds[Scorpio [1]] = CHSV(hueP, 255, 150);  
leds[Scorpio [2]] = CHSV(hueP+16, 255, 150);  
leds[Scorpio [3]] = CHSV(hueP+16, 255, 150);  
leds[Scorpio [4]] = CHSV(hueP+32, 255, 150);  
leds[Scorpio [5]] = CHSV(hueP+32, 255, 150);  
leds[Scorpio [6]] = CHSV(hueP+48, 255, 150);  
leds[Scorpio [7]] = CHSV(hueP+48, 255, 150);  
leds[Scorpio [8]] = CHSV(hueP+64, 255, 150);  
leds[Scorpio [9]] = CHSV(hueP+64, 255, 150);  
leds[Scorpio [10]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [11]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [12]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [13]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [14]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [15]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [16]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [17]] = CHSV(hueP+80, 255, 150);  
leds[Scorpio [18]] = CHSV(hueP+96, 255, 150);  
leds[Scorpio [19]] = CHSV(hueP+96, 255, 150);  
leds[Scorpio [20]] = CHSV(hueP+112, 255, 150);  
leds[Scorpio [21]] = CHSV(hueP+112, 255, 150);  
leds[Scorpio [22]] = CHSV(hueP+128, 255, 150);  
leds[Scorpio [23]] = CHSV(hueP+128, 255, 150);  
leds[Scorpio [24]] = CHSV(hueP+144, 255, 150);  
leds[Scorpio [25]] = CHSV(hueP+144, 255, 150);  
leds[Scorpio [26]] = CHSV(hueP+160, 255, 150);  
leds[Scorpio [27]] = CHSV(hueP+160, 255, 150); 
leds[Scorpio [28]] = CHSV(hueP+178, 255, 150); 
leds[Scorpio [29]] = CHSV(hueP+178, 255, 150); 
leds[Scorpio [28]] = CHSV(hueP+178, 255, 150); 
leds[Scorpio [29]] = CHSV(hueP+178, 255, 150);
leds[Scorpio [30]] = CHSV(hueP+194, 255, 150); 
leds[Scorpio [31]] = CHSV(hueP+194, 255, 150);
leds[Scorpio [32]] = CHSV(hueP+210, 255, 150); 
leds[Scorpio [33]] = CHSV(hueP+210, 255, 150);
leds[Scorpio [34]] = CHSV(hueP+226, 255, 150); 
leds[Scorpio [35]] = CHSV(hueP+226, 255, 150);
leds[Scorpio [36]] = CHSV(hueP+242, 255, 150); 
leds[Scorpio [37]] = CHSV(hueP+242, 255, 150);
leds[Scorpio [38]] = CHSV(hueP+258, 255, 150); 
leds[Scorpio [39]] = CHSV(hueP+258, 255, 150);
leds[Scorpio [40]] = CHSV(hueP+274, 255, 150); 
leds[Scorpio [41]] = CHSV(hueP+274, 255, 150);
leds[Scorpio [42]] = CHSV(hueP+290, 255, 150); 
leds[Scorpio [43]] = CHSV(hueP+290, 255, 150);

leds[ScorpioBB [0]] = CHSV(hueP, 255, 150);  
leds[ScorpioBB [1]] = CHSV(hueP, 255, 150);  
leds[ScorpioBB [2]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioBB [3]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioBB [4]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioBB [5]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioBB [6]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioBB [7]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioBB [8]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioBB [9]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioBB [10]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [11]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [12]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [13]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [14]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [15]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [16]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [17]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioBB [18]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioBB [19]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioBB [20]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioBB [21]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioBB [22]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioBB [23]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioBB [24]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioBB [25]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioBB [26]] = CHSV(hueP+160, 255, 150);  
leds[ScorpioBB [27]] = CHSV(hueP+160, 255, 150); 
leds[ScorpioBB [28]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioBB [29]] = CHSV(hueP+178, 255, 150);
leds[ScorpioBB [28]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioBB [29]] = CHSV(hueP+178, 255, 150);
leds[ScorpioBB [30]] = CHSV(hueP+194, 255, 150); 
leds[ScorpioBB [31]] = CHSV(hueP+194, 255, 150);
leds[ScorpioBB [32]] = CHSV(hueP+210, 255, 150); 
leds[ScorpioBB [33]] = CHSV(hueP+210, 255, 150);
leds[ScorpioBB [34]] = CHSV(hueP+226, 255, 150); 
leds[ScorpioBB [35]] = CHSV(hueP+226, 255, 150);
leds[ScorpioBB [36]] = CHSV(hueP+242, 255, 150); 
leds[ScorpioBB [37]] = CHSV(hueP+242, 255, 150);
leds[ScorpioBB [38]] = CHSV(hueP+258, 255, 150); 
leds[ScorpioBB [39]] = CHSV(hueP+258, 255, 150);
leds[ScorpioBB [40]] = CHSV(hueP+274, 255, 150); 
leds[ScorpioBB [41]] = CHSV(hueP+274, 255, 150);
leds[ScorpioBB [42]] = CHSV(hueP+290, 255, 150); 
leds[ScorpioBB [43]] = CHSV(hueP+290, 255, 150); 

leds[ScorpioCC [0]] = CHSV(hueP, 255, 150);  
leds[ScorpioCC [1]] = CHSV(hueP, 255, 150);  
leds[ScorpioCC [2]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioCC [3]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioCC [4]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioCC [5]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioCC [6]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioCC [7]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioCC [8]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioCC [9]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioCC [10]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [11]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [12]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [13]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [14]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [15]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [16]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [17]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioCC [18]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioCC [19]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioCC [20]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioCC [21]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioCC [22]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioCC [23]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioCC [24]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioCC [25]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioCC [26]] = CHSV(hueP+160, 255, 150);  
leds[ScorpioCC [27]] = CHSV(hueP+160, 255, 150); 
leds[ScorpioCC [28]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioCC [29]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioCC [28]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioCC [29]] = CHSV(hueP+178, 255, 150);
leds[ScorpioCC [30]] = CHSV(hueP+194, 255, 150); 
leds[ScorpioCC [31]] = CHSV(hueP+194, 255, 150);
leds[ScorpioCC [32]] = CHSV(hueP+210, 255, 150); 
leds[ScorpioCC [33]] = CHSV(hueP+210, 255, 150);
leds[ScorpioCC [34]] = CHSV(hueP+226, 255, 150); 
leds[ScorpioCC [35]] = CHSV(hueP+226, 255, 150);
leds[ScorpioCC [36]] = CHSV(hueP+242, 255, 150); 
leds[ScorpioCC [37]] = CHSV(hueP+242, 255, 150);
leds[ScorpioCC [38]] = CHSV(hueP+258, 255, 150); 
leds[ScorpioCC [39]] = CHSV(hueP+258, 255, 150);
leds[ScorpioCC [40]] = CHSV(hueP+274, 255, 150); 
leds[ScorpioCC [41]] = CHSV(hueP+274, 255, 150);
leds[ScorpioCC [42]] = CHSV(hueP+290, 255, 150); 
leds[ScorpioCC [43]] = CHSV(hueP+290, 255, 150);

leds[ScorpioDD [0]] = CHSV(hueP, 255, 150);  
leds[ScorpioDD [1]] = CHSV(hueP, 255, 150);  
leds[ScorpioDD [2]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioDD [3]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioDD [4]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioDD [5]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioDD [6]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioDD [7]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioDD [8]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioDD [9]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioDD [10]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [11]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [12]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [13]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [14]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [15]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [16]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [17]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioDD [18]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioDD [19]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioDD [20]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioDD [21]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioDD [22]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioDD [23]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioDD [24]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioDD [25]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioDD [26]] = CHSV(hueP+160, 255, 150);  
leds[ScorpioDD [27]] = CHSV(hueP+160, 255, 150); 
leds[ScorpioDD [28]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioDD [29]] = CHSV(hueP+178, 255, 150);
leds[ScorpioDD [28]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioDD [29]] = CHSV(hueP+178, 255, 150);
leds[ScorpioDD [30]] = CHSV(hueP+194, 255, 150); 
leds[ScorpioDD [31]] = CHSV(hueP+194, 255, 150);
leds[ScorpioDD [32]] = CHSV(hueP+210, 255, 150); 
leds[ScorpioDD [33]] = CHSV(hueP+210, 255, 150);
leds[ScorpioDD [34]] = CHSV(hueP+226, 255, 150); 
leds[ScorpioDD [35]] = CHSV(hueP+226, 255, 150);
leds[ScorpioDD [36]] = CHSV(hueP+242, 255, 150); 
leds[ScorpioDD [37]] = CHSV(hueP+242, 255, 150);
leds[ScorpioDD [38]] = CHSV(hueP+258, 255, 150); 
leds[ScorpioDD [39]] = CHSV(hueP+258, 255, 150);
leds[ScorpioDD [40]] = CHSV(hueP+274, 255, 150); 
leds[ScorpioDD [41]] = CHSV(hueP+274, 255, 150);
leds[ScorpioDD [42]] = CHSV(hueP+290, 255, 150); 
leds[ScorpioDD [43]] = CHSV(hueP+290, 255, 150);

leds[ScorpioEE [0]] = CHSV(hueP, 255, 150);  
leds[ScorpioEE [1]] = CHSV(hueP, 255, 150);  
leds[ScorpioEE [2]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioEE [3]] = CHSV(hueP+16, 255, 150);  
leds[ScorpioEE [4]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioEE [5]] = CHSV(hueP+32, 255, 150);  
leds[ScorpioEE [6]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioEE [7]] = CHSV(hueP+48, 255, 150);  
leds[ScorpioEE [8]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioEE [9]] = CHSV(hueP+64, 255, 150);  
leds[ScorpioEE [10]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [11]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [12]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [13]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [14]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [15]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [16]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [17]] = CHSV(hueP+80, 255, 150);  
leds[ScorpioEE [18]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioEE [19]] = CHSV(hueP+96, 255, 150);  
leds[ScorpioEE [20]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioEE [21]] = CHSV(hueP+112, 255, 150);  
leds[ScorpioEE [22]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioEE [23]] = CHSV(hueP+128, 255, 150);  
leds[ScorpioEE [24]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioEE [25]] = CHSV(hueP+144, 255, 150);  
leds[ScorpioEE [26]] = CHSV(hueP+160, 255, 150);  
leds[ScorpioEE [27]] = CHSV(hueP+160, 255, 150); 
leds[ScorpioEE [28]] = CHSV(hueP+178, 255, 150); 
leds[ScorpioEE [29]] = CHSV(hueP+178, 255, 150);
leds[ScorpioEE [30]] = CHSV(hueP+194, 255, 150); 
leds[ScorpioEE [31]] = CHSV(hueP+194, 255, 150);
leds[ScorpioEE [32]] = CHSV(hueP+210, 255, 150); 
leds[ScorpioEE [33]] = CHSV(hueP+210, 255, 150);
leds[ScorpioEE [34]] = CHSV(hueP+226, 255, 150); 
leds[ScorpioEE [35]] = CHSV(hueP+226, 255, 150);
leds[ScorpioEE [36]] = CHSV(hueP+242, 255, 150); 
leds[ScorpioEE [37]] = CHSV(hueP+242, 255, 150);
leds[ScorpioEE [38]] = CHSV(hueP+258, 255, 150); 
leds[ScorpioEE [39]] = CHSV(hueP+258, 255, 150);
leds[ScorpioEE [40]] = CHSV(hueP+274, 255, 150); 
leds[ScorpioEE [41]] = CHSV(hueP+274, 255, 150);
leds[ScorpioEE [42]] = CHSV(hueP+290, 255, 150); 
leds[ScorpioEE [43]] = CHSV(hueP+290, 255, 150);


}

if (signSave == 8) {
leds[Sagitarius [0]] = CHSV(hueP, 255, 150);  
leds[Sagitarius [1]] = CHSV(hueP, 255, 150);  
leds[Sagitarius [2]] = CHSV(hueP+16, 255, 150);  
leds[Sagitarius [3]] = CHSV(hueP+16, 255, 150);  
leds[Sagitarius [4]] = CHSV(hueP+32, 255, 150);  
leds[Sagitarius [5]] = CHSV(hueP+32, 255, 150);  
leds[Sagitarius [6]] = CHSV(hueP+48, 255, 150);  
leds[Sagitarius [7]] = CHSV(hueP+48, 255, 150);  
leds[Sagitarius [8]] = CHSV(hueP+64, 255, 150);  
leds[Sagitarius [9]] = CHSV(hueP+64, 255, 150);  
leds[Sagitarius [10]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [11]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [12]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [13]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [14]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [15]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [16]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [17]] = CHSV(hueP+80, 255, 150);  
leds[Sagitarius [18]] = CHSV(hueP+96, 255, 150);  
leds[Sagitarius [19]] = CHSV(hueP+96, 255, 150);  
leds[Sagitarius [20]] = CHSV(hueP+112, 255, 150);  
leds[Sagitarius [21]] = CHSV(hueP+112, 255, 150);  


leds[SagitariusBB [0]] = CHSV(hueP, 255, 150);  
leds[SagitariusBB [1]] = CHSV(hueP, 255, 150);  
leds[SagitariusBB [2]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusBB [3]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusBB [4]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusBB [5]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusBB [6]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusBB [7]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusBB [8]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusBB [9]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusBB [10]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [11]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [12]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [13]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [14]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [15]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [16]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [17]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusBB [18]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusBB [19]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusBB [20]] = CHSV(hueP+112, 255, 150);  
leds[SagitariusBB [21]] = CHSV(hueP+112, 255, 150);  


leds[SagitariusCC [0]] = CHSV(hueP, 255, 150);  
leds[SagitariusCC [1]] = CHSV(hueP, 255, 150);  
leds[SagitariusCC [2]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusCC [3]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusCC [4]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusCC [5]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusCC [6]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusCC [7]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusCC [8]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusCC [9]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusCC [10]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [11]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [12]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [13]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [14]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [15]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [16]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [17]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusCC [18]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusCC [19]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusCC [20]] = CHSV(hueP+112, 255, 150);  
leds[SagitariusCC [21]] = CHSV(hueP+112, 255, 150);  


leds[SagitariusDD [0]] = CHSV(hueP, 255, 150);  
leds[SagitariusDD [1]] = CHSV(hueP, 255, 150);  
leds[SagitariusDD [2]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusDD [3]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusDD [4]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusDD [5]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusDD [6]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusDD [7]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusDD [8]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusDD [9]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusDD [10]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [11]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [12]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [13]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [14]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [15]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [16]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [17]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusDD [18]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusDD [19]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusDD [20]] = CHSV(hueP+112, 255, 150);  
leds[SagitariusDD [21]] = CHSV(hueP+112, 255, 150);  


leds[SagitariusEE [0]] = CHSV(hueP, 255, 150);  
leds[SagitariusEE [1]] = CHSV(hueP, 255, 150);  
leds[SagitariusEE [2]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusEE [3]] = CHSV(hueP+16, 255, 150);  
leds[SagitariusEE [4]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusEE [5]] = CHSV(hueP+32, 255, 150);  
leds[SagitariusEE [6]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusEE [7]] = CHSV(hueP+48, 255, 150);  
leds[SagitariusEE [8]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusEE [9]] = CHSV(hueP+64, 255, 150);  
leds[SagitariusEE [10]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [11]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [12]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [13]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [14]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [15]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [16]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [17]] = CHSV(hueP+80, 255, 150);  
leds[SagitariusEE [18]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusEE [19]] = CHSV(hueP+96, 255, 150);  
leds[SagitariusEE [20]] = CHSV(hueP+112, 255, 150);  
leds[SagitariusEE [21]] = CHSV(hueP+112, 255, 150);  

}

if (signSave == 9) {
leds[Capricorn [0]] = CHSV(hueP, 255, 150);  
leds[Capricorn [1]] = CHSV(hueP, 255, 150);  
leds[Capricorn [2]] = CHSV(hueP+16, 255, 150);  
leds[Capricorn [3]] = CHSV(hueP+16, 255, 150);  
leds[Capricorn [4]] = CHSV(hueP+32, 255, 150);  
leds[Capricorn [5]] = CHSV(hueP+32, 255, 150);  
leds[Capricorn [6]] = CHSV(hueP+48, 255, 150);  
leds[Capricorn [7]] = CHSV(hueP+48, 255, 150);  
leds[Capricorn [8]] = CHSV(hueP+64, 255, 150);  
leds[Capricorn [9]] = CHSV(hueP+64, 255, 150);  
leds[Capricorn [10]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [11]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [12]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [13]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [14]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [15]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [16]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [17]] = CHSV(hueP+80, 255, 150);  
leds[Capricorn [18]] = CHSV(hueP+96, 255, 150);  
leds[Capricorn [19]] = CHSV(hueP+96, 255, 150);  
leds[Capricorn [20]] = CHSV(hueP+112, 255, 150);  
leds[Capricorn [21]] = CHSV(hueP+112, 255, 150);  
leds[Capricorn [22]] = CHSV(hueP+128, 255, 150);  
leds[Capricorn [23]] = CHSV(hueP+128, 255, 150);  
leds[Capricorn [24]] = CHSV(hueP+144, 255, 150);  
leds[Capricorn [25]] = CHSV(hueP+144, 255, 150);  
leds[Capricorn [26]] = CHSV(hueP+160, 255, 150);  
leds[Capricorn [27]] = CHSV(hueP+160, 255, 150); 
leds[Capricorn [28]] = CHSV(hueP+178, 255, 150); 
leds[Capricorn [29]] = CHSV(hueP+178, 255, 150); 

leds[CapricornBB [0]] = CHSV(hueP, 255, 150);  
leds[CapricornBB [1]] = CHSV(hueP, 255, 150);  
leds[CapricornBB [2]] = CHSV(hueP+16, 255, 150);  
leds[CapricornBB [3]] = CHSV(hueP+16, 255, 150);  
leds[CapricornBB [4]] = CHSV(hueP+32, 255, 150);  
leds[CapricornBB [5]] = CHSV(hueP+32, 255, 150);  
leds[CapricornBB [6]] = CHSV(hueP+48, 255, 150);  
leds[CapricornBB [7]] = CHSV(hueP+48, 255, 150);  
leds[CapricornBB [8]] = CHSV(hueP+64, 255, 150);  
leds[CapricornBB [9]] = CHSV(hueP+64, 255, 150);  
leds[CapricornBB [10]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [11]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [12]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [13]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [14]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [15]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [16]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [17]] = CHSV(hueP+80, 255, 150);  
leds[CapricornBB [18]] = CHSV(hueP+96, 255, 150);  
leds[CapricornBB [19]] = CHSV(hueP+96, 255, 150);  
leds[CapricornBB [20]] = CHSV(hueP+112, 255, 150);  
leds[CapricornBB [21]] = CHSV(hueP+112, 255, 150);  
leds[CapricornBB [22]] = CHSV(hueP+128, 255, 150);  
leds[CapricornBB [23]] = CHSV(hueP+128, 255, 150);  
leds[CapricornBB [24]] = CHSV(hueP+144, 255, 150);  
leds[CapricornBB [25]] = CHSV(hueP+144, 255, 150);  
leds[CapricornBB [26]] = CHSV(hueP+160, 255, 150);  
leds[CapricornBB [27]] = CHSV(hueP+160, 255, 150); 
leds[CapricornBB [28]] = CHSV(hueP+178, 255, 150); 
leds[CapricornBB [29]] = CHSV(hueP+178, 255, 150); 

leds[CapricornCC [0]] = CHSV(hueP, 255, 150);  
leds[CapricornCC [1]] = CHSV(hueP, 255, 150);  
leds[CapricornCC [2]] = CHSV(hueP+16, 255, 150);  
leds[CapricornCC [3]] = CHSV(hueP+16, 255, 150);  
leds[CapricornCC [4]] = CHSV(hueP+32, 255, 150);  
leds[CapricornCC [5]] = CHSV(hueP+32, 255, 150);  
leds[CapricornCC [6]] = CHSV(hueP+48, 255, 150);  
leds[CapricornCC [7]] = CHSV(hueP+48, 255, 150);  
leds[CapricornCC [8]] = CHSV(hueP+64, 255, 150);  
leds[CapricornCC [9]] = CHSV(hueP+64, 255, 150);  
leds[CapricornCC [10]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [11]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [12]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [13]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [14]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [15]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [16]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [17]] = CHSV(hueP+80, 255, 150);  
leds[CapricornCC [18]] = CHSV(hueP+96, 255, 150);  
leds[CapricornCC [19]] = CHSV(hueP+96, 255, 150);  
leds[CapricornCC [20]] = CHSV(hueP+112, 255, 150);  
leds[CapricornCC [21]] = CHSV(hueP+112, 255, 150);  
leds[CapricornCC [22]] = CHSV(hueP+128, 255, 150);  
leds[CapricornCC [23]] = CHSV(hueP+128, 255, 150);  
leds[CapricornCC [24]] = CHSV(hueP+144, 255, 150);  
leds[CapricornCC [25]] = CHSV(hueP+144, 255, 150);  
leds[CapricornCC [26]] = CHSV(hueP+160, 255, 150);  
leds[CapricornCC [27]] = CHSV(hueP+160, 255, 150); 
leds[CapricornCC [28]] = CHSV(hueP+178, 255, 150); 
leds[CapricornCC [29]] = CHSV(hueP+178, 255, 150); 

leds[CapricornDD [0]] = CHSV(hueP, 255, 150);  
leds[CapricornDD [1]] = CHSV(hueP, 255, 150);  
leds[CapricornDD [2]] = CHSV(hueP+16, 255, 150);  
leds[CapricornDD [3]] = CHSV(hueP+16, 255, 150);  
leds[CapricornDD [4]] = CHSV(hueP+32, 255, 150);  
leds[CapricornDD [5]] = CHSV(hueP+32, 255, 150);  
leds[CapricornDD [6]] = CHSV(hueP+48, 255, 150);  
leds[CapricornDD [7]] = CHSV(hueP+48, 255, 150);  
leds[CapricornDD [8]] = CHSV(hueP+64, 255, 150);  
leds[CapricornDD [9]] = CHSV(hueP+64, 255, 150);  
leds[CapricornDD [10]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [11]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [12]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [13]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [14]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [15]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [16]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [17]] = CHSV(hueP+80, 255, 150);  
leds[CapricornDD [18]] = CHSV(hueP+96, 255, 150);  
leds[CapricornDD [19]] = CHSV(hueP+96, 255, 150);  
leds[CapricornDD [20]] = CHSV(hueP+112, 255, 150);  
leds[CapricornDD [21]] = CHSV(hueP+112, 255, 150);  
leds[CapricornDD [22]] = CHSV(hueP+128, 255, 150);  
leds[CapricornDD [23]] = CHSV(hueP+128, 255, 150);  
leds[CapricornDD [24]] = CHSV(hueP+144, 255, 150);  
leds[CapricornDD [25]] = CHSV(hueP+144, 255, 150);  
leds[CapricornDD [26]] = CHSV(hueP+160, 255, 150);  
leds[CapricornDD [27]] = CHSV(hueP+160, 255, 150); 
leds[CapricornDD [28]] = CHSV(hueP+178, 255, 150); 
leds[CapricornDD [29]] = CHSV(hueP+178, 255, 150);

leds[CapricornEE [0]] = CHSV(hueP, 255, 150);  
leds[CapricornEE [1]] = CHSV(hueP, 255, 150);  
leds[CapricornEE [2]] = CHSV(hueP+16, 255, 150);  
leds[CapricornEE [3]] = CHSV(hueP+16, 255, 150);  
leds[CapricornEE [4]] = CHSV(hueP+32, 255, 150);  
leds[CapricornEE [5]] = CHSV(hueP+32, 255, 150);  
leds[CapricornEE [6]] = CHSV(hueP+48, 255, 150);  
leds[CapricornEE [7]] = CHSV(hueP+48, 255, 150);  
leds[CapricornEE [8]] = CHSV(hueP+64, 255, 150);  
leds[CapricornEE [9]] = CHSV(hueP+64, 255, 150);  
leds[CapricornEE [10]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [11]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [12]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [13]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [14]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [15]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [16]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [17]] = CHSV(hueP+80, 255, 150);  
leds[CapricornEE [18]] = CHSV(hueP+96, 255, 150);  
leds[CapricornEE [19]] = CHSV(hueP+96, 255, 150);  
leds[CapricornEE [20]] = CHSV(hueP+112, 255, 150);  
leds[CapricornEE [21]] = CHSV(hueP+112, 255, 150);  
leds[CapricornEE [22]] = CHSV(hueP+128, 255, 150);  
leds[CapricornEE [23]] = CHSV(hueP+128, 255, 150);  
leds[CapricornEE [24]] = CHSV(hueP+144, 255, 150);  
leds[CapricornEE [25]] = CHSV(hueP+144, 255, 150);  
leds[CapricornEE [26]] = CHSV(hueP+160, 255, 150);  
leds[CapricornEE [27]] = CHSV(hueP+160, 255, 150); 
leds[CapricornEE [28]] = CHSV(hueP+178, 255, 150); 
leds[CapricornEE [29]] = CHSV(hueP+178, 255, 150);
}


if (signSave == 10) {
leds[Aquarius [0]] = CHSV(hueP, 255, 150);  
leds[Aquarius [1]] = CHSV(hueP, 255, 150);  
leds[Aquarius [2]] = CHSV(hueP+16, 255, 150);  
leds[Aquarius [3]] = CHSV(hueP+16, 255, 150);  
leds[Aquarius [4]] = CHSV(hueP+32, 255, 150);  
leds[Aquarius [5]] = CHSV(hueP+32, 255, 150);  
leds[Aquarius [6]] = CHSV(hueP+48, 255, 150);  
leds[Aquarius [7]] = CHSV(hueP+48, 255, 150);  
leds[Aquarius [8]] = CHSV(hueP+64, 255, 150);  
leds[Aquarius [9]] = CHSV(hueP+64, 255, 150);  
leds[Aquarius [10]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [11]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [12]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [13]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [14]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [15]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [16]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [17]] = CHSV(hueP+80, 255, 150);  
leds[Aquarius [18]] = CHSV(hueP+96, 255, 150);  
leds[Aquarius [19]] = CHSV(hueP+96, 255, 150);  
 
 

leds[AquariusBB [0]] = CHSV(hueP, 255, 150);  
leds[AquariusBB [1]] = CHSV(hueP, 255, 150);  
leds[AquariusBB [2]] = CHSV(hueP+16, 255, 150);  
leds[AquariusBB [3]] = CHSV(hueP+16, 255, 150);  
leds[AquariusBB [4]] = CHSV(hueP+32, 255, 150);  
leds[AquariusBB [5]] = CHSV(hueP+32, 255, 150);  
leds[AquariusBB [6]] = CHSV(hueP+48, 255, 150);  
leds[AquariusBB [7]] = CHSV(hueP+48, 255, 150);  
leds[AquariusBB [8]] = CHSV(hueP+64, 255, 150);  
leds[AquariusBB [9]] = CHSV(hueP+64, 255, 150);  
leds[AquariusBB [10]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [11]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [12]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [13]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [14]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [15]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [16]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [17]] = CHSV(hueP+80, 255, 150);  
leds[AquariusBB [18]] = CHSV(hueP+96, 255, 150);  
leds[AquariusBB [19]] = CHSV(hueP+96, 255, 150);  



leds[AquariusCC [0]] = CHSV(hueP, 255, 150);  
leds[AquariusCC [1]] = CHSV(hueP, 255, 150);  
leds[AquariusCC [2]] = CHSV(hueP+16, 255, 150);  
leds[AquariusCC [3]] = CHSV(hueP+16, 255, 150);  
leds[AquariusCC [4]] = CHSV(hueP+32, 255, 150);  
leds[AquariusCC [5]] = CHSV(hueP+32, 255, 150);  
leds[AquariusCC [6]] = CHSV(hueP+48, 255, 150);  
leds[AquariusCC [7]] = CHSV(hueP+48, 255, 150);  
leds[AquariusCC [8]] = CHSV(hueP+64, 255, 150);  
leds[AquariusCC [9]] = CHSV(hueP+64, 255, 150);  
leds[AquariusCC [10]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [11]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [12]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [13]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [14]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [15]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [16]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [17]] = CHSV(hueP+80, 255, 150);  
leds[AquariusCC [18]] = CHSV(hueP+96, 255, 150);  
leds[AquariusCC [19]] = CHSV(hueP+96, 255, 150);  



leds[AquariusDD [0]] = CHSV(hueP, 255, 150);  
leds[AquariusDD [1]] = CHSV(hueP, 255, 150);  
leds[AquariusDD [2]] = CHSV(hueP+16, 255, 150);  
leds[AquariusDD [3]] = CHSV(hueP+16, 255, 150);  
leds[AquariusDD [4]] = CHSV(hueP+32, 255, 150);  
leds[AquariusDD [5]] = CHSV(hueP+32, 255, 150);  
leds[AquariusDD [6]] = CHSV(hueP+48, 255, 150);  
leds[AquariusDD [7]] = CHSV(hueP+48, 255, 150);  
leds[AquariusDD [8]] = CHSV(hueP+64, 255, 150);  
leds[AquariusDD [9]] = CHSV(hueP+64, 255, 150);  
leds[AquariusDD [10]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [11]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [12]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [13]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [14]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [15]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [16]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [17]] = CHSV(hueP+80, 255, 150);  
leds[AquariusDD [18]] = CHSV(hueP+96, 255, 150);  
leds[AquariusDD [19]] = CHSV(hueP+96, 255, 150);  



leds[AquariusEE [0]] = CHSV(hueP, 255, 150);  
leds[AquariusEE [1]] = CHSV(hueP, 255, 150);  
leds[AquariusEE [2]] = CHSV(hueP+16, 255, 150);  
leds[AquariusEE [3]] = CHSV(hueP+16, 255, 150);  
leds[AquariusEE [4]] = CHSV(hueP+32, 255, 150);  
leds[AquariusEE [5]] = CHSV(hueP+32, 255, 150);  
leds[AquariusEE [6]] = CHSV(hueP+48, 255, 150);  
leds[AquariusEE [7]] = CHSV(hueP+48, 255, 150);  
leds[AquariusEE [8]] = CHSV(hueP+64, 255, 150);  
leds[AquariusEE [9]] = CHSV(hueP+64, 255, 150);  
leds[AquariusEE [10]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [11]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [12]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [13]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [14]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [15]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [16]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [17]] = CHSV(hueP+80, 255, 150);  
leds[AquariusEE [18]] = CHSV(hueP+96, 255, 150);  
leds[AquariusEE [19]] = CHSV(hueP+96, 255, 150);  


}

if (signSave == 11) {
leds[Pieces [0]] = CHSV(hueP, 255, 150);  
leds[Pieces [1]] = CHSV(hueP, 255, 150);  
leds[Pieces [2]] = CHSV(hueP+16, 255, 150);  
leds[Pieces [3]] = CHSV(hueP+16, 255, 150);  
leds[Pieces [4]] = CHSV(hueP+32, 255, 150);  
leds[Pieces [5]] = CHSV(hueP+32, 255, 150);  
leds[Pieces [6]] = CHSV(hueP+48, 255, 150);  
leds[Pieces [7]] = CHSV(hueP+48, 255, 150);  
leds[Pieces [8]] = CHSV(hueP+64, 255, 150);  
leds[Pieces [9]] = CHSV(hueP+64, 255, 150);  
leds[Pieces [10]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [11]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [12]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [13]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [14]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [15]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [16]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [17]] = CHSV(hueP+80, 255, 150);  
leds[Pieces [18]] = CHSV(hueP+96, 255, 150);  
leds[Pieces [19]] = CHSV(hueP+96, 255, 150);  
leds[Pieces [20]] = CHSV(hueP+112, 255, 150);  
leds[Pieces [21]] = CHSV(hueP+112, 255, 150);  
leds[Pieces [22]] = CHSV(hueP+128, 255, 150);  
leds[Pieces [23]] = CHSV(hueP+128, 255, 150);  
leds[Pieces [24]] = CHSV(hueP+144, 255, 150);  
leds[Pieces [25]] = CHSV(hueP+144, 255, 150);  
leds[Pieces [26]] = CHSV(hueP+160, 255, 150);  
leds[Pieces [27]] = CHSV(hueP+160, 255, 150); 

leds[PiecesBB [0]] = CHSV(hueP, 255, 150);  
leds[PiecesBB [1]] = CHSV(hueP, 255, 150);  
leds[PiecesBB [2]] = CHSV(hueP+16, 255, 150);  
leds[PiecesBB [3]] = CHSV(hueP+16, 255, 150);  
leds[PiecesBB [4]] = CHSV(hueP+32, 255, 150);  
leds[PiecesBB [5]] = CHSV(hueP+32, 255, 150);  
leds[PiecesBB [6]] = CHSV(hueP+48, 255, 150);  
leds[PiecesBB [7]] = CHSV(hueP+48, 255, 150);  
leds[PiecesBB [8]] = CHSV(hueP+64, 255, 150);  
leds[PiecesBB [9]] = CHSV(hueP+64, 255, 150);  
leds[PiecesBB [10]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [11]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [12]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [13]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [14]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [15]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [16]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [17]] = CHSV(hueP+80, 255, 150);  
leds[PiecesBB [18]] = CHSV(hueP+96, 255, 150);  
leds[PiecesBB [19]] = CHSV(hueP+96, 255, 150);  
leds[PiecesBB [20]] = CHSV(hueP+112, 255, 150);  
leds[PiecesBB [21]] = CHSV(hueP+112, 255, 150);  
leds[PiecesBB [22]] = CHSV(hueP+128, 255, 150);  
leds[PiecesBB [23]] = CHSV(hueP+128, 255, 150);  
leds[PiecesBB [24]] = CHSV(hueP+144, 255, 150);  
leds[PiecesBB [25]] = CHSV(hueP+144, 255, 150);  
leds[PiecesBB [26]] = CHSV(hueP+160, 255, 150);  
leds[PiecesBB [27]] = CHSV(hueP+160, 255, 150); 

leds[PiecesCC [0]] = CHSV(hueP, 255, 150);  
leds[PiecesCC [1]] = CHSV(hueP, 255, 150);  
leds[PiecesCC [2]] = CHSV(hueP+16, 255, 150);  
leds[PiecesCC [3]] = CHSV(hueP+16, 255, 150);  
leds[PiecesCC [4]] = CHSV(hueP+32, 255, 150);  
leds[PiecesCC [5]] = CHSV(hueP+32, 255, 150);  
leds[PiecesCC [6]] = CHSV(hueP+48, 255, 150);  
leds[PiecesCC [7]] = CHSV(hueP+48, 255, 150);  
leds[PiecesCC [8]] = CHSV(hueP+64, 255, 150);  
leds[PiecesCC [9]] = CHSV(hueP+64, 255, 150);  
leds[PiecesCC [10]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [11]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [12]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [13]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [14]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [15]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [16]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [17]] = CHSV(hueP+80, 255, 150);  
leds[PiecesCC [18]] = CHSV(hueP+96, 255, 150);  
leds[PiecesCC [19]] = CHSV(hueP+96, 255, 150);  
leds[PiecesCC [20]] = CHSV(hueP+112, 255, 150);  
leds[PiecesCC [21]] = CHSV(hueP+112, 255, 150);  
leds[PiecesCC [22]] = CHSV(hueP+128, 255, 150);  
leds[PiecesCC [23]] = CHSV(hueP+128, 255, 150);  
leds[PiecesCC [24]] = CHSV(hueP+144, 255, 150);  
leds[PiecesCC [25]] = CHSV(hueP+144, 255, 150);  
leds[PiecesCC [26]] = CHSV(hueP+160, 255, 150);  
leds[PiecesCC [27]] = CHSV(hueP+160, 255, 150); 

leds[PiecesDD [0]] = CHSV(hueP, 255, 150);  
leds[PiecesDD [1]] = CHSV(hueP, 255, 150);  
leds[PiecesDD [2]] = CHSV(hueP+16, 255, 150);  
leds[PiecesDD [3]] = CHSV(hueP+16, 255, 150);  
leds[PiecesDD [4]] = CHSV(hueP+32, 255, 150);  
leds[PiecesDD [5]] = CHSV(hueP+32, 255, 150);  
leds[PiecesDD [6]] = CHSV(hueP+48, 255, 150);  
leds[PiecesDD [7]] = CHSV(hueP+48, 255, 150);  
leds[PiecesDD [8]] = CHSV(hueP+64, 255, 150);  
leds[PiecesDD [9]] = CHSV(hueP+64, 255, 150);  
leds[PiecesDD [10]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [11]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [12]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [13]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [14]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [15]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [16]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [17]] = CHSV(hueP+80, 255, 150);  
leds[PiecesDD [18]] = CHSV(hueP+96, 255, 150);  
leds[PiecesDD [19]] = CHSV(hueP+96, 255, 150);  
leds[PiecesDD [20]] = CHSV(hueP+112, 255, 150);  
leds[PiecesDD [21]] = CHSV(hueP+112, 255, 150);  
leds[PiecesDD [22]] = CHSV(hueP+128, 255, 150);  
leds[PiecesDD [23]] = CHSV(hueP+128, 255, 150);  
leds[PiecesDD [24]] = CHSV(hueP+144, 255, 150);  
leds[PiecesDD [25]] = CHSV(hueP+144, 255, 150);  
leds[PiecesDD [26]] = CHSV(hueP+160, 255, 150);  
leds[PiecesDD [27]] = CHSV(hueP+160, 255, 150); 

leds[PiecesEE [0]] = CHSV(hueP, 255, 150);  
leds[PiecesEE [1]] = CHSV(hueP, 255, 150);  
leds[PiecesEE [2]] = CHSV(hueP+16, 255, 150);  
leds[PiecesEE [3]] = CHSV(hueP+16, 255, 150);  
leds[PiecesEE [4]] = CHSV(hueP+32, 255, 150);  
leds[PiecesEE [5]] = CHSV(hueP+32, 255, 150);  
leds[PiecesEE [6]] = CHSV(hueP+48, 255, 150);  
leds[PiecesEE [7]] = CHSV(hueP+48, 255, 150);  
leds[PiecesEE [8]] = CHSV(hueP+64, 255, 150);  
leds[PiecesEE [9]] = CHSV(hueP+64, 255, 150);  
leds[PiecesEE [10]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [11]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [12]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [13]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [14]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [15]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [16]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [17]] = CHSV(hueP+80, 255, 150);  
leds[PiecesEE [18]] = CHSV(hueP+96, 255, 150);  
leds[PiecesEE [19]] = CHSV(hueP+96, 255, 150);  
leds[PiecesEE [20]] = CHSV(hueP+112, 255, 150);  
leds[PiecesEE [21]] = CHSV(hueP+112, 255, 150);  
leds[PiecesEE [22]] = CHSV(hueP+128, 255, 150);  
leds[PiecesEE [23]] = CHSV(hueP+128, 255, 150);  
leds[PiecesEE [24]] = CHSV(hueP+144, 255, 150);  
leds[PiecesEE [25]] = CHSV(hueP+144, 255, 150);  
leds[PiecesEE [26]] = CHSV(hueP+160, 255, 150);  
leds[PiecesEE [27]] = CHSV(hueP+160, 255, 150); 
}
                   

if (AA >= 10) {hueP--;  
     AA = 0;  }


if (ZZ >= 90000) {  CounterAA++; AstrologyStage = 0;  AA = 0; BB = 0; CC = 0; DD = 0; EE = 0; ZZ = 0; CounterAA = 0; CounterBB = 0; CounterCC = 0; CounterDD = 0;  CounterEE = 0; TimerAA = 100; TimerBB = 100; TimerCC = 100; TimerDD = 100; TimerEE = 100; 
starsigns = random (0,12);  
starsignsBB = random (0,12);
starsignsCC = random (0,12);
starsignsDD = random (0,12);
starsignsEE = random (0,12);

signSave = starsignsEE;
Master++; }



} 



  FastLED.show(); 
  } 
