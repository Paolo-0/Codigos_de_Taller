/*
   Centro Educativo Tecnico Laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller (7 - B3)
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 26 de julio
*/

#include <SPI.h>
#include <MFRC522.h>

#define pin_Reset 9
#define pin_SDA 10
#define pin_led_R 7
#define pin_led_V 8
#define pin_tone 3

MFRC522 myRFID(pin_SDA, pin_Reset);
byte MyCard[4]{48,220,25,29};
int readCard[4];

void setup(){
  Serial.begin(9600);
  SPI.begin();
  myRFID.PCD_Init();
  pinMode(pin_led_R,OUTPUT);
  pinMode(pin_led_V,OUTPUT);
  pinMode(pin_tone,OUTPUT);
  digitalWrite(pin_led_R,HIGH);
  digitalWrite(pin_led_V,LOW);
  }

void loop(){
  
  if (!myRFID.PICC_IsNewCardPresent())
    return;

  if (!myRFID.PICC_ReadCardSerial())
    return;
  //readCard = myRFID.PICC_ReadCardSerial; 
  
  Serial.print("UID:");
  for (byte i=0; i<myRFID.uid.size; i++){
    if(myRFID.uid.uidByte[i]<0x10){
      Serial.print(" 0");
      }
      Serial.print(myRFID.uid.uidByte[i], HEX);
    }

    readCard[0] = myRFID.uid.uidByte[0];
    readCard[1] = myRFID.uid.uidByte[1];
    readCard[2] = myRFID.uid.uidByte[2];
    readCard[3] = myRFID.uid.uidByte[3];
    
    Serial.println();
    myRFID.PICC_HaltA();
    
    if(readCard[0]==MyCard[0]&&readCard[1]==MyCard[1]&&readCard[2]==MyCard[2]&&readCard[3]==MyCard[3]){
      Serial.println("Bienvenido");
      digitalWrite(pin_led_V,HIGH);
      digitalWrite(pin_led_R,LOW);
      tone(pin_tone,200,500);
      delay(750);
      tone(pin_tone,200,500);
      delay(3250);
      digitalWrite(pin_led_V,LOW);
      digitalWrite(pin_led_R,HIGH);
      }else{
        tone(pin_tone,400,500);
        delay(750);
        tone(pin_tone,400,500);
        delay(750);
        tone(pin_tone,400,500);
        delay(750);
        tone(pin_tone,400,500);
        delay(750);
        }
  }
