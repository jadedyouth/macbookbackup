
int allhlinespd = 50; 
byte Bgap = 12;
byte Cgap = 12;
byte universalshapebrightness = 200;
byte shapesparkle = 1;

//////////////////////////////////////////////////////////Shape A
byte shapehue;
byte shapehue0;
byte shapehue1;
byte shapehue2;
byte shapehue3;
byte shapehue4;
byte shapehue5;
byte shapehue6;
byte shapehue7;
byte shapehue8;
byte shapehue9;
byte shapehue10;
byte shapehue11;
byte shapehue12;
byte shapehue13;
byte shapehue14;
byte shapesat = 255; 
byte shapeval = universalshapebrightness;
int shapeglobalgate = 0;
elapsedMillis shapeglobaltimer;
byte shapeglobalidx;
byte shapegloballength;
int shapeform;

byte allhline0idx;
byte line0startintervall;
byte line0length;
byte line0offidx;
byte shapeval0 = universalshapebrightness;

byte allhline1idx;
byte line1startintervall;
byte line1length;
byte line1offidx;
byte shapeval1 = universalshapebrightness;

byte allhline2idx;
byte line2startintervall;
byte line2length;
byte line2offidx;
byte shapeval2 = universalshapebrightness;

byte allhline3idx;
byte line3startintervall;
byte line3length;
byte line3offidx;
byte shapeval3 = universalshapebrightness;

byte allhline4idx;
byte line4startintervall;
byte line4length;
byte line4offidx;
byte shapeval4 = universalshapebrightness;

byte allhline5idx;
byte line5startintervall;
byte line5length;
byte line5offidx;
byte shapeval5 = universalshapebrightness;

byte allhline6idx;
byte line6startintervall;
byte line6length;
byte line6offidx;
byte shapeval6 = universalshapebrightness;

byte allhline7idx;
byte line7startintervall;
byte line7length;
byte line7offidx;
byte shapeval7 = universalshapebrightness;

byte allhline8idx;
byte line8startintervall;
byte line8length;
byte line8offidx;
byte shapeval8 = universalshapebrightness;

byte allhline9idx;
byte line9startintervall;
byte line9length;
byte line9offidx;
byte shapeval9 = universalshapebrightness;

byte allhline10idx;
byte line10startintervall;
byte line10length;
byte line10offidx;
byte shapeval10 = universalshapebrightness;

byte allhline11idx;
byte line11startintervall;
byte line11length;
byte line11offidx;
byte shapeval11 = universalshapebrightness;

byte allhline12idx;
byte line12startintervall;
byte line12length;
byte line12offidx;
byte shapeval12 = universalshapebrightness;

byte allhline13idx;
byte line13startintervall;
byte line13length;
byte line13offidx;
byte shapeval13 = universalshapebrightness;

byte allhline14idx;
byte line14startintervall;
byte line14length;
byte line14offidx;
byte shapeval14 = universalshapebrightness;
//////////////////////////////////////////////////////////Shape B
byte Bshapehue;
byte Bshapesat = 255;
byte Bshapeval = universalshapebrightness;
int Bshapeglobalgate = 99;
elapsedMillis Bshapeglobaltimer;
byte Bshapeglobalidx;
byte Bshapegloballength;
int Bshapeform;

byte Ballhline0idx;
byte Bline0startintervall;
byte Bline0length;
byte Bline0offidx;
byte Bshapeval0 = universalshapebrightness;

byte Ballhline1idx;
byte Bline1startintervall;
byte Bline1length;
byte Bline1offidx;
byte Bshapeval1 = universalshapebrightness;

byte Ballhline2idx;
byte Bline2startintervall;
byte Bline2length;
byte Bline2offidx;
byte Bshapeval2 = universalshapebrightness;

byte Ballhline3idx;
byte Bline3startintervall;
byte Bline3length;
byte Bline3offidx;
byte Bshapeval3 = universalshapebrightness;

byte Ballhline4idx;
byte Bline4startintervall;
byte Bline4length;
byte Bline4offidx;
byte Bshapeval4 = universalshapebrightness;

byte Ballhline5idx;
byte Bline5startintervall;
byte Bline5length;
byte Bline5offidx;
byte Bshapeval5 = universalshapebrightness;

byte Ballhline6idx;
byte Bline6startintervall;
byte Bline6length;
byte Bline6offidx;
byte Bshapeval6 = universalshapebrightness;

byte Ballhline7idx;
byte Bline7startintervall;
byte Bline7length;
byte Bline7offidx;
byte Bshapeval7 = universalshapebrightness;

byte Ballhline8idx;
byte Bline8startintervall;
byte Bline8length;
byte Bline8offidx;
byte Bshapeval8 = universalshapebrightness;

byte Ballhline9idx;
byte Bline9startintervall;
byte Bline9length;
byte Bline9offidx;
byte Bshapeval9 = universalshapebrightness;

byte Ballhline10idx;
byte Bline10startintervall;
byte Bline10length;
byte Bline10offidx;
byte Bshapeval10 = universalshapebrightness;

byte Ballhline11idx;
byte Bline11startintervall;
byte Bline11length;
byte Bline11offidx;
byte Bshapeval11 = universalshapebrightness;

byte Ballhline12idx;
byte Bline12startintervall;
byte Bline12length;
byte Bline12offidx;
byte Bshapeval12 = universalshapebrightness;

byte Ballhline13idx;
byte Bline13startintervall;
byte Bline13length;
byte Bline13offidx;
byte Bshapeval13 = universalshapebrightness;

byte Ballhline14idx;
byte Bline14startintervall;
byte Bline14length;
byte Bline14offidx;
byte Bshapeval14 = universalshapebrightness;

//////////////////////////////////////////////////////////Shape C
byte Cshapehue;
byte Cshapesat = 255;
byte Cshapeval = universalshapebrightness;
int Cshapeglobalgate = 99;
elapsedMillis Cshapeglobaltimer;
byte Cshapeglobalidx;
byte Cshapegloballength;
int Cshapeform;

byte Callhline0idx;
byte Cline0startintervall;
byte Cline0length;
byte Cline0offidx;
byte Cshapeval0 = universalshapebrightness;

byte Callhline1idx;
byte Cline1startintervall;
byte Cline1length;
byte Cline1offidx;
byte Cshapeval1 = universalshapebrightness;

byte Callhline2idx;
byte Cline2startintervall;
byte Cline2length;
byte Cline2offidx;
byte Cshapeval2 = universalshapebrightness;

byte Callhline3idx;
byte Cline3startintervall;
byte Cline3length;
byte Cline3offidx;
byte Cshapeval3 = universalshapebrightness;

byte Callhline4idx;
byte Cline4startintervall;
byte Cline4length;
byte Cline4offidx;
byte Cshapeval4 = universalshapebrightness;

byte Callhline5idx;
byte Cline5startintervall;
byte Cline5length;
byte Cline5offidx;
byte Cshapeval5 = universalshapebrightness;

byte Callhline6idx;
byte Cline6startintervall;
byte Cline6length;
byte Cline6offidx;
byte Cshapeval6 = universalshapebrightness;

byte Callhline7idx;
byte Cline7startintervall;
byte Cline7length;
byte Cline7offidx;
byte Cshapeval7 = universalshapebrightness;

byte Callhline8idx;
byte Cline8startintervall;
byte Cline8length;
byte Cline8offidx;
byte Cshapeval8 = universalshapebrightness;

byte Callhline9idx;
byte Cline9startintervall;
byte Cline9length;
byte Cline9offidx;
byte Cshapeval9 = universalshapebrightness;

byte Callhline10idx;
byte Cline10startintervall;
byte Cline10length;
byte Cline10offidx;
byte Cshapeval10 = universalshapebrightness;

byte Callhline11idx;
byte Cline11startintervall;
byte Cline11length;
byte Cline11offidx;
byte Cshapeval11 = universalshapebrightness;

byte Callhline12idx;
byte Cline12startintervall;
byte Cline12length;
byte Cline12offidx;
byte Cshapeval12 = universalshapebrightness;

byte Callhline13idx;
byte Cline13startintervall;
byte Cline13length;
byte Cline13offidx;
byte Cshapeval13 = universalshapebrightness;

byte Callhline14idx;
byte Cline14startintervall;
byte Cline14length;
byte Cline14offidx;
byte Cshapeval14 = universalshapebrightness;



void shapes (){    
//////////////////////////////////////////////////////////Shape 0

//i use 'gate' term to define the parameters for the loop
if (shapeglobalgate == 0) { 
//this is the part where you define the shape
//1 row of horrizontal panels is split into thirds. commented as top, middle, bottom, all, top 2, bottom 2.

  shapeform =  random (0,44); 


/////Shape A  



///all
if (shapeform == 0) { // all right angled triangle
  
line0startintervall = 0; line0length = 15; 
line1startintervall = 1; line1length = 14; 
line2startintervall = 2; line2length = 13; 
line3startintervall = 3; line3length = 12; 
line4startintervall = 4; line4length = 11; 
line5startintervall = 5; line5length = 10; 
line6startintervall = 6; line6length = 9; 
line7startintervall = 7; line7length = 8; 
line8startintervall = 8; line8length = 7; 
line9startintervall = 9; line9length = 6; 
line10startintervall = 10; line10length = 5; 
line11startintervall = 11; line11length = 4; 
line12startintervall = 12; line12length = 3; 
line13startintervall = 13; line13length = 2; 
line14startintervall = 14; line14length = 1; 
shapegloballength = 15;  } //(max length)


if (shapeform == 1) { // all square
  
line0startintervall = 0; line0length = 15; 
line1startintervall = 0; line1length = 15; 
line2startintervall = 0; line2length = 15; 
line3startintervall = 0; line3length = 15; 
line4startintervall = 0; line4length = 15; 
line5startintervall = 0; line5length = 15; 
line6startintervall = 0; line6length = 15; 
line7startintervall = 0; line7length = 15; 
line8startintervall = 0; line8length = 15; 
line9startintervall = 0; line9length = 15; 
line10startintervall = 0; line10length = 15; 
line11startintervall = 0; line11length = 15; 
line12startintervall = 0; line12length = 15; 
line13startintervall = 0; line13length = 15; 
line14startintervall = 0; line14length = 15; 
shapegloballength = 15;  } //(max length)

if (shapeform == 2) { // all play arrow
  
line0startintervall = 7; line0length = 1; 
line1startintervall = 6; line1length = 2; 
line2startintervall = 5; line2length = 3; 
line3startintervall = 4; line3length = 4; 
line4startintervall = 3; line4length = 5; 
line5startintervall = 2; line5length = 6; 
line6startintervall = 1; line6length = 7; 
line7startintervall = 0; line7length = 8; 
line8startintervall = 1; line8length = 7; 
line9startintervall = 2; line9length = 6; 
line10startintervall = 3; line10length = 5; 
line11startintervall = 4; line11length = 4; 
line12startintervall = 5; line12length = 3; 
line13startintervall = 6; line13length = 2; 
line14startintervall = 7; line14length = 1; 
shapegloballength = 8;  } //(max length)

if (shapeform == 3) { // all diamond
  
line0startintervall = 7; line0length = 1; 
line1startintervall = 6; line1length = 3; 
line2startintervall = 5; line2length = 5; 
line3startintervall = 4; line3length = 7; 
line4startintervall = 3; line4length = 9; 
line5startintervall = 2; line5length = 11; 
line6startintervall = 1; line6length = 13; 
line7startintervall = 0; line7length = 15; 
line8startintervall = 1; line8length = 13; 
line9startintervall = 2; line9length = 11; 
line10startintervall = 3; line10length = 9; 
line11startintervall = 4; line11length = 7; 
line12startintervall = 5; line12length = 5; 
line13startintervall = 6; line13length = 3; 
line14startintervall = 7; line14length = 1; 
shapegloballength = 15;  } //(max length)

if (shapeform == 4) { // all rhombus
  
line0startintervall = 0; line0length = 41; 
line1startintervall = 1; line1length = 39; 
line2startintervall = 2; line2length = 37; 
line3startintervall = 3; line3length = 35; 
line4startintervall = 4; line4length = 33; 
line5startintervall = 5; line5length = 31; 
line6startintervall = 6; line6length = 29; 
line7startintervall = 7; line7length = 27; 
line8startintervall = 8; line8length = 25; 
line9startintervall = 9; line9length = 23; 
line10startintervall = 10; line10length = 21; 
line11startintervall = 11; line11length = 19; 
line12startintervall = 12; line12length = 17; 
line13startintervall = 13; line13length = 15; 
line14startintervall = 14; line14length = 13; 
shapegloballength = 41;  } //(max length)


if (shapeform == 5) { // all concave reverse arrow
  
line0startintervall = 0; line0length = 4; 
line1startintervall = 1; line1length = 5; 
line2startintervall = 2; line2length = 6; 
line3startintervall = 3; line3length = 7; 
line4startintervall = 4; line4length = 8; 
line5startintervall = 5; line5length = 9; 
line6startintervall = 6; line6length = 10; 
line7startintervall = 7; line7length = 11; 
line8startintervall = 6; line8length = 10; 
line9startintervall = 5; line9length = 9; 
line10startintervall = 4; line10length = 8; 
line11startintervall = 3; line11length = 7; 
line12startintervall = 2; line12length = 6; 
line13startintervall = 1; line13length = 5; 
line14startintervall = 0; line14length = 4; 
shapegloballength = 18;  } //(max length)


if (shapeform == 6) { // all swoopy arrow
  
line0startintervall = 7; line0length = 11; 
line1startintervall = 6; line1length = 10; 
line2startintervall = 5; line2length = 9; 
line3startintervall = 4; line3length = 8; 
line4startintervall = 3; line4length = 7; 
line5startintervall = 2; line5length = 6; 
line6startintervall = 1; line6length = 5; 
line7startintervall = 0; line7length = 5; 
line8startintervall = 1; line8length = 5; 
line9startintervall = 2; line9length = 6; 
line10startintervall = 3; line10length = 7; 
line11startintervall = 4; line11length = 8; 
line12startintervall = 5; line12length = 9; 
line13startintervall = 6; line13length = 10; 
line14startintervall = 7; line14length = 11; 
shapegloballength = 18;  } //(max length)



if (shapeform == 7) { // all pac person
  
line0startintervall = 0; line0length = 7; 
line1startintervall = 1; line1length = 7; 
line2startintervall = 2; line2length = 7; 
line3startintervall = 3; line3length = 6; 
line4startintervall = 4; line4length = 6; 
line5startintervall = 5; line5length = 6; 
line6startintervall = 6; line6length = 6; 
line7startintervall = 7; line7length = 5; 
line8startintervall = 6; line8length = 6; 
line9startintervall = 5; line9length = 6; 
line10startintervall = 4; line10length = 6; 
line11startintervall = 3; line11length = 6; 
line12startintervall = 2; line12length = 7; 
line13startintervall = 1; line13length = 7; 
line14startintervall = 0; line14length = 7; 
shapegloballength = 12;  } //(max length)

//////top

if (shapeform == 8) { // diamond top
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 2; line10length = 1; 
line11startintervall = 1; line11length = 3; 
line12startintervall = 0; line12length = 5; 
line13startintervall = 1; line13length = 3; 
line14startintervall = 2; line14length = 1; 
shapegloballength = 5;  } //(max length)

if (shapeform == 9) { // right angle triangle top
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 5; 
line11startintervall = 1; line11length = 4; 
line12startintervall = 2; line12length = 3; 
line13startintervall = 3; line13length = 2; 
line14startintervall = 4; line14length = 1; 
shapegloballength = 5;  } //(max length)


if (shapeform == 10) { // Square top
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 5; 
line11startintervall = 0; line11length = 5; 
line12startintervall = 0; line12length = 5; 
line13startintervall = 0; line13length = 5; 
line14startintervall = 0; line14length = 5; 
shapegloballength = 5;  } //(max length)

if (shapeform == 11) { // rectangle top
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 10; 
line11startintervall = 0; line11length = 10; 
line12startintervall = 0; line12length = 10; 
line13startintervall = 0; line13length = 10; 
line14startintervall = 0; line14length = 10; 
shapegloballength = 10;  } //(max length)


if (shapeform == 12) { // circle top
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 1; line10length = 3; 
line11startintervall = 0; line11length = 5; 
line12startintervall = 0; line12length = 5; 
line13startintervall = 0; line13length = 5; 
line14startintervall = 1; line14length = 3; 
shapegloballength = 5;  } //(max length)



//////middle


if (shapeform == 13) { // diamond middle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 2; line5length = 1; 
line6startintervall = 1; line6length = 3; 
line7startintervall = 0; line7length = 5; 
line8startintervall = 1; line8length = 3; 
line9startintervall = 2; line9length = 1; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)


if (shapeform == 14) { // right angle triangle middle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 5; 
line6startintervall = 1; line6length = 4; 
line7startintervall = 2; line7length = 3; 
line8startintervall = 3; line8length = 2; 
line9startintervall = 4; line9length = 1; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)


if (shapeform == 15) { // Square middle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 5; 
line6startintervall = 0; line6length = 5; 
line7startintervall = 0; line7length = 5; 
line8startintervall = 0; line8length = 5; 
line9startintervall = 0; line9length = 5; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)

if (shapeform == 16) { // rectangle middle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 10; 
line6startintervall = 0; line6length = 10; 
line7startintervall = 0; line7length = 10; 
line8startintervall = 0; line8length = 10; 
line9startintervall = 0; line9length = 10; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 10;  } //(max length)


if (shapeform == 17) { // circle middle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 1; line5length = 3; 
line6startintervall = 0; line6length = 5; 
line7startintervall = 0; line7length = 5; 
line8startintervall = 0; line8length = 5; 
line9startintervall = 1; line9length = 3; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)

/////bottom


if (shapeform == 18) { // diamond bottom
  
line0startintervall = 2; line0length = 1; 
line1startintervall = 1; line1length = 3; 
line2startintervall = 0; line2length = 5; 
line3startintervall = 1; line3length = 3; 
line4startintervall = 2; line4length = 1; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)


if (shapeform == 19) { // right angle triangle bottom
  
line0startintervall = 0; line0length = 5; 
line1startintervall = 1; line1length = 4; 
line2startintervall = 2; line2length = 3; 
line3startintervall = 3; line3length = 2; 
line4startintervall = 4; line4length = 1; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)


if (shapeform == 20) { // Square bottom
  
line0startintervall = 0; line0length = 5; 
line1startintervall = 0; line1length = 5; 
line2startintervall = 0; line2length = 5; 
line3startintervall = 0; line3length = 5; 
line4startintervall = 0; line4length = 5; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)

if (shapeform == 21) { // rectangle bottom
  
line0startintervall = 0; line0length = 10; 
line1startintervall = 0; line1length = 10; 
line2startintervall = 0; line2length = 10; 
line3startintervall = 0; line3length = 10; 
line4startintervall = 0; line4length = 10; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 10;  } //(max length)


if (shapeform == 22) { // circle bottom
  
line0startintervall = 1; line0length = 3; 
line1startintervall = 0; line1length = 5; 
line2startintervall = 0; line2length = 5; 
line3startintervall = 0; line3length = 5; 
line4startintervall = 1; line4length = 3; 

line5startintervall = 1; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 1; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 5;  } //(max length)


if (shapeform == 23) { // top parralellogram
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 
line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 
line10startintervall = 0; line10length = 2; 
line11startintervall = 1; line11length = 2; 
line12startintervall = 2; line12length = 2; 
line13startintervall = 3; line13length = 2; 
line14startintervall = 4; line14length = 2; 
shapegloballength = 6;  } //(max length)

if (shapeform == 24) { // mid parralellogram
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 2; 
line6startintervall = 1; line6length = 2; 
line7startintervall = 2; line7length = 2; 
line8startintervall = 3; line8length = 2; 
line9startintervall = 4; line9length = 2; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 6;  } //(max length)

if (shapeform == 25) { // btm parralellogram
  
line0startintervall = 0; line0length = 2; 
line1startintervall = 1; line1length = 2; 
line2startintervall = 2; line2length = 2; 
line3startintervall = 3; line3length = 2; 
line4startintervall = 4; line4length = 2; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 6;  } //(max length)

if (shapeform == 26) { // top rhobmus
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 11; 
line11startintervall = 1; line11length = 9; 
line12startintervall = 2; line12length = 7; 
line13startintervall = 3; line13length = 5; 
line14startintervall = 4; line14length = 3; 
shapegloballength = 11;  } //(max length)

if (shapeform == 27) { // mid rhobmus
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 11; 
line6startintervall = 1; line6length = 8; 
line7startintervall = 2; line7length = 7; 
line8startintervall = 3; line8length = 5; 
line9startintervall = 4; line9length = 3; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 11;  } //(max length)

if (shapeform == 28) { // bottom rhobmus
  
line0startintervall = 0; line0length = 11; 
line1startintervall = 1; line1length = 9; 
line2startintervall = 2; line2length = 7; 
line3startintervall = 3; line3length = 5; 
line4startintervall = 4; line4length = 3; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 11;  } //(max length)


//special


if (shapeform == 29) { // full wipe
  
line0startintervall = 0; line0length = 48; 
line1startintervall = 1; line1length = 48; 
line2startintervall = 0; line2length = 48; 
line3startintervall = 1; line3length = 48; 
line4startintervall = 0; line4length = 48; 

line5startintervall = 1; line5length = 48; 
line6startintervall = 0; line6length = 48; 
line7startintervall = 1; line7length = 48; 
line8startintervall = 0; line8length = 48; 
line9startintervall = 1; line9length = 48; 

line10startintervall = 0; line10length = 48; 
line11startintervall = 1; line11length = 48; 
line12startintervall = 0; line12length = 48; 
line13startintervall = 1; line13length = 48; 
line14startintervall = 0; line14length = 48; 
shapegloballength = 48;  } //(max length)


////////////////////////////// top 2 thirds

if (shapeform == 30) { // top 2 thirds right angle triangle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 10; 
line6startintervall = 1; line6length = 9; 
line7startintervall = 2; line7length = 8; 
line8startintervall = 3; line8length = 7; 
line9startintervall = 4; line9length = 6; 

line10startintervall = 5; line10length = 5; 
line11startintervall = 6; line11length = 4; 
line12startintervall = 7; line12length = 3; 
line13startintervall = 8; line13length = 2; 
line14startintervall = 9; line14length = 1; 
shapegloballength = 10;  } //(max length)

if (shapeform == 31) { //  top 2 thirds square
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 10; 
line6startintervall = 0; line6length = 10; 
line7startintervall = 0; line7length = 10; 
line8startintervall = 0; line8length = 10; 
line9startintervall = 0; line9length = 10; 

line10startintervall = 0; line10length = 10; 
line11startintervall = 0; line11length = 10; 
line12startintervall = 0; line12length = 10; 
line13startintervall = 0; line13length = 10; 
line14startintervall = 0; line14length = 10; 
shapegloballength = 10;  } //(max length)


if (shapeform == 32) { // top 2 thirds normal triangle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 19; 
line6startintervall = 1; line6length = 17; 
line7startintervall = 2; line7length = 15; 
line8startintervall = 3; line8length = 13; 
line9startintervall = 4; line9length = 11; 

line10startintervall = 5; line10length = 9; 
line11startintervall = 6; line11length = 7; 
line12startintervall = 7; line12length = 5; 
line13startintervall = 8; line13length = 3; 
line14startintervall = 9; line14length = 1; 
shapegloballength = 19;  } //(max length)


if (shapeform == 33) { // top 2 thirds rectangle
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 20; 
line6startintervall = 0; line6length = 20; 
line7startintervall = 0; line7length = 20; 
line8startintervall = 0; line8length = 20; 
line9startintervall = 0; line9length = 20; 

line10startintervall = 0; line10length = 20; 
line11startintervall = 0; line11length = 20; 
line12startintervall = 0; line12length = 20; 
line13startintervall = 0; line13length = 20; 
line14startintervall = 0; line14length = 20; 
shapegloballength = 20;  } //(max length)

if (shapeform == 34) { // top 2 thirds parralellogram
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 4; 
line6startintervall = 1; line6length = 4; 
line7startintervall = 2; line7length = 4; 
line8startintervall = 3; line8length = 4; 
line9startintervall = 4; line9length = 4; 

line10startintervall = 5; line10length = 4; 
line11startintervall = 6; line11length = 4; 
line12startintervall = 7; line12length = 4; 
line13startintervall = 8; line13length = 4; 
line14startintervall = 9; line14length = 4; 
shapegloballength = 13;  } //(max length)


//bottom 2 thirds

if (shapeform == 35) { // bottom 2 thirds right angle triangle
  
line0startintervall = 0; line0length = 10; 
line1startintervall = 1; line1length = 9; 
line2startintervall = 2; line2length = 8; 
line3startintervall = 3; line3length = 7; 
line4startintervall = 4; line4length = 6; 

line5startintervall = 5; line5length = 5; 
line6startintervall = 6; line6length = 4; 
line7startintervall = 7; line7length = 3; 
line8startintervall = 8; line8length = 2; 
line9startintervall = 9; line9length = 1; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 10;  } //(max length)


if (shapeform == 36) { //  bottom 2 thirds square
  
line0startintervall = 0; line0length = 10; 
line1startintervall = 0; line1length = 10; 
line2startintervall = 0; line2length = 10; 
line3startintervall = 0; line3length = 10; 
line4startintervall = 0; line4length = 10; 

line5startintervall = 0; line5length = 10; 
line6startintervall = 0; line6length = 10; 
line7startintervall = 0; line7length = 10; 
line8startintervall = 0; line8length = 10; 
line9startintervall = 0; line9length = 10; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 10;  } //(max length)


if (shapeform == 37) { // bottom 2 thirds normal triangle
  
line0startintervall = 0; line0length = 19; 
line1startintervall = 1; line1length = 17; 
line2startintervall = 2; line2length = 15; 
line3startintervall = 3; line3length = 13; 
line4startintervall = 4; line4length = 11; 

line5startintervall = 5; line5length = 9; 
line6startintervall = 6; line6length = 7; 
line7startintervall = 7; line7length = 5; 
line8startintervall = 8; line8length = 3; 
line9startintervall = 9; line9length = 1; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 19;  } //(max length)

if (shapeform == 38) { // bottom 2 thirds rectangle
  
line0startintervall = 0; line0length = 20; 
line1startintervall = 0; line1length = 20; 
line2startintervall = 0; line2length = 20; 
line3startintervall = 0; line3length = 20; 
line4startintervall = 0; line4length = 20; 

line5startintervall = 0; line5length = 20; 
line6startintervall = 0; line6length = 20; 
line7startintervall = 0; line7length = 20; 
line8startintervall = 0; line8length = 20; 
line9startintervall = 0; line9length = 20; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 20;  } //(max length)


if (shapeform == 39) { // bottom 2 thirds parralellogram
  
line0startintervall = 0; line0length = 4; 
line1startintervall = 1; line1length = 4; 
line2startintervall = 2; line2length = 4; 
line3startintervall = 3; line3length = 4; 
line4startintervall = 4; line4length = 4; 

line5startintervall = 5; line5length = 4; 
line6startintervall = 6; line6length = 4; 
line7startintervall = 7; line7length = 4; 
line8startintervall = 8; line8length = 4; 
line9startintervall = 9; line9length = 4; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 13;  } //(max length)

if (shapeform == 40) { // top 2 thirds parralellogram
  
line0startintervall = 0; line0length = 4; 
line1startintervall = 1; line1length = 4; 
line2startintervall = 2; line2length = 4; 
line3startintervall = 3; line3length = 4; 
line4startintervall = 4; line4length = 4; 

line5startintervall = 5; line5length = 4; 
line6startintervall = 6; line6length = 4; 
line7startintervall = 7; line7length = 4; 
line8startintervall = 8; line8length = 4; 
line9startintervall = 9; line9length = 4; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 13;  } //(max length)


if (shapeform == 41) { // bottom 2 thirds diamond
  
line0startintervall = 5; line0length = 1; 
line1startintervall = 4; line1length = 3; 
line2startintervall = 3; line2length = 5; 
line3startintervall = 2; line3length = 7; 
line4startintervall = 1; line4length = 9; 

line5startintervall = 0; line5length = 11; 
line6startintervall = 1; line6length = 9; 
line7startintervall = 2; line7length = 7; 
line8startintervall = 3; line8length = 5; 
line9startintervall = 4; line9length = 3; 

line10startintervall = 5; line10length = 1; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 11;  } //(max length)

if (shapeform == 42) { // top 2 thirds diamond
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 5; line4length = 1; 

line5startintervall = 4; line5length = 3; 
line6startintervall = 3; line6length = 5; 
line7startintervall = 2; line7length = 7; 
line8startintervall = 1; line8length = 9; 
line9startintervall = 0; line9length = 11; 

line10startintervall = 1; line10length = 9; 
line11startintervall = 2; line11length = 7; 
line12startintervall = 3; line12length = 5; 
line13startintervall = 4; line13length = 3; 
line14startintervall = 5; line14length = 1; 
shapegloballength = 11;  } //(max length)


if (shapeform == -43) { // vertical oblong 5 wide 15 high
  
line0startintervall = 0; line0length = 5; 
line1startintervall = 0; line1length = 5; 
line2startintervall = 0; line2length = 5; 
line3startintervall = 0; line3length = 5; 
line4startintervall = 0; line4length = 5; 

line5startintervall = 0; line5length = 5; 
line6startintervall = 0; line6length = 5; 
line7startintervall = 0; line7length = 5; 
line8startintervall = 0; line8length = 5; 
line9startintervall = 0; line9length = 5; 

line10startintervall = 0; line10length = 5; 
line11startintervall = 0; line11length = 5; 
line12startintervall = 0; line12length = 5; 
line13startintervall = 0; line13length = 5; 
line14startintervall = 0; line14length = 5; 
shapegloballength = 5;  } //(max length)


if (shapeform == 99) { // blank slate
  
line0startintervall = 0; line0length = 0; 
line1startintervall = 0; line1length = 0; 
line2startintervall = 0; line2length = 0; 
line3startintervall = 0; line3length = 0; 
line4startintervall = 0; line4length = 0; 

line5startintervall = 0; line5length = 0; 
line6startintervall = 0; line6length = 0; 
line7startintervall = 0; line7length = 0; 
line8startintervall = 0; line8length = 0; 
line9startintervall = 0; line9length = 0; 

line10startintervall = 0; line10length = 0; 
line11startintervall = 0; line11length = 0; 
line12startintervall = 0; line12length = 0; 
line13startintervall = 0; line13length = 0; 
line14startintervall = 0; line14length = 0; 
shapegloballength = 0;  } //(max length)




 

shapeglobalidx = 0; shapehue = random (0,255); shapesat = random (180,255); if (shapeform >= 8 && shapeform != 29 && Bshapeglobalgate != 1) { if (shapeform <= 28){ Bgap = random (11,20); Bshapeglobalgate = 0;} if (shapeform >= 30){ Bgap = random (30,40); Bshapeglobalgate = random (-1,1);}   } shapeglobalgate = 1;} //end start gate








//////////shape B
if (Bshapeglobalgate == 0) { 
  



if (shapeform >= 8 && shapeform <= 28) {Bshapeform = random(0,21);}
if (shapeform >= 30) { Bshapeform = random(21,33); }

if (Bshapeform == 0) { // diamond top
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 2; Bline10length = 1; 
Bline11startintervall = 1; Bline11length = 3; 
Bline12startintervall = 0; Bline12length = 5; 
Bline13startintervall = 1; Bline13length = 3; 
Bline14startintervall = 2; Bline14length = 1; 
Bshapegloballength = 5;  } //(max length)

if (Bshapeform == 1) { // right angle triangle top
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 5; 
Bline11startintervall = 1; Bline11length = 4; 
Bline12startintervall = 2; Bline12length = 3; 
Bline13startintervall = 3; Bline13length = 2; 
Bline14startintervall = 4; Bline14length = 1; 
Bshapegloballength = 5;  } //(max length)


if (Bshapeform == 2) { // Square top
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 5; 
Bline11startintervall = 0; Bline11length = 5; 
Bline12startintervall = 0; Bline12length = 5; 
Bline13startintervall = 0; Bline13length = 5; 
Bline14startintervall = 0; Bline14length = 5; 
Bshapegloballength = 5;  } //(max length)

if (Bshapeform == 3) { // rectangle top
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 10; 
Bline11startintervall = 0; Bline11length = 10; 
Bline12startintervall = 0; Bline12length = 10; 
Bline13startintervall = 0; Bline13length = 10; 
Bline14startintervall = 0; Bline14length = 10; 
Bshapegloballength = 10;  } //(max length)


if (Bshapeform == 4) { // circle top
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 1; Bline10length = 3; 
Bline11startintervall = 0; Bline11length = 5; 
Bline12startintervall = 0; Bline12length = 5; 
Bline13startintervall = 0; Bline13length = 5; 
Bline14startintervall = 1; Bline14length = 3; 
Bshapegloballength = 5;  } //(max length)



//////middle


if (Bshapeform == 5) { // diamond middle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 2; Bline5length = 1; 
Bline6startintervall = 1; Bline6length = 3; 
Bline7startintervall = 0; Bline7length = 5; 
Bline8startintervall = 1; Bline8length = 3; 
Bline9startintervall = 2; Bline9length = 1; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)


if (Bshapeform == 6) { // right angle triangle middle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 5; 
Bline6startintervall = 1; Bline6length = 4; 
Bline7startintervall = 2; Bline7length = 3; 
Bline8startintervall = 3; Bline8length = 2; 
Bline9startintervall = 4; Bline9length = 1; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)


if (Bshapeform == 7) { // Square middle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 5; 
Bline6startintervall = 0; Bline6length = 5; 
Bline7startintervall = 0; Bline7length = 5; 
Bline8startintervall = 0; Bline8length = 5; 
Bline9startintervall = 0; Bline9length = 5; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)

if (Bshapeform == 8) { // rectangle middle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 10; 
Bline6startintervall = 0; Bline6length = 10; 
Bline7startintervall = 0; Bline7length = 10; 
Bline8startintervall = 0; Bline8length = 10; 
Bline9startintervall = 0; Bline9length = 10; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 10;  } //(max length)


if (Bshapeform == 9) { // circle middle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 1; Bline5length = 3; 
Bline6startintervall = 0; Bline6length = 5; 
Bline7startintervall = 0; Bline7length = 5; 
Bline8startintervall = 0; Bline8length = 5; 
Bline9startintervall = 1; Bline9length = 3; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)

/////bottom


if (Bshapeform == 10) { // diamond bottom
  
Bline0startintervall = 2; Bline0length = 1; 
Bline1startintervall = 1; Bline1length = 3; 
Bline2startintervall = 0; Bline2length = 5; 
Bline3startintervall = 1; Bline3length = 3; 
Bline4startintervall = 2; Bline4length = 1; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)


if (Bshapeform == 11) { // right angle triangle bottom
  
Bline0startintervall = 0; Bline0length = 5; 
Bline1startintervall = 1; Bline1length = 4; 
Bline2startintervall = 2; Bline2length = 3; 
Bline3startintervall = 3; Bline3length = 2; 
Bline4startintervall = 4; Bline4length = 1; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)


if (Bshapeform == 12) { // Square bottom
  
Bline0startintervall = 0; Bline0length = 5; 
Bline1startintervall = 0; Bline1length = 5; 
Bline2startintervall = 0; Bline2length = 5; 
Bline3startintervall = 0; Bline3length = 5; 
Bline4startintervall = 0; Bline4length = 5; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)

if (Bshapeform == 13) { // rectangle bottom
  
Bline0startintervall = 0; Bline0length = 10; 
Bline1startintervall = 0; Bline1length = 10; 
Bline2startintervall = 0; Bline2length = 10; 
Bline3startintervall = 0; Bline3length = 10; 
Bline4startintervall = 0; Bline4length = 10; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 10;  } //(max length)


if (Bshapeform == 14) { // circle bottom
  
Bline0startintervall = 1; Bline0length = 3; 
Bline1startintervall = 0; Bline1length = 5; 
Bline2startintervall = 0; Bline2length = 5; 
Bline3startintervall = 0; Bline3length = 5; 
Bline4startintervall = 1; Bline4length = 3; 

Bline5startintervall = 1; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 1; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 5;  } //(max length)


if (Bshapeform == 15) { // top parralellogram
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 
Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 
Bline10startintervall = 0; Bline10length = 2; 
Bline11startintervall = 1; Bline11length = 2; 
Bline12startintervall = 2; Bline12length = 2; 
Bline13startintervall = 3; Bline13length = 2; 
Bline14startintervall = 4; Bline14length = 2; 
Bshapegloballength = 6;  } //(max length)

if (Bshapeform == 16) { // mid parralellogram
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 2; 
Bline6startintervall = 1; Bline6length = 2; 
Bline7startintervall = 2; Bline7length = 2; 
Bline8startintervall = 3; Bline8length = 2; 
Bline9startintervall = 4; Bline9length = 2; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 6;  } //(max length)

if (Bshapeform == 17) { // btm parralellogram
  
Bline0startintervall = 0; Bline0length = 2; 
Bline1startintervall = 1; Bline1length = 2; 
Bline2startintervall = 2; Bline2length = 2; 
Bline3startintervall = 3; Bline3length = 2; 
Bline4startintervall = 4; Bline4length = 2; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 6;  } //(max length)

if (Bshapeform == 18) { // top rhobmus
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 11; 
Bline11startintervall = 1; Bline11length = 9; 
Bline12startintervall = 2; Bline12length = 7; 
Bline13startintervall = 3; Bline13length = 5; 
Bline14startintervall = 4; Bline14length = 3; 
Bshapegloballength = 11;  } //(max length)

if (Bshapeform == 19) { // mid rhobmus
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 11; 
Bline6startintervall = 1; Bline6length = 8; 
Bline7startintervall = 2; Bline7length = 7; 
Bline8startintervall = 3; Bline8length = 5; 
Bline9startintervall = 4; Bline9length = 3; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 11;  } //(max length)

if (Bshapeform == 20) { // bottom rhobmus
  
Bline0startintervall = 0; Bline0length = 11; 
Bline1startintervall = 1; Bline1length = 9; 
Bline2startintervall = 2; Bline2length = 7; 
Bline3startintervall = 3; Bline3length = 5; 
Bline4startintervall = 4; Bline4length = 3; 

Bline5startintervall = 0; Bline5length = 0; 
Bline6startintervall = 0; Bline6length = 0; 
Bline7startintervall = 0; Bline7length = 0; 
Bline8startintervall = 0; Bline8length = 0; 
Bline9startintervall = 0; Bline9length = 0; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 11;  } //(max length)

////////////////////////////// top 2 thirds

if (Bshapeform == 21) { // top 2 thirds right angle triangle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 10; 
Bline6startintervall = 1; Bline6length = 9; 
Bline7startintervall = 2; Bline7length = 8; 
Bline8startintervall = 3; Bline8length = 7; 
Bline9startintervall = 4; Bline9length = 6; 

Bline10startintervall = 5; Bline10length = 5; 
Bline11startintervall = 6; Bline11length = 4; 
Bline12startintervall = 7; Bline12length = 3; 
Bline13startintervall = 8; Bline13length = 2; 
Bline14startintervall = 9; Bline14length = 1; 
Bshapegloballength = 10;  } //(max length)

if (Bshapeform == 22) { //  top 2 thirds square
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 10; 
Bline6startintervall = 0; Bline6length = 10; 
Bline7startintervall = 0; Bline7length = 10; 
Bline8startintervall = 0; Bline8length = 10; 
Bline9startintervall = 0; Bline9length = 10; 

Bline10startintervall = 0; Bline10length = 10; 
Bline11startintervall = 0; Bline11length = 10; 
Bline12startintervall = 0; Bline12length = 10; 
Bline13startintervall = 0; Bline13length = 10; 
Bline14startintervall = 0; Bline14length = 10; 
Bshapegloballength = 10;  } //(max length)


if (Bshapeform == 23) { // top 2 thirds normal triangle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 19; 
Bline6startintervall = 1; Bline6length = 17; 
Bline7startintervall = 2; Bline7length = 15; 
Bline8startintervall = 3; Bline8length = 13; 
Bline9startintervall = 4; Bline9length = 11; 

Bline10startintervall = 5; Bline10length = 9; 
Bline11startintervall = 6; Bline11length = 7; 
Bline12startintervall = 7; Bline12length = 5; 
Bline13startintervall = 8; Bline13length = 3; 
Bline14startintervall = 9; Bline14length = 1; 
Bshapegloballength = 19;  } //(max length)


if (Bshapeform == 24) { // top 2 thirds rectangle
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 20; 
Bline6startintervall = 0; Bline6length = 20; 
Bline7startintervall = 0; Bline7length = 20; 
Bline8startintervall = 0; Bline8length = 20; 
Bline9startintervall = 0; Bline9length = 20; 

Bline10startintervall = 0; Bline10length = 20; 
Bline11startintervall = 0; Bline11length = 20; 
Bline12startintervall = 0; Bline12length = 20; 
Bline13startintervall = 0; Bline13length = 20; 
Bline14startintervall = 0; Bline14length = 20; 
Bshapegloballength = 20;  } //(max length)

if (Bshapeform == 25) { // top 2 thirds parralellogram
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 0; Bline4length = 0; 

Bline5startintervall = 0; Bline5length = 4; 
Bline6startintervall = 1; Bline6length = 4; 
Bline7startintervall = 2; Bline7length = 4; 
Bline8startintervall = 3; Bline8length = 4; 
Bline9startintervall = 4; Bline9length = 4; 

Bline10startintervall = 5; Bline10length = 4; 
Bline11startintervall = 6; Bline11length = 4; 
Bline12startintervall = 7; Bline12length = 4; 
Bline13startintervall = 8; Bline13length = 4; 
Bline14startintervall = 9; Bline14length = 4; 
Bshapegloballength = 13;  } //(max length)


//bottom 2 thirds

if (Bshapeform == 26) { // bottom 2 thirds right angle triangle
  
Bline0startintervall = 0; Bline0length = 10; 
Bline1startintervall = 1; Bline1length = 9; 
Bline2startintervall = 2; Bline2length = 8; 
Bline3startintervall = 3; Bline3length = 7; 
Bline4startintervall = 4; Bline4length = 6; 

Bline5startintervall = 5; Bline5length = 5; 
Bline6startintervall = 6; Bline6length = 4; 
Bline7startintervall = 7; Bline7length = 3; 
Bline8startintervall = 8; Bline8length = 2; 
Bline9startintervall = 9; Bline9length = 1; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 10;  } //(max length)


if (Bshapeform == 27) { //  bottom 2 thirds square
  
Bline0startintervall = 0; Bline0length = 10; 
Bline1startintervall = 0; Bline1length = 10; 
Bline2startintervall = 0; Bline2length = 10; 
Bline3startintervall = 0; Bline3length = 10; 
Bline4startintervall = 0; Bline4length = 10; 

Bline5startintervall = 0; Bline5length = 10; 
Bline6startintervall = 0; Bline6length = 10; 
Bline7startintervall = 0; Bline7length = 10; 
Bline8startintervall = 0; Bline8length = 10; 
Bline9startintervall = 0; Bline9length = 10; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 10;  } //(max length)


if (Bshapeform == 28) { // bottom 2 thirds normal triangle
  
Bline0startintervall = 0; Bline0length = 19; 
Bline1startintervall = 1; Bline1length = 17; 
Bline2startintervall = 2; Bline2length = 15; 
Bline3startintervall = 3; Bline3length = 13; 
Bline4startintervall = 4; Bline4length = 11; 

Bline5startintervall = 5; Bline5length = 9; 
Bline6startintervall = 6; Bline6length = 7; 
Bline7startintervall = 7; Bline7length = 5; 
Bline8startintervall = 8; Bline8length = 3; 
Bline9startintervall = 9; Bline9length = 1; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 19;  } //(max length)

if (Bshapeform == 29) { // bottom 2 thirds rectangle
  
Bline0startintervall = 0; Bline0length = 20; 
Bline1startintervall = 0; Bline1length = 20; 
Bline2startintervall = 0; Bline2length = 20; 
Bline3startintervall = 0; Bline3length = 20; 
Bline4startintervall = 0; Bline4length = 20; 

Bline5startintervall = 0; Bline5length = 20; 
Bline6startintervall = 0; Bline6length = 20; 
Bline7startintervall = 0; Bline7length = 20; 
Bline8startintervall = 0; Bline8length = 20; 
Bline9startintervall = 0; Bline9length = 20; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 20;  } //(max length)


if (Bshapeform == 30) { // top 2 thirds parralellogram
  
Bline0startintervall = 0; Bline0length = 4; 
Bline1startintervall = 1; Bline1length = 4; 
Bline2startintervall = 2; Bline2length = 4; 
Bline3startintervall = 3; Bline3length = 4; 
Bline4startintervall = 4; Bline4length = 4; 

Bline5startintervall = 5; Bline5length = 4; 
Bline6startintervall = 6; Bline6length = 4; 
Bline7startintervall = 7; Bline7length = 4; 
Bline8startintervall = 8; Bline8length = 4; 
Bline9startintervall = 9; Bline9length = 4; 

Bline10startintervall = 0; Bline10length = 0; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 13;  } //(max length)

if (Bshapeform == 31) { // bottom 2 thirds diamond
  
Bline0startintervall = 5; Bline0length = 1; 
Bline1startintervall = 4; Bline1length = 3; 
Bline2startintervall = 3; Bline2length = 5; 
Bline3startintervall = 2; Bline3length = 7; 
Bline4startintervall = 1; Bline4length = 9; 

Bline5startintervall = 0; Bline5length = 11; 
Bline6startintervall = 1; Bline6length = 9; 
Bline7startintervall = 2; Bline7length = 7; 
Bline8startintervall = 3; Bline8length = 5; 
Bline9startintervall = 4; Bline9length = 3; 

Bline10startintervall = 5; Bline10length = 1; 
Bline11startintervall = 0; Bline11length = 0; 
Bline12startintervall = 0; Bline12length = 0; 
Bline13startintervall = 0; Bline13length = 0; 
Bline14startintervall = 0; Bline14length = 0; 
Bshapegloballength = 11;  } //(max length)

if (Bshapeform == 32) { // top 2 thirds diamond
  
Bline0startintervall = 0; Bline0length = 0; 
Bline1startintervall = 0; Bline1length = 0; 
Bline2startintervall = 0; Bline2length = 0; 
Bline3startintervall = 0; Bline3length = 0; 
Bline4startintervall = 5; Bline4length = 1; 

Bline5startintervall = 4; Bline5length = 3; 
Bline6startintervall = 3; Bline6length = 5; 
Bline7startintervall = 2; Bline7length = 7; 
Bline8startintervall = 1; Bline8length = 9; 
Bline9startintervall = 0; Bline9length = 11; 

Bline10startintervall = 1; Bline10length = 9; 
Bline11startintervall = 2; Bline11length = 7; 
Bline12startintervall = 3; Bline12length = 5; 
Bline13startintervall = 4; Bline13length = 3; 
Bline14startintervall = 5; Bline14length = 1; 
Bshapegloballength = 11;  } //(max length)




if (shapeglobalidx > Bgap){  Bshapeglobalidx = 0; Bshapehue = random (0,255); Bshapesat = random (180,255); if (Bshapeform <= 20 &&  Cshapeglobalgate != 1) { Cgap = random (Bgap+11,Bgap+21); Cshapeglobalgate = 0;} Bshapeglobalgate = 1;} }



//////////shape C
if (Cshapeglobalgate == 0) { 
  

Cshapeform = random(0,21);


if (Cshapeform == 0) { // diamond top
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 2; Cline10length = 1; 
Cline11startintervall = 1; Cline11length = 3; 
Cline12startintervall = 0; Cline12length = 5; 
Cline13startintervall = 1; Cline13length = 3; 
Cline14startintervall = 2; Cline14length = 1; 
Cshapegloballength = 5;  } //(max length)

if (Cshapeform == 1) { // right angle triangle top
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 5; 
Cline11startintervall = 1; Cline11length = 4; 
Cline12startintervall = 2; Cline12length = 3; 
Cline13startintervall = 3; Cline13length = 2; 
Cline14startintervall = 4; Cline14length = 1; 
Cshapegloballength = 5;  } //(max length)


if (Cshapeform == 2) { // Square top
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 5; 
Cline11startintervall = 0; Cline11length = 5; 
Cline12startintervall = 0; Cline12length = 5; 
Cline13startintervall = 0; Cline13length = 5; 
Cline14startintervall = 0; Cline14length = 5; 
Cshapegloballength = 5;  } //(max length)

if (Cshapeform == 3) { // rectangle top
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 10; 
Cline11startintervall = 0; Cline11length = 10; 
Cline12startintervall = 0; Cline12length = 10; 
Cline13startintervall = 0; Cline13length = 10; 
Cline14startintervall = 0; Cline14length = 10; 
Cshapegloballength = 10;  } //(max length)


if (Cshapeform == 4) { // circle top
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 1; Cline10length = 3; 
Cline11startintervall = 0; Cline11length = 5; 
Cline12startintervall = 0; Cline12length = 5; 
Cline13startintervall = 0; Cline13length = 5; 
Cline14startintervall = 1; Cline14length = 3; 
Cshapegloballength = 5;  } //(max length)



//////middle


if (Cshapeform == 5) { // diamond middle
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 2; Cline5length = 1; 
Cline6startintervall = 1; Cline6length = 3; 
Cline7startintervall = 0; Cline7length = 5; 
Cline8startintervall = 1; Cline8length = 3; 
Cline9startintervall = 2; Cline9length = 1; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)


if (Cshapeform == 6) { // right angle triangle middle
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 5; 
Cline6startintervall = 1; Cline6length = 4; 
Cline7startintervall = 2; Cline7length = 3; 
Cline8startintervall = 3; Cline8length = 2; 
Cline9startintervall = 4; Cline9length = 1; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)


if (Cshapeform == 7) { // Square middle
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 5; 
Cline6startintervall = 0; Cline6length = 5; 
Cline7startintervall = 0; Cline7length = 5; 
Cline8startintervall = 0; Cline8length = 5; 
Cline9startintervall = 0; Cline9length = 5; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)

if (Cshapeform == 8) { // rectangle middle
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 10; 
Cline6startintervall = 0; Cline6length = 10; 
Cline7startintervall = 0; Cline7length = 10; 
Cline8startintervall = 0; Cline8length = 10; 
Cline9startintervall = 0; Cline9length = 10; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 10;  } //(max length)


if (Cshapeform == 9) { // circle middle
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 1; Cline5length = 3; 
Cline6startintervall = 0; Cline6length = 5; 
Cline7startintervall = 0; Cline7length = 5; 
Cline8startintervall = 0; Cline8length = 5; 
Cline9startintervall = 1; Cline9length = 3; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)

/////bottom


if (Cshapeform == 10) { // diamond bottom
  
Cline0startintervall = 2; Cline0length = 1; 
Cline1startintervall = 1; Cline1length = 3; 
Cline2startintervall = 0; Cline2length = 5; 
Cline3startintervall = 1; Cline3length = 3; 
Cline4startintervall = 2; Cline4length = 1; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)


if (Cshapeform == 11) { // right angle triangle bottom
  
Cline0startintervall = 0; Cline0length = 5; 
Cline1startintervall = 1; Cline1length = 4; 
Cline2startintervall = 2; Cline2length = 3; 
Cline3startintervall = 3; Cline3length = 2; 
Cline4startintervall = 4; Cline4length = 1; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)


if (Cshapeform == 12) { // Square bottom
  
Cline0startintervall = 0; Cline0length = 5; 
Cline1startintervall = 0; Cline1length = 5; 
Cline2startintervall = 0; Cline2length = 5; 
Cline3startintervall = 0; Cline3length = 5; 
Cline4startintervall = 0; Cline4length = 5; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)

if (Cshapeform == 13) { // rectangle bottom
  
Cline0startintervall = 0; Cline0length = 10; 
Cline1startintervall = 0; Cline1length = 10; 
Cline2startintervall = 0; Cline2length = 10; 
Cline3startintervall = 0; Cline3length = 10; 
Cline4startintervall = 0; Cline4length = 10; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 10;  } //(max length)


if (Cshapeform == 14) { // circle bottom
  
Cline0startintervall = 1; Cline0length = 3; 
Cline1startintervall = 0; Cline1length = 5; 
Cline2startintervall = 0; Cline2length = 5; 
Cline3startintervall = 0; Cline3length = 5; 
Cline4startintervall = 1; Cline4length = 3; 

Cline5startintervall = 1; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 1; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 5;  } //(max length)

if (Cshapeform == 15) { // top parralellogram
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 
Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 
Cline10startintervall = 0; Cline10length = 2; 
Cline11startintervall = 1; Cline11length = 2; 
Cline12startintervall = 2; Cline12length = 2; 
Cline13startintervall = 3; Cline13length = 2; 
Cline14startintervall = 4; Cline14length = 2; 
Cshapegloballength = 6;  } //(max length)

if (Cshapeform == 16) { // mid parralellogram
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 2; 
Cline6startintervall = 1; Cline6length = 2; 
Cline7startintervall = 2; Cline7length = 2; 
Cline8startintervall = 3; Cline8length = 2; 
Cline9startintervall = 4; Cline9length = 2; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 6;  } //(max length)

if (Cshapeform == 17) { // btm parralellogram
  
Cline0startintervall = 0; Cline0length = 2; 
Cline1startintervall = 1; Cline1length = 2; 
Cline2startintervall = 2; Cline2length = 2; 
Cline3startintervall = 3; Cline3length = 2; 
Cline4startintervall = 4; Cline4length = 2; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 6;  } //(max length)

if (Cshapeform == 18) { // top rhobmus
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 11; 
Cline11startintervall = 1; Cline11length = 9; 
Cline12startintervall = 2; Cline12length = 7; 
Cline13startintervall = 3; Cline13length = 5; 
Cline14startintervall = 4; Cline14length = 3; 
Cshapegloballength = 11;  } //(max length)

if (Cshapeform == 19) { // mid rhobmus
  
Cline0startintervall = 0; Cline0length = 0; 
Cline1startintervall = 0; Cline1length = 0; 
Cline2startintervall = 0; Cline2length = 0; 
Cline3startintervall = 0; Cline3length = 0; 
Cline4startintervall = 0; Cline4length = 0; 

Cline5startintervall = 0; Cline5length = 11; 
Cline6startintervall = 1; Cline6length = 8; 
Cline7startintervall = 2; Cline7length = 7; 
Cline8startintervall = 3; Cline8length = 5; 
Cline9startintervall = 4; Cline9length = 3; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 11;  } //(max length)

if (Cshapeform == 20) { // bottom rhobmus
  
Cline0startintervall = 0; Cline0length = 11; 
Cline1startintervall = 1; Cline1length = 9; 
Cline2startintervall = 2; Cline2length = 7; 
Cline3startintervall = 3; Cline3length = 5; 
Cline4startintervall = 4; Cline4length = 3; 

Cline5startintervall = 0; Cline5length = 0; 
Cline6startintervall = 0; Cline6length = 0; 
Cline7startintervall = 0; Cline7length = 0; 
Cline8startintervall = 0; Cline8length = 0; 
Cline9startintervall = 0; Cline9length = 0; 

Cline10startintervall = 0; Cline10length = 0; 
Cline11startintervall = 0; Cline11length = 0; 
Cline12startintervall = 0; Cline12length = 0; 
Cline13startintervall = 0; Cline13length = 0; 
Cline14startintervall = 0; Cline14length = 0; 
Cshapegloballength = 11;  } //(max length)


if (shapeglobalidx > Cgap){  Cshapeglobalidx = 0; Cshapehue = random (0,255); Cshapesat = random (170,255); Cshapeglobalgate = 1;} }

//Shape A
if (shapeglobalgate == 1) {
if (shapeglobaltimer > allhlinespd) {  shapeglobalidx++; shapeglobaltimer = 0;}



//here the line length is used to choose whether each line moves or not. if no length, no move. 
//also the first line is used as a spawn line, because this way of coding is shit and everything needs to live somewhere on the physical matrix (as far as i know)

if (line0length > 0){if  (shapeglobalidx <=  line0startintervall) {  allhline0idx = 0;}      else { allhline0idx = shapeglobalidx - line0startintervall; } }
if (line1length > 0){if  (shapeglobalidx <=  line1startintervall) {  allhline1idx = 0;}      else { allhline1idx = shapeglobalidx - line1startintervall; } }
if (line2length > 0){if  (shapeglobalidx <=  line2startintervall) {  allhline2idx = 0;}      else { allhline2idx = shapeglobalidx - line2startintervall; } }
if (line3length > 0){if  (shapeglobalidx <=  line3startintervall) {  allhline3idx = 0;}      else { allhline3idx = shapeglobalidx - line3startintervall; } }
if (line4length > 0){if  (shapeglobalidx <=  line4startintervall) {  allhline4idx = 0;}      else { allhline4idx = shapeglobalidx - line4startintervall; } }
if (line5length > 0){if  (shapeglobalidx <=  line5startintervall) {  allhline5idx = 0;}      else { allhline5idx = shapeglobalidx - line5startintervall; } }
if (line6length > 0){if  (shapeglobalidx <=  line6startintervall) {  allhline6idx = 0;}      else { allhline6idx = shapeglobalidx - line6startintervall; } }
if (line7length > 0){if  (shapeglobalidx <=  line7startintervall) {  allhline7idx = 0;}      else { allhline7idx = shapeglobalidx - line7startintervall; } }
if (line8length > 0){if  (shapeglobalidx <=  line8startintervall) {  allhline8idx = 0;}      else { allhline8idx = shapeglobalidx - line8startintervall; } }
if (line9length > 0){if  (shapeglobalidx <=  line9startintervall) {  allhline9idx = 0;}      else { allhline9idx = shapeglobalidx - line9startintervall; } }
if (line10length > 0){if  (shapeglobalidx <=  line10startintervall) {  allhline10idx = 0;}      else { allhline10idx = shapeglobalidx - line10startintervall; } }
if (line11length > 0){if  (shapeglobalidx <=  line11startintervall) {  allhline11idx = 0;}      else { allhline11idx = shapeglobalidx - line11startintervall; } }
if (line12length > 0){if  (shapeglobalidx <=  line12startintervall) {  allhline12idx = 0;}      else { allhline12idx = shapeglobalidx - line12startintervall; } }
if (line13length > 0){if  (shapeglobalidx <=  line13startintervall) {  allhline13idx = 0;}      else { allhline13idx = shapeglobalidx - line13startintervall; } }
if (line14length > 0){if  (shapeglobalidx <=  line14startintervall) {  allhline14idx = 0;}      else { allhline14idx = shapeglobalidx - line14startintervall; } }


//here defines when the off pixel comes on each line
 if (shapeglobalidx- line0length  <= 0) {line0offidx = 0; } else {line0offidx = allhline0idx - line0length;} 
 if (shapeglobalidx- line1length  <= 0) {line1offidx = 0; } else {line1offidx = allhline1idx - line1length;}  
 if (shapeglobalidx- line2length  <= 0) {line2offidx = 0; } else {line2offidx = allhline2idx - line2length;} 
 if (shapeglobalidx- line3length  <= 0) {line3offidx = 0; } else {line3offidx = allhline3idx - line3length;} 
 if (shapeglobalidx- line4length  <= 0) {line4offidx = 0; } else {line4offidx = allhline4idx - line4length;} 
 if (shapeglobalidx- line5length  <= 0) {line5offidx = 0; } else {line5offidx = allhline5idx - line5length;} 
 if (shapeglobalidx- line6length  <= 0) {line6offidx = 0; } else {line6offidx = allhline6idx - line6length;} 
 if (shapeglobalidx- line7length  <= 0) {line7offidx = 0; } else {line7offidx = allhline7idx - line7length;} 
 if (shapeglobalidx- line8length  <= 0) {line8offidx = 0; } else {line8offidx = allhline8idx - line8length;} 
 if (shapeglobalidx- line9length  <= 0) {line9offidx = 0; } else {line9offidx = allhline9idx - line9length;} 
 if (shapeglobalidx- line10length  <= 0) {line10offidx = 0; } else {line10offidx = allhline10idx - line10length;} 
 if (shapeglobalidx- line11length  <= 0) {line11offidx = 0; } else {line11offidx = allhline11idx - line11length;} 
 if (shapeglobalidx- line12length  <= 0) {line12offidx = 0; } else {line12offidx = allhline12idx - line12length;} 
 if (shapeglobalidx- line13length  <= 0) {line13offidx = 0; } else {line13offidx = allhline13idx - line13length;} 
 if (shapeglobalidx- line14length  <= 0) {line14offidx = 0; } else {line14offidx = allhline14idx - line14length;} 

//when it gets to the end theres a blank end line for it to sit in to fix the same spawn line problem as above.
if (allhline0idx >= 49) {allhline0idx = 49; shapeval0 = 0;}
if (allhline1idx >= 49) {allhline1idx = 49; shapeval1 = 0;}
if (allhline2idx >= 49) {allhline2idx = 49; shapeval2 = 0;}
if (allhline3idx >= 49) {allhline3idx = 49; shapeval3 = 0;}
if (allhline4idx >= 49) {allhline4idx = 49; shapeval4 = 0;}
if (allhline5idx >= 49) {allhline5idx = 49; shapeval5 = 0;}
if (allhline6idx >= 49) {allhline6idx = 49; shapeval6 = 0;}
if (allhline7idx >= 49) {allhline7idx = 49; shapeval7 = 0;}
if (allhline8idx >= 49) {allhline8idx = 49; shapeval8 = 0;}
if (allhline9idx >= 49) {allhline9idx = 49; shapeval9 = 0;}
if (allhline10idx >= 49) {allhline10idx = 49; shapeval10 = 0;}
if (allhline11idx >= 49) {allhline11idx = 49; shapeval11 = 0;}
if (allhline12idx >= 49) {allhline12idx = 49; shapeval12 = 0;}
if (allhline13idx >= 49) {allhline13idx = 49; shapeval13 = 0;}
if (allhline14idx >= 49) {allhline14idx = 49; shapeval14 = 0;}

//same as above but for the off line
if (line0offidx >=49) {line0offidx = 49;}
if (line1offidx >=49) {line1offidx = 49;}
if (line2offidx >=49) {line2offidx = 49;}
if (line3offidx >=49) {line3offidx = 49;}
if (line4offidx >=49) {line4offidx = 49;}
if (line5offidx >=49) {line5offidx = 49;}
if (line6offidx >=49) {line6offidx = 49;}
if (line7offidx >=49) {line7offidx = 49;}
if (line8offidx >=49) {line8offidx = 49;}
if (line9offidx >=49) {line9offidx = 49;}
if (line10offidx >=49) {line10offidx = 49;}
if (line11offidx >=49) {line11offidx = 49;}
if (line12offidx >=49) {line12offidx = 49;}
if (line13offidx >=49) {line13offidx = 49;}
if (line14offidx >=49) {line14offidx = 49;}

 //as above shows only if it's moving
if (allhline0idx > 0){ leds [allhline0[allhline0idx]] = CHSV (shapehue0, shapesat, shapeval0); leds [allhline0[line0offidx]] = CHSV (shapehue, shapesat, 0); } 
if (allhline1idx > 0){ leds [allhline1[allhline1idx]] = CHSV (shapehue1, shapesat, shapeval1); leds [allhline1[line1offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline2idx > 0){ leds [allhline2[allhline2idx]] = CHSV (shapehue2, shapesat, shapeval2); leds [allhline2[line2offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline3idx > 0){ leds [allhline3[allhline3idx]] = CHSV (shapehue3, shapesat, shapeval3); leds [allhline3[line3offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline4idx > 0){ leds [allhline4[allhline4idx]] = CHSV (shapehue4, shapesat, shapeval4); leds [allhline4[line4offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline5idx > 0){ leds [allhline5[allhline5idx]] = CHSV (shapehue5, shapesat, shapeval5); leds [allhline5[line5offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline6idx > 0){ leds [allhline6[allhline6idx]] = CHSV (shapehue6, shapesat, shapeval6); leds [allhline6[line6offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline7idx > 0){ leds [allhline7[allhline7idx]] = CHSV (shapehue7, shapesat, shapeval7); leds [allhline7[line7offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline8idx > 0){ leds [allhline8[allhline8idx]] = CHSV (shapehue8, shapesat, shapeval8); leds [allhline8[line8offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline9idx > 0){ leds [allhline9[allhline9idx]] = CHSV (shapehue9, shapesat, shapeval9); leds [allhline9[line9offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline10idx > 0){ leds [allhline10[allhline10idx]] = CHSV (shapehue10, shapesat, shapeval10); leds [allhline10[line10offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline11idx > 0){ leds [allhline11[allhline11idx]] = CHSV (shapehue11, shapesat, shapeval11); leds [allhline11[line11offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline12idx > 0){ leds [allhline12[allhline12idx]] = CHSV (shapehue12, shapesat, shapeval12); leds [allhline12[line12offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline13idx > 0){ leds [allhline13[allhline13idx]] = CHSV (shapehue13, shapesat, shapeval13); leds [allhline13[line13offidx]] = CHSV (shapehue, shapesat, 0); }
if (allhline14idx > 0){ leds [allhline14[allhline14idx]] = CHSV (shapehue14, shapesat, shapeval14); leds [allhline14[line14offidx]] = CHSV (shapehue, shapesat, 0); }

//resets everything -------neeeds to be changed when you add more shapes
if (shapeglobalidx - shapegloballength >= 49) { 

  allhline0idx = 0; line0startintervall = 0; line0length = 0; line0offidx = 0; shapeval0 = universalshapebrightness;
  allhline1idx = 0; line1startintervall = 0; line1length = 0; line1offidx = 0; shapeval1 = universalshapebrightness;
  allhline2idx = 0; line2startintervall = 0; line2length = 0; line2offidx = 0; shapeval2 = universalshapebrightness;
  allhline3idx = 0; line3startintervall = 0; line3length = 0; line3offidx = 0; shapeval3 = universalshapebrightness;
  allhline4idx = 0; line4startintervall = 0; line4length = 0; line4offidx = 0; shapeval4 = universalshapebrightness;
  allhline5idx = 0; line5startintervall = 0; line5length = 0; line5offidx = 0; shapeval5 = universalshapebrightness;
  allhline6idx = 0; line6startintervall = 0; line6length = 0; line6offidx = 0; shapeval6 = universalshapebrightness;
  allhline7idx = 0; line7startintervall = 0; line7length = 0; line7offidx = 0; shapeval7 = universalshapebrightness;
  allhline8idx = 0; line8startintervall = 0; line8length = 0; line8offidx = 0; shapeval8 = universalshapebrightness;
  allhline9idx = 0; line9startintervall = 0; line9length = 0; line9offidx = 0; shapeval9 = universalshapebrightness;
  allhline10idx = 0; line10startintervall = 0; line10length = 0; line10offidx = 0; shapeval10 = universalshapebrightness;
  allhline11idx = 0; line11startintervall = 0; line11length = 0; line11offidx = 0; shapeval11 = universalshapebrightness;
  allhline12idx = 0; line12startintervall = 0; line12length = 0; line12offidx = 0; shapeval12 = universalshapebrightness;
  allhline13idx = 0; line13startintervall = 0; line13length = 0; line13offidx = 0; shapeval13 = universalshapebrightness;
  allhline14idx = 0; line14startintervall = 0; line14length = 0; line14offidx = 0; shapeval14 = universalshapebrightness;
  
  shapeglobalidx = 0; shapeglobaltimer = 0; shapegloballength = 0; shapeglobalgate = 0;

  }

}

//////////////////////////////////////////////////////////Shape B

if (Bshapeglobalgate == 1) {
if (Bshapeglobaltimer > allhlinespd) { Bshapeglobalidx++; Bshapeglobaltimer = 0;}


//here the line length is used to choose whether each line moves or not. if no length, no move. 
//also the first line is used as a spawn line, because this way of coding is shit and everything needs to live somewhere on the physical matrix (as far as i know)

if (Bline0length > 0){if  (Bshapeglobalidx <=   Bline0startintervall) {  Ballhline0idx = 0;}      else { Ballhline0idx = Bshapeglobalidx -  Bline0startintervall; } }
if (Bline1length > 0){if  (Bshapeglobalidx <=   Bline1startintervall) {  Ballhline1idx = 0;}      else { Ballhline1idx = Bshapeglobalidx -  Bline1startintervall; } }
if (Bline2length > 0){if  (Bshapeglobalidx <=   Bline2startintervall) {  Ballhline2idx = 0;}      else { Ballhline2idx = Bshapeglobalidx -  Bline2startintervall; } }
if (Bline3length > 0){if  (Bshapeglobalidx <=   Bline3startintervall) {  Ballhline3idx = 0;}      else { Ballhline3idx = Bshapeglobalidx -  Bline3startintervall; } }
if (Bline4length > 0){if  (Bshapeglobalidx <=   Bline4startintervall) {  Ballhline4idx = 0;}      else { Ballhline4idx = Bshapeglobalidx -  Bline4startintervall; } }
if (Bline5length > 0){if  (Bshapeglobalidx <=   Bline5startintervall) {  Ballhline5idx = 0;}      else { Ballhline5idx = Bshapeglobalidx -  Bline5startintervall; } }
if (Bline6length > 0){if  (Bshapeglobalidx <=   Bline6startintervall) {  Ballhline6idx = 0;}      else { Ballhline6idx = Bshapeglobalidx -  Bline6startintervall; } }
if (Bline7length > 0){if  (Bshapeglobalidx <=   Bline7startintervall) {  Ballhline7idx = 0;}      else { Ballhline7idx = Bshapeglobalidx -  Bline7startintervall; } }
if (Bline8length > 0){if  (Bshapeglobalidx <=   Bline8startintervall) {  Ballhline8idx = 0;}      else { Ballhline8idx = Bshapeglobalidx -  Bline8startintervall; } }
if (Bline9length > 0){if  (Bshapeglobalidx <=   Bline9startintervall) {  Ballhline9idx = 0;}      else { Ballhline9idx = Bshapeglobalidx -  Bline9startintervall; } }
if (Bline10length > 0){if  (Bshapeglobalidx <=   Bline10startintervall) {  Ballhline10idx = 0;}      else { Ballhline10idx = Bshapeglobalidx -  Bline10startintervall; } }
if (Bline11length > 0){if  (Bshapeglobalidx <=   Bline11startintervall) {  Ballhline11idx = 0;}      else { Ballhline11idx = Bshapeglobalidx -  Bline11startintervall; } }
if (Bline12length > 0){if  (Bshapeglobalidx <=   Bline12startintervall) {  Ballhline12idx = 0;}      else { Ballhline12idx = Bshapeglobalidx -  Bline12startintervall; } }
if (Bline13length > 0){if  (Bshapeglobalidx <=   Bline13startintervall) {  Ballhline13idx = 0;}      else { Ballhline13idx = Bshapeglobalidx -  Bline13startintervall; } }
if (Bline14length > 0){if  (Bshapeglobalidx <=   Bline14startintervall) {  Ballhline14idx = 0;}      else { Ballhline14idx = Bshapeglobalidx -  Bline14startintervall; } }

//here defines when the off pixel comes on eachBline
 if (Bshapeglobalidx- Bline0length  <= 0) {Bline0offidx = 0; } else {Bline0offidx = Ballhline0idx - Bline0length;} 
 if (Bshapeglobalidx- Bline1length  <= 0) {Bline1offidx = 0; } else {Bline1offidx = Ballhline1idx - Bline1length;}  
 if (Bshapeglobalidx- Bline2length  <= 0) {Bline2offidx = 0; } else {Bline2offidx = Ballhline2idx - Bline2length;} 
 if (Bshapeglobalidx- Bline3length  <= 0) {Bline3offidx = 0; } else {Bline3offidx = Ballhline3idx - Bline3length;} 
 if (Bshapeglobalidx- Bline4length  <= 0) {Bline4offidx = 0; } else {Bline4offidx = Ballhline4idx - Bline4length;} 
 if (Bshapeglobalidx- Bline5length  <= 0) {Bline5offidx = 0; } else {Bline5offidx = Ballhline5idx - Bline5length;} 
 if (Bshapeglobalidx- Bline6length  <= 0) {Bline6offidx = 0; } else {Bline6offidx = Ballhline6idx - Bline6length;} 
 if (Bshapeglobalidx- Bline7length  <= 0) {Bline7offidx = 0; } else {Bline7offidx = Ballhline7idx - Bline7length;} 
 if (Bshapeglobalidx- Bline8length  <= 0) {Bline8offidx = 0; } else {Bline8offidx = Ballhline8idx - Bline8length;} 
 if (Bshapeglobalidx- Bline9length  <= 0) {Bline9offidx = 0; } else {Bline9offidx = Ballhline9idx - Bline9length;} 
 if (Bshapeglobalidx- Bline10length  <= 0) {Bline10offidx = 0; } else {Bline10offidx = Ballhline10idx - Bline10length;} 
 if (Bshapeglobalidx- Bline11length  <= 0) {Bline11offidx = 0; } else {Bline11offidx = Ballhline11idx - Bline11length;} 
 if (Bshapeglobalidx- Bline12length  <= 0) {Bline12offidx = 0; } else {Bline12offidx = Ballhline12idx - Bline12length;} 
 if (Bshapeglobalidx- Bline13length  <= 0) {Bline13offidx = 0; } else {Bline13offidx = Ballhline13idx - Bline13length;} 
 if (Bshapeglobalidx- Bline14length  <= 0) {Bline14offidx = 0; } else {Bline14offidx = Ballhline14idx - Bline14length;} 

//when it gets to the end theres a blank end line for it to sit in to fix the same spawn line problem as above.
if (Ballhline0idx >= 49) {Ballhline0idx = 49; Bshapeval0 = 0;}
if (Ballhline1idx >= 49) {Ballhline1idx = 49; Bshapeval1 = 0;}
if (Ballhline2idx >= 49) {Ballhline2idx = 49; Bshapeval2 = 0;}
if (Ballhline3idx >= 49) {Ballhline3idx = 49; Bshapeval3 = 0;}
if (Ballhline4idx >= 49) {Ballhline4idx = 49; Bshapeval4 = 0;}
if (Ballhline5idx >= 49) {Ballhline5idx = 49; Bshapeval5 = 0;}
if (Ballhline6idx >= 49) {Ballhline6idx = 49; Bshapeval6 = 0;}
if (Ballhline7idx >= 49) {Ballhline7idx = 49; Bshapeval7 = 0;}
if (Ballhline8idx >= 49) {Ballhline8idx = 49; Bshapeval8 = 0;}
if (Ballhline9idx >= 49) {Ballhline9idx = 49; Bshapeval9 = 0;}
if (Ballhline10idx >= 49) {Ballhline10idx = 49; Bshapeval10 = 0;}
if (Ballhline11idx >= 49) {Ballhline11idx = 49; Bshapeval11 = 0;}
if (Ballhline12idx >= 49) {Ballhline12idx = 49; Bshapeval12 = 0;}
if (Ballhline13idx >= 49) {Ballhline13idx = 49; Bshapeval13 = 0;}
if (Ballhline14idx >= 49) {Ballhline14idx = 49; Bshapeval14 = 0;}


//same as above but for the off Bline
if (Bline0offidx >=49) {Bline0offidx = 49;}
if (Bline1offidx >=49) {Bline1offidx = 49;}
if (Bline2offidx >=49) {Bline2offidx = 49;}
if (Bline3offidx >=49) {Bline3offidx = 49;}
if (Bline4offidx >=49) {Bline4offidx = 49;}
if (Bline5offidx >=49) {Bline5offidx = 49;}
if (Bline6offidx >=49) {Bline6offidx = 49;}
if (Bline7offidx >=49) {Bline7offidx = 49;}
if (Bline8offidx >=49) {Bline8offidx = 49;}
if (Bline9offidx >=49) {Bline9offidx = 49;}
if (Bline10offidx >=49) {Bline10offidx = 49;}
if (Bline11offidx >=49) {Bline11offidx = 49;}
if (Bline12offidx >=49) {Bline12offidx = 49;}
if (Bline13offidx >=49) {Bline13offidx = 49;}
if (Bline14offidx >=49) {Bline14offidx = 49;}

 //as above shows only if it's moving
if (Ballhline0idx > 0){ leds [allhline0[Ballhline0idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval0); leds [allhline0[Bline0offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline1idx > 0){ leds [allhline1[Ballhline1idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval1); leds [allhline1[Bline1offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline2idx > 0){ leds [allhline2[Ballhline2idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval2); leds [allhline2[Bline2offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline3idx > 0){ leds [allhline3[Ballhline3idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval3); leds [allhline3[Bline3offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline4idx > 0){ leds [allhline4[Ballhline4idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval4); leds [allhline4[Bline4offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline5idx > 0){ leds [allhline5[Ballhline5idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval5); leds [allhline5[Bline5offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline6idx > 0){ leds [allhline6[Ballhline6idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval6); leds [allhline6[Bline6offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline7idx > 0){ leds [allhline7[Ballhline7idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval7); leds [allhline7[Bline7offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline8idx > 0){ leds [allhline8[Ballhline8idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval8); leds [allhline8[Bline8offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline9idx > 0){ leds [allhline9[Ballhline9idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval9); leds [allhline9[Bline9offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline10idx > 0){ leds [allhline10[Ballhline10idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval10); leds [allhline10[Bline10offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline11idx > 0){ leds [allhline11[Ballhline11idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval11); leds [allhline11[Bline11offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline12idx > 0){ leds [allhline12[Ballhline12idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval12); leds [allhline12[Bline12offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline13idx > 0){ leds [allhline13[Ballhline13idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval13); leds [allhline13[Bline13offidx]] = CHSV (Bshapehue, Bshapesat, 0); }
if (Ballhline14idx > 0){ leds [allhline14[Ballhline14idx]] = CHSV (Bshapehue, Bshapesat, Bshapeval14); leds [allhline14[Bline14offidx]] = CHSV (Bshapehue, Bshapesat, 0); }

//resets everything -------neeeds to be changed when you add more Bshapes
if (Bshapeglobalidx - Bshapegloballength >= 49) { 

  Ballhline0idx = 0; Bline0startintervall = 0; Bline0length = 0; Bline0offidx = 0; Bshapeval0 = universalshapebrightness;
  Ballhline1idx = 0; Bline1startintervall = 0; Bline1length = 0; Bline1offidx = 0; Bshapeval1 = universalshapebrightness;
  Ballhline2idx = 0; Bline2startintervall = 0; Bline2length = 0; Bline2offidx = 0; Bshapeval2 = universalshapebrightness;
  Ballhline3idx = 0; Bline3startintervall = 0; Bline3length = 0; Bline3offidx = 0; Bshapeval3 = universalshapebrightness;
  Ballhline4idx = 0; Bline4startintervall = 0; Bline4length = 0; Bline4offidx = 0; Bshapeval4 = universalshapebrightness;
  Ballhline5idx = 0; Bline5startintervall = 0; Bline5length = 0; Bline5offidx = 0; Bshapeval5 = universalshapebrightness;
  Ballhline6idx = 0; Bline6startintervall = 0; Bline6length = 0; Bline6offidx = 0; Bshapeval6 = universalshapebrightness;
  Ballhline7idx = 0; Bline7startintervall = 0; Bline7length = 0; Bline7offidx = 0; Bshapeval7 = universalshapebrightness;
  Ballhline8idx = 0; Bline8startintervall = 0; Bline8length = 0; Bline8offidx = 0; Bshapeval8 = universalshapebrightness;
  Ballhline9idx = 0; Bline9startintervall = 0; Bline9length = 0; Bline9offidx = 0; Bshapeval9 = universalshapebrightness;
  Ballhline10idx = 0; Bline10startintervall = 0; Bline10length = 0; Bline10offidx = 0; Bshapeval10 = universalshapebrightness;
  Ballhline11idx = 0; Bline11startintervall = 0; Bline11length = 0; Bline11offidx = 0; Bshapeval11 = universalshapebrightness;
  Ballhline12idx = 0; Bline12startintervall = 0; Bline12length = 0; Bline12offidx = 0; Bshapeval12 = universalshapebrightness;
  Ballhline13idx = 0; Bline13startintervall = 0; Bline13length = 0; Bline13offidx = 0; Bshapeval13 = universalshapebrightness;
  Ballhline14idx = 0; Bline14startintervall = 0; Bline14length = 0; Bline14offidx = 0; Bshapeval14 = universalshapebrightness;
  
  Bshapeglobalidx = 0; Bshapeglobaltimer = 0; Bshapegloballength = 0; Bshapeglobalgate = 99;

  }

}


//////////////////////////////////////////////////////////Shape C

if (Cshapeglobalgate == 1) {
if (Cshapeglobaltimer > allhlinespd) { Cshapeglobalidx++; Cshapeglobaltimer = 0;}


//here the line length is used to choose whether each line moves or not. if no length, no move. 
//also the first line is used as a spawn line, because this way of coding is shit and everything needs to live somewhere on the physical matrix (as far as i know)

if (Cline0length > 0){if  (Cshapeglobalidx <=   Cline0startintervall) {  Callhline0idx = 0;}      else { Callhline0idx = Cshapeglobalidx -  Cline0startintervall; } }
if (Cline1length > 0){if  (Cshapeglobalidx <=   Cline1startintervall) {  Callhline1idx = 0;}      else { Callhline1idx = Cshapeglobalidx -  Cline1startintervall; } }
if (Cline2length > 0){if  (Cshapeglobalidx <=   Cline2startintervall) {  Callhline2idx = 0;}      else { Callhline2idx = Cshapeglobalidx -  Cline2startintervall; } }
if (Cline3length > 0){if  (Cshapeglobalidx <=   Cline3startintervall) {  Callhline3idx = 0;}      else { Callhline3idx = Cshapeglobalidx -  Cline3startintervall; } }
if (Cline4length > 0){if  (Cshapeglobalidx <=   Cline4startintervall) {  Callhline4idx = 0;}      else { Callhline4idx = Cshapeglobalidx -  Cline4startintervall; } }
if (Cline5length > 0){if  (Cshapeglobalidx <=   Cline5startintervall) {  Callhline5idx = 0;}      else { Callhline5idx = Cshapeglobalidx -  Cline5startintervall; } }
if (Cline6length > 0){if  (Cshapeglobalidx <=   Cline6startintervall) {  Callhline6idx = 0;}      else { Callhline6idx = Cshapeglobalidx -  Cline6startintervall; } }
if (Cline7length > 0){if  (Cshapeglobalidx <=   Cline7startintervall) {  Callhline7idx = 0;}      else { Callhline7idx = Cshapeglobalidx -  Cline7startintervall; } }
if (Cline8length > 0){if  (Cshapeglobalidx <=   Cline8startintervall) {  Callhline8idx = 0;}      else { Callhline8idx = Cshapeglobalidx -  Cline8startintervall; } }
if (Cline9length > 0){if  (Cshapeglobalidx <=   Cline9startintervall) {  Callhline9idx = 0;}      else { Callhline9idx = Cshapeglobalidx -  Cline9startintervall; } }
if (Cline10length > 0){if  (Cshapeglobalidx <=   Cline10startintervall) {  Callhline10idx = 0;}      else { Callhline10idx = Cshapeglobalidx -  Cline10startintervall; } }
if (Cline11length > 0){if  (Cshapeglobalidx <=   Cline11startintervall) {  Callhline11idx = 0;}      else { Callhline11idx = Cshapeglobalidx -  Cline11startintervall; } }
if (Cline12length > 0){if  (Cshapeglobalidx <=   Cline12startintervall) {  Callhline12idx = 0;}      else { Callhline12idx = Cshapeglobalidx -  Cline12startintervall; } }
if (Cline13length > 0){if  (Cshapeglobalidx <=   Cline13startintervall) {  Callhline13idx = 0;}      else { Callhline13idx = Cshapeglobalidx -  Cline13startintervall; } }
if (Cline14length > 0){if  (Cshapeglobalidx <=   Cline14startintervall) {  Callhline14idx = 0;}      else { Callhline14idx = Cshapeglobalidx -  Cline14startintervall; } }

//here defines when the off pixel comes on eachCline
 if (Cshapeglobalidx- Cline0length  <= 0) {Cline0offidx = 0; } else {Cline0offidx = Callhline0idx - Cline0length;} 
 if (Cshapeglobalidx- Cline1length  <= 0) {Cline1offidx = 0; } else {Cline1offidx = Callhline1idx - Cline1length;}  
 if (Cshapeglobalidx- Cline2length  <= 0) {Cline2offidx = 0; } else {Cline2offidx = Callhline2idx - Cline2length;} 
 if (Cshapeglobalidx- Cline3length  <= 0) {Cline3offidx = 0; } else {Cline3offidx = Callhline3idx - Cline3length;} 
 if (Cshapeglobalidx- Cline4length  <= 0) {Cline4offidx = 0; } else {Cline4offidx = Callhline4idx - Cline4length;} 
 if (Cshapeglobalidx- Cline5length  <= 0) {Cline5offidx = 0; } else {Cline5offidx = Callhline5idx - Cline5length;} 
 if (Cshapeglobalidx- Cline6length  <= 0) {Cline6offidx = 0; } else {Cline6offidx = Callhline6idx - Cline6length;} 
 if (Cshapeglobalidx- Cline7length  <= 0) {Cline7offidx = 0; } else {Cline7offidx = Callhline7idx - Cline7length;} 
 if (Cshapeglobalidx- Cline8length  <= 0) {Cline8offidx = 0; } else {Cline8offidx = Callhline8idx - Cline8length;} 
 if (Cshapeglobalidx- Cline9length  <= 0) {Cline9offidx = 0; } else {Cline9offidx = Callhline9idx - Cline9length;} 
 if (Cshapeglobalidx- Cline10length  <= 0) {Cline10offidx = 0; } else {Cline10offidx = Callhline10idx - Cline10length;} 
 if (Cshapeglobalidx- Cline11length  <= 0) {Cline11offidx = 0; } else {Cline11offidx = Callhline11idx - Cline11length;} 
 if (Cshapeglobalidx- Cline12length  <= 0) {Cline12offidx = 0; } else {Cline12offidx = Callhline12idx - Cline12length;} 
 if (Cshapeglobalidx- Cline13length  <= 0) {Cline13offidx = 0; } else {Cline13offidx = Callhline13idx - Cline13length;} 
 if (Cshapeglobalidx- Cline14length  <= 0) {Cline14offidx = 0; } else {Cline14offidx = Callhline14idx - Cline14length;} 

//when it gets to the end theres a blank end line for it to sit in to fix the same spawn line problem as above.
if (Callhline0idx >= 49) {Callhline0idx = 49; Cshapeval0 = 0;}
if (Callhline1idx >= 49) {Callhline1idx = 49; Cshapeval1 = 0;}
if (Callhline2idx >= 49) {Callhline2idx = 49; Cshapeval2 = 0;}
if (Callhline3idx >= 49) {Callhline3idx = 49; Cshapeval3 = 0;}
if (Callhline4idx >= 49) {Callhline4idx = 49; Cshapeval4 = 0;}
if (Callhline5idx >= 49) {Callhline5idx = 49; Cshapeval5 = 0;}
if (Callhline6idx >= 49) {Callhline6idx = 49; Cshapeval6 = 0;}
if (Callhline7idx >= 49) {Callhline7idx = 49; Cshapeval7 = 0;}
if (Callhline8idx >= 49) {Callhline8idx = 49; Cshapeval8 = 0;}
if (Callhline9idx >= 49) {Callhline9idx = 49; Cshapeval9 = 0;}
if (Callhline10idx >= 49) {Callhline10idx = 49; Cshapeval10 = 0;}
if (Callhline11idx >= 49) {Callhline11idx = 49; Cshapeval11 = 0;}
if (Callhline12idx >= 49) {Callhline12idx = 49; Cshapeval12 = 0;}
if (Callhline13idx >= 49) {Callhline13idx = 49; Cshapeval13 = 0;}
if (Callhline14idx >= 49) {Callhline14idx = 49; Cshapeval14 = 0;}


//same as above but for the off Cline
if (Cline0offidx >=49) {Cline0offidx = 49;}
if (Cline1offidx >=49) {Cline1offidx = 49;}
if (Cline2offidx >=49) {Cline2offidx = 49;}
if (Cline3offidx >=49) {Cline3offidx = 49;}
if (Cline4offidx >=49) {Cline4offidx = 49;}
if (Cline5offidx >=49) {Cline5offidx = 49;}
if (Cline6offidx >=49) {Cline6offidx = 49;}
if (Cline7offidx >=49) {Cline7offidx = 49;}
if (Cline8offidx >=49) {Cline8offidx = 49;}
if (Cline9offidx >=49) {Cline9offidx = 49;}
if (Cline10offidx >=49) {Cline10offidx = 49;}
if (Cline11offidx >=49) {Cline11offidx = 49;}
if (Cline12offidx >=49) {Cline12offidx = 49;}
if (Cline13offidx >=49) {Cline13offidx = 49;}
if (Cline14offidx >=49) {Cline14offidx = 49;}

 //as above shows only if it's moving
if (Callhline0idx > 0){ leds [allhline0[Callhline0idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval0); leds [allhline0[Cline0offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline1idx > 0){ leds [allhline1[Callhline1idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval1); leds [allhline1[Cline1offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline2idx > 0){ leds [allhline2[Callhline2idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval2); leds [allhline2[Cline2offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline3idx > 0){ leds [allhline3[Callhline3idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval3); leds [allhline3[Cline3offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline4idx > 0){ leds [allhline4[Callhline4idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval4); leds [allhline4[Cline4offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline5idx > 0){ leds [allhline5[Callhline5idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval5); leds [allhline5[Cline5offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline6idx > 0){ leds [allhline6[Callhline6idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval6); leds [allhline6[Cline6offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline7idx > 0){ leds [allhline7[Callhline7idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval7); leds [allhline7[Cline7offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline8idx > 0){ leds [allhline8[Callhline8idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval8); leds [allhline8[Cline8offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline9idx > 0){ leds [allhline9[Callhline9idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval9); leds [allhline9[Cline9offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline10idx > 0){ leds [allhline10[Callhline10idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval10); leds [allhline10[Cline10offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline11idx > 0){ leds [allhline11[Callhline11idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval11); leds [allhline11[Cline11offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline12idx > 0){ leds [allhline12[Callhline12idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval12); leds [allhline12[Cline12offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline13idx > 0){ leds [allhline13[Callhline13idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval13); leds [allhline13[Cline13offidx]] = CHSV (Cshapehue, Cshapesat, 0); }
if (Callhline14idx > 0){ leds [allhline14[Callhline14idx]] = CHSV (Cshapehue, Cshapesat, Cshapeval14); leds [allhline14[Cline14offidx]] = CHSV (Cshapehue, Cshapesat, 0); }

//resets everything -------neeeds to be changed when you add more Cshapes
if (Cshapeglobalidx - Cshapegloballength >= 49) { 

  Callhline0idx = 0; Cline0startintervall = 0; Cline0length = 0; Cline0offidx = 0; Cshapeval0 = universalshapebrightness;
  Callhline1idx = 0; Cline1startintervall = 0; Cline1length = 0; Cline1offidx = 0; Cshapeval1 = universalshapebrightness;
  Callhline2idx = 0; Cline2startintervall = 0; Cline2length = 0; Cline2offidx = 0; Cshapeval2 = universalshapebrightness;
  Callhline3idx = 0; Cline3startintervall = 0; Cline3length = 0; Cline3offidx = 0; Cshapeval3 = universalshapebrightness;
  Callhline4idx = 0; Cline4startintervall = 0; Cline4length = 0; Cline4offidx = 0; Cshapeval4 = universalshapebrightness;
  Callhline5idx = 0; Cline5startintervall = 0; Cline5length = 0; Cline5offidx = 0; Cshapeval5 = universalshapebrightness;
  Callhline6idx = 0; Cline6startintervall = 0; Cline6length = 0; Cline6offidx = 0; Cshapeval6 = universalshapebrightness;
  Callhline7idx = 0; Cline7startintervall = 0; Cline7length = 0; Cline7offidx = 0; Cshapeval7 = universalshapebrightness;
  Callhline8idx = 0; Cline8startintervall = 0; Cline8length = 0; Cline8offidx = 0; Cshapeval8 = universalshapebrightness;
  Callhline9idx = 0; Cline9startintervall = 0; Cline9length = 0; Cline9offidx = 0; Cshapeval9 = universalshapebrightness;
  Callhline10idx = 0; Cline10startintervall = 0; Cline10length = 0; Cline10offidx = 0; Cshapeval10 = universalshapebrightness;
  Callhline11idx = 0; Cline11startintervall = 0; Cline11length = 0; Cline11offidx = 0; Cshapeval11 = universalshapebrightness;
  Callhline12idx = 0; Cline12startintervall = 0; Cline12length = 0; Cline12offidx = 0; Cshapeval12 = universalshapebrightness;
  Callhline13idx = 0; Cline13startintervall = 0; Cline13length = 0; Cline13offidx = 0; Cshapeval13 = universalshapebrightness;
  Callhline14idx = 0; Cline14startintervall = 0; Cline14length = 0; Cline14offidx = 0; Cshapeval14 = universalshapebrightness;
  
  Cshapeglobalidx = 0; Cshapeglobaltimer = 0; Cshapegloballength = 0; Cshapeglobalgate = 99;

  }

}

  LEDS.show();
  } 
