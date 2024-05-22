/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Practica 6.2
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 20 de mayo
   link de la simulacion: 
*/

#include <Wire.h>               
#include <LiquidCrystal_I2C.h>  
#include <Servo.h>              
#include <Keypad.h>             

#define direccion_lcd 0x27     //Sla_add pantalla LCD
#define filas 2                //Cantidad de filas que posee la pantalla LCD
#define columnas 16            //Cantidad de columnas que posee la pantalla LCD 

#define filas_teclado 4        //cantidad de filas que posee el teclado matricial.
#define columnas_teclado 4     //cantidad de columnas que posee el teclado matricial.
#define f1_teclado A0          //pinA0 conectado a la fila 1
#define f2_teclado A1          //pinA1 conectado a la fila 2
#define f3_teclado A2          //pinA2 conectado a la fila 3
#define f4_teclado A3          //pinA3 conectado a la fila 4
#define c1_teclado 2           //pin2 conectado a la columna 1
#define c2_teclado 3           //pin3 conectado a la columna 2
#define c3_teclado 4           //pin4 conectado a la columna 3
#define c4_teclado 5           //pin5 conectado a la columna 4

#define pin_servo 9            //pin9 conectado al servomotor
#define pin_buzz  10           //pin10 conectado al servomotor
#define led_rojo  6            //pin6 conectado al led rojo
#define led_amar  12           //pin12 conectado al led amarillo
#define led_verd  7            //pin7 conectado al led verde
#define ON(pin)     digitalWrite(pin, HIGH);
#define OFF(pin)    digitalWrite(pin, LOW);

char keys[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte pines_filas[4] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[4] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};

const int P_cerrado = 0;             //posicion de 0 grados para indicar que la puerta se encuentra cerrada
const int P_abierto = 90;          //posicion de 90 grados para indicar que la puerta se encuentra abierta

String contrasenaCerradura = "2020210*";   //Variable donde almaceno la contraseña definida por el sistema
String info_recibida = "";                //Variable donde voy a ir guardando los caracteres que ingreso por medio del teclado

byte pos_lcd = 0;      //posición del cursor


LiquidCrystal_I2C lcdCerradura(direccion_lcd, columnas, filas);   //LCD con direccion 0x20 y tamanio 16x2
Servo ServoCerradura;                                             //Servomotor controlado por medio del PWM en el pin9
Keypad tecladoCerradura = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);   //teclado matricial 4x4 conectado al arduino por diversos pines

void config_outputs(void);

void config_HMI(void);

void setup()
{
  Serial.begin(9600);             //Inicio la comunicacion serial
  Serial.println("Practica 6");   //Envio el mensaje al monitor serie
  config_outputs();               //Realizo las configuraciones de los pines de salida
  config_HMI();                   //configuro e inicializo la pantalla LCD y el servomotor
  ON(led_amar);                   //enciendo el led amarillo
  ON(led_rojo);                   //enciendo el led rojo
  OFF(led_verd);                  //enciendo el led verde}
  ServoCerradura.write(P_cerrado);
}



void loop()
{
  //Obtengo el valor de la tecla presionada
  char key= tecladoCerradura.getKey(); 
  
  
  if(key)
  {
    info_recibida = info_recibida + key;
    Serial.println(key);
    lcdCerradura.setCursor(pos_lcd,1);
    lcdCerradura.print("*         ");
    pos_lcd++;
    if(key == '*')
    {
      lcdCerradura.setCursor(0,1);
      lcdCerradura.print("               ");
      Serial.println(info_recibida);
      if(info_recibida == contrasenaCerradura)
      {
        ON(led_verd);
        OFF(led_rojo);
        lcdCerradura.clear();
        lcdCerradura.setCursor(0,0);
        lcdCerradura.print("C");
        lcdCerradura.setCursor(1,0);
        lcdCerradura.print(".");
        lcdCerradura.setCursor(2,0);
        lcdCerradura.print("C");
        lcdCerradura.setCursor(3,0);
        lcdCerradura.print("o");
        lcdCerradura.setCursor(4,0);
        lcdCerradura.print("r");
        lcdCerradura.setCursor(5,0);
        lcdCerradura.print("r");
        lcdCerradura.setCursor(6,0);
        lcdCerradura.print("e");
        lcdCerradura.setCursor(7,0);
        lcdCerradura.print("c");
        lcdCerradura.setCursor(8,0);
        lcdCerradura.print("t");
        lcdCerradura.setCursor(9,0);
        lcdCerradura.print("a");
        ServoCerradura.write(P_abierto);
        delay(500);
        lcdCerradura.setCursor(0,1);
        lcdCerradura.print("P");
        lcdCerradura.setCursor(1,1);
        lcdCerradura.print(".");
        lcdCerradura.setCursor(2,1);
        lcdCerradura.print("A");
        lcdCerradura.setCursor(3,1);
        lcdCerradura.print("b");
        lcdCerradura.setCursor(4,1);
        lcdCerradura.print("i");
        lcdCerradura.setCursor(5,1);
        lcdCerradura.print("e");
        lcdCerradura.setCursor(6,1);
        lcdCerradura.print("r");
        lcdCerradura.setCursor(7,1);
        lcdCerradura.print("t");
        lcdCerradura.setCursor(8,1);
        lcdCerradura.print("a");
        Serial.println("C. correcta");
        for(byte i=0;i<2;i++){
          tone(10,220,250);
          delay(350);
        }
        delay(10000);
        lcdCerradura.clear();
      }
      else
      {
        lcdCerradura.clear();
        lcdCerradura.setCursor(0,0);
        lcdCerradura.print("C");
        lcdCerradura.setCursor(1,0);
        lcdCerradura.print(".");
        lcdCerradura.setCursor(2,0);
        lcdCerradura.print("i");
        lcdCerradura.setCursor(3,0);
        lcdCerradura.print("n");
        lcdCerradura.setCursor(4,0);
        lcdCerradura.print("c");
        lcdCerradura.setCursor(5,0);
        lcdCerradura.print("o");
        lcdCerradura.setCursor(6,0);
        lcdCerradura.print("r");
        lcdCerradura.setCursor(7,0);
        lcdCerradura.print("r");
        lcdCerradura.setCursor(8,0);
        lcdCerradura.print("e");
        lcdCerradura.setCursor(9,0);
        lcdCerradura.print("c");
        lcdCerradura.setCursor(10,0);
        lcdCerradura.print("t");
        lcdCerradura.setCursor(11,0);
        lcdCerradura.print("a");
        lcdCerradura.setCursor(0,1);
        lcdCerradura.setCursor(0,1);
        lcdCerradura.print("P");
        lcdCerradura.setCursor(1,1);
        lcdCerradura.print(".");
        lcdCerradura.setCursor(2,1);
        lcdCerradura.print("C");
        lcdCerradura.setCursor(3,1);
        lcdCerradura.print("e");
        lcdCerradura.setCursor(4,1);
        lcdCerradura.print("r");
        lcdCerradura.setCursor(5,1);
        lcdCerradura.print("r");
        lcdCerradura.setCursor(6,1);
        lcdCerradura.print("a");
        lcdCerradura.setCursor(7,1);
        lcdCerradura.print("d");
        lcdCerradura.setCursor(8,1);
        lcdCerradura.print("a");
        for(byte i=0;i<5;i++){
          tone(10,220,250);
          delay(350);
        }
        delay(1000);
        OFF(led_verd);
        ON(led_rojo);
        Serial.println("Contraseña incorrecta");
        ServoCerradura.write(P_cerrado);
        lcdCerradura.clear();
      }
      info_recibida = "";     //limpio el string
      delay(1000);
      lcdCerradura.setCursor(3,0);
        lcdCerradura.print("B");
        lcdCerradura.setCursor(4,0);
        lcdCerradura.print("i");
        lcdCerradura.setCursor(5,0);
        lcdCerradura.print("e");
        lcdCerradura.setCursor(6,0);
        lcdCerradura.print("n");
        lcdCerradura.setCursor(7,0);
        lcdCerradura.print("v");
        lcdCerradura.setCursor(8,0);
        lcdCerradura.print("e");
        lcdCerradura.setCursor(9,0);
        lcdCerradura.print("n");
        lcdCerradura.setCursor(10,0);
        lcdCerradura.print("i");
        lcdCerradura.setCursor(11,0);
        lcdCerradura.print("d");
        lcdCerradura.setCursor(12,0);
        lcdCerradura.print("o");
      pos_lcd = 0;
      ON(led_rojo);
      OFF(led_verd);
      ServoCerradura.write(P_cerrado);
    }
  }

}


void config_outputs(void)
{
  pinMode(pin_servo, OUTPUT);
  pinMode(pin_buzz, OUTPUT);
  pinMode(led_amar, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(led_verd, OUTPUT);
}

void config_HMI(void)
{
  ServoCerradura.attach(pin_servo);
  lcdCerradura.init();
  lcdCerradura.backlight();
  lcdCerradura.setCursor(3,0);
  lcdCerradura.print("B");
  lcdCerradura.setCursor(4,0);
  lcdCerradura.print("i");
  lcdCerradura.setCursor(5,0);
  lcdCerradura.print("e");
  lcdCerradura.setCursor(6,0);
  lcdCerradura.print("n");
  lcdCerradura.setCursor(7,0);
  lcdCerradura.print("v");
  lcdCerradura.setCursor(8,0);
  lcdCerradura.print("e");
  lcdCerradura.setCursor(9,0);
  lcdCerradura.print("n");
  lcdCerradura.setCursor(10,0);
  lcdCerradura.print("i");
  lcdCerradura.setCursor(11,0);
  lcdCerradura.print("d");
  lcdCerradura.setCursor(12,0);
  lcdCerradura.print("o");
}
