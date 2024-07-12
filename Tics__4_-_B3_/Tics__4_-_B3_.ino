#include <SoftwareSerial.h>

SoftwareSerial Comunicacion_B(10,11);

char entrada_Dato;

void setup() {
  Serial.begin(9600);
  Serial.print("Listo");
  Comunicacion_B.begin(38400);
  pinMode(3,OUTPUT);
}

void loop() {
  if (Comunicacion_B.available()){
    //Serial.write(Comunicacion_B.read());
    entrada_Dato=Comunicacion_B.read();
    if(entrada_Dato=='0'){
      digitalWrite(3,HIGH);
      }
    if(entrada_Dato=='1'){
    digitalWrite(3,LOW);
      }
    }

    if (Serial.available()){
      Comunicacion_B.write(Serial.read());
      }
}
