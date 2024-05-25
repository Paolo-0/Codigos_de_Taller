/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller Final - B2
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 25 de mayo
   Link: https://www.tinkercad.com/things/eEoecVMNFCu-taller-final-b2?sharecode=z7-XCRyRPsy6b2MqIsKetDBvDMLzgDsTgkkzpurtRig
*/

#include <Keypad.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
#define ON(pin)     digitalWrite(pin, HIGH);
#define OFF(pin)     digitalWrite(pin, LOW);

byte n=2;
byte m=10;

//Configuración del servo
Servo motor;

//Configuración del teclado matricial
char tablero[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte F_pines[4] = {A0, A1, A2, A3};
byte C_pines[4] = {6, 7, 8, 9}; 

Keypad teclado = Keypad(makeKeymap(tablero),F_pines,C_pines,4,4);
//char caracter = teclado.getKey();

//Configuración de la pantalla LCD
LiquidCrystal_I2C Pantalla(0x20,16,2);

void setup(){
  Serial.begin(9600);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
  Pantalla.init();
  Pantalla.backlight();
  Pantalla.setCursor(2,0);
  Pantalla.print("Paolo_Orozco");
  Pantalla.setCursor(1,1);
  Pantalla.print("Proyecto_final");
  
  motor.attach(13);
  motor.write(0);
}

void loop(){
  char caracter = teclado.getKey();
  delay(10);
  switch(caracter){
    
    case '1':
    for(byte i=0;i<100;i++){
      Serial.println(i);
      delay(100);
    }
    break;
    
    case '2':
    for(int i=99;i>-1;i--){
      Serial.println(i);
      delay(100);
    }
    break;
    
    case '3':
    for(byte x=0;x<3;x++){
      for(byte i=0;i<4;i++){
        ON(n)
        delay(500);
        OFF(n)
        n++;
      }
      delay(500);
      for(byte i=0;i<4;i++){
        n--;
        ON(n)
        delay(500);
        OFF(n)
      }
      delay(500);
      n=2;
    }
    break;
    
    case '4':
    for(byte x=0;x<3;x++){
      for(byte i=0;i<3;i++){
        ON(m)
        delay(500);
        OFF(m)
        m++;
      }
      for(byte i=0;i<3;i++){
        m--;
        ON(m)
        delay(500);
        OFF(m)
      }
      delay(500);
      m=10;
    }
    break;
    
    case '5':
    motor.write(180);
    delay(5000);
    motor.write(0);
    break;
  }
}
