void masterloop () {
  
  if (mastertimer > masterspeed) { mastermode++; if (mastermode >= 6) {mastermode = 0; pulsehue = random (0,45); rainhue = random (0,45); warphue = random (0,45); hue0 = random (0, 45);  } mastertimer = 0;}


switch (mastermode) {
  
case 0: loop_one(); break;
case 1: loop_three(); break;
case 2: loop_four (); break;
case 3: loop_five (); break;
case 4: loop_six (); break;
case 5: loop_seven (); break;
break;

}
  
  
  
  
  
  
  }
