int blanca=1000;
int blanca_d=1200;
int negra=500;
int negra_d=600;
int corchea_p=450;
int semicorchea=150;

int G = 392;
//int Gb = 370;
int Eb = 311;
int Bb = 466;
int D2 = 587;
int Eb2 = 622;
int G2 = 784;
int Fsos2 = 740; 
int F2 = 698;
int E2 = 659;
int Dsos = 311;
int Gsos = 415;
int Csos2 = 554;
int D=294;
int C2=523;
int B=494;
int Fsos=370;
int E=330;
int F=349;

void setup()
{
  pinMode(3,OUTPUT);
  tone(3,G,negra);
  delay(negra_d);
  tone(3,G,negra);
  delay(negra_d);
  
  for(byte conteo=0;conteo<2;conteo++){
    tone(3,G,negra);
    delay(negra_d);
    tone(3,Eb,corchea_p);
    delay(corchea_p);
    tone(3,Bb,semicorchea);
    delay(semicorchea);
  } 
  
  tone(3,G,blanca);
  delay(blanca_d);
  
  for(byte conteo=0;conteo<3;conteo++){
    tone(3,D2,negra);
    delay(negra_d);
  }
  
  tone(3,Eb2,corchea_p);
  delay(corchea_p);
  tone(3,Bb,semicorchea);
  delay(semicorchea);
  tone(3,Fsos,negra);
  delay(negra_d);
  
  tone(3,D,corchea_p);
  delay(corchea_p);
  tone(3,Bb,semicorchea);
  delay(semicorchea);
  tone(3,G,blanca);
  delay(blanca_d);
  
  tone(3,G2,negra);
  delay(negra_d);
  tone(3,G,corchea_p);
  delay(corchea_p);
  tone(3,G,semicorchea);
  delay(semicorchea);
  tone(3,G2,negra);
  delay(negra_d);
  
  tone(3,Fsos2,corchea_p);
  delay(corchea_p);
  tone(3,F2,semicorchea);
  delay(semicorchea);
  //
  tone(3,E2,negra);
  delay(negra_d);
  tone(3,Gsos,negra);
  delay(negra_d);
  tone(3,Csos2,negra);
  delay(negra_d);
  tone(3,C2,corchea_p);
  delay(corchea_p);
  tone(3,B,semicorchea);
  delay(semicorchea);
  
  tone(3,Bb,negra);
  delay(negra_d);
  tone(3,Eb,negra);
  delay(negra_d);
  tone(3,Fsos,negra);
  delay(negra_d);
  tone(3,E,corchea_p);
  delay(corchea_p);
  tone(3,F,semicorchea);
  delay(semicorchea);
  
  tone(3,Bb,negra);
  delay(negra_d);
  tone(3,G,corchea_p);
  delay(corchea_p);
  tone(3,B,semicorchea);
  delay(semicorchea);
  tone(3,B,blanca);
  delay(blanca_d);
  
  tone(3,G2,negra);
  delay(negra_d);
  tone(3,G,corchea_p);
  delay(corchea_p);
  tone(3,G,semicorchea);
  delay(semicorchea);
  tone(3,G2,negra);
  delay(negra_d);
  
  tone(3,Fsos2,corchea_p);
  delay(corchea_p);
  tone(3,F2,semicorchea);
  delay(semicorchea);
  
  tone(3,E2,negra);
  delay(negra_d);
  tone(3,Gsos,negra);
  delay(negra_d);
  tone(3,Csos2,negra);
  delay(negra_d);
  tone(3,C2,corchea_p);
  delay(corchea_p);
  tone(3,B,semicorchea);
  delay(semicorchea);
  
  tone(3,Bb,negra);
  delay(negra_d);
  tone(3,Eb,negra);
  delay(negra_d);
  tone(3,Fsos,negra);
  delay(negra_d);
  tone(3,E,corchea_p);
  delay(corchea_p);
  tone(3,B,semicorchea);
  delay(semicorchea);
  
  tone(3,G,negra);
  delay(negra_d);
  tone(3,Eb,corchea_p);
  delay(corchea_p);
  tone(3,Bb,semicorchea);
  delay(semicorchea);
  tone(3,G,blanca);
  delay(blanca_d);
  
  tone(3,G,negra);
  delay(negra_d);
  tone(3,G,negra);
  delay(negra_d);
  
  for(byte conteo=0;conteo<2;conteo++){
    tone(3,G,negra);
    delay(negra_d);
    tone(3,Eb,corchea_p);
    delay(corchea_p);
    tone(3,Bb,semicorchea);
    delay(semicorchea);
  } 
  
  tone(3,G,blanca);
  delay(blanca_d);
  
  for(byte conteo=0;conteo<3;conteo++){
    tone(3,D2,negra);
    delay(negra_d);
  }
  
  tone(3,Eb2,corchea_p);
  delay(corchea_p);
  tone(3,Bb,semicorchea);
  delay(semicorchea);
  tone(3,Fsos,negra);
  delay(negra_d);
  
  tone(3,D,corchea_p);
  delay(corchea_p);
  tone(3,Bb,semicorchea);
  delay(semicorchea);
  tone(3,G,blanca);
  delay(blanca_d);
}

void loop()
{
  
}
