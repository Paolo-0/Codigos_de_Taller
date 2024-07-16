/*
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Sensor de sismo
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 16 de julio.
*/

#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"
#include <Arduino.h>
#include <DFRobotDFPlayerMini.h>
#include <SoftwareSerial.h>

SoftwareSerial softSerial(2,13);
DFRobotDFPlayerMini myDFPlayer;

MPU6050 sensor;

int unsigned ax, ay, az;
int Promedio_Valor;
int Resultado_Promedio;
int Resultado_1;
int Resultado_2;
int Resultado_3;
byte i;
int unsigned Escala;

void setup() {
  Serial.begin(9600);
  softSerial.begin(9600);
  Wire.begin();
  sensor.initialize();

  if(!myDFPlayer.begin(softSerial)){
    Serial.println("Error");
    delay(1000);
    }
  myDFPlayer.volume(29); //Definimos un volumen para el módulo de audio; abarca de 1 a 30
  myDFPlayer.EQ(DFPLAYER_EQ_NORMAL); //Indicamos la ecualización
  myDFPlayer.outputDevice(DFPLAYER_DEVICE_SD); //Indicamos que modo de almacenamiento usará

  for(byte n = 3;n<12;n++){
    pinMode(n,OUTPUT);
    digitalWrite(n,LOW);
    }

  if (sensor.testConnection()) Serial.println("Sensor iniciado correctamente");
  else Serial.println("Error al iniciar el sensor");
}

void loop() {
  sensor.getAcceleration(&ax, &ay, &az);

  for(i=0;i<3;i++){
    sensor.getAcceleration(&ax, &ay, &az);
    Promedio_Valor = (ax+ay+az)/3;
    if(i==0){
      Resultado_1 = Promedio_Valor;
      }
    if(i==1){
      Resultado_2 = Promedio_Valor;
      }
    if(i==2){
      Resultado_3 = Promedio_Valor;
      }
    }

    i=0;

  Resultado_Promedio = (Resultado_1+Resultado_2+Resultado_3)/3;
  Escala = Resultado_Promedio-5200;

  if(Resultado_Promedio>7500){
    for(byte n = 3;n<12;n++){
    digitalWrite(n,HIGH);
    }
    delay(500);
  }
  if(Resultado_Promedio>7250){
    for(byte n = 3;n<11;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>11;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }
  if(Resultado_Promedio>7000){
    for(byte n = 3;n<10;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>10;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }
  if(Resultado_Promedio>6750){
    for(byte n = 3;n<9;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>9;m--){
    digitalWrite(m,LOW);
    }
    myDFPlayer.play(1); //Indicamos que el módulo reproduzca el archivo indicado
    delay(5000);
    delay(500);
  }
  if(Resultado_Promedio>6500){
    for(byte n = 3;n<8;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>8;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }
  if(Resultado_Promedio>6250){
    for(byte n = 3;n<7;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>7;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }
  if(Resultado_Promedio>6000){
    for(byte n = 3;n<6;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>6;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }
  if(Resultado_Promedio>5750){
    for(byte n = 3;n<5;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>5;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }
  if(Resultado_Promedio>5500){
    for(byte n = 3;n<4;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>4;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }
  if(Resultado_Promedio>5250){
    for(byte n = 3;n<3;n++){
    digitalWrite(n,HIGH);
    }
    for(byte m = 12;m>3;m--){
    digitalWrite(m,LOW);
    }
    delay(500);
  }

  Serial.print("a[x y z P_V R1 R2 R3 R_P]:\t");
  Serial.print(ax); Serial.print("\t");
  Serial.print(ay); Serial.print("\t");
  Serial.print(az); Serial.print("\t");
  Serial.print(Promedio_Valor); Serial.print("\t");
  Serial.print(Resultado_1); Serial.print("\t");
  Serial.print(Resultado_2); Serial.print("\t");
  Serial.print(Resultado_3); Serial.print("\t");
  Serial.print(Escala); Serial.print("\t");
  Serial.println(Resultado_Promedio);
  delay(500);
}
