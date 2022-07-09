

void Export_to_display () {
 
 if (SendTimer >= 500) {
 
 Wire.beginTransmission(8);
 Wire.write(masterHue);  
 Wire.write(sat);   
 Wire.write(universalBrightness);   
 
Wire.write(masterTime /4);   
Wire.write(MdSend0);   
Wire.write(MdSend1);   

 
 Wire.endTransmission(); 

 SendTimer = 0;}


  }
