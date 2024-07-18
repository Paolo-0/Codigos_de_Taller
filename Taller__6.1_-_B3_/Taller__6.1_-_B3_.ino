/*
   Centro Educativo Tecnico Laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller (6.1 - B3)
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 18 de julio
*/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define Ancho_OLED    128
#define Alto_OLED     64
#define pin_adc       A7

Adafruit_SSD1306 Pantalla_Oled(Ancho_OLED,Alto_OLED,&Wire,-1);

unsigned int adc_valor;

void setup(){

 Serial.begin(9600);
 pinMode(pin_adc, INPUT);
 delay(100);

 if(!Pantalla_Oled.begin(SSD1306_SWITCHCAPVCC, 0x3C))
 {
  Serial.println("No puedo comunicarme con la pantalla oled");
  Serial.println("Favor de revisar conexiones o alimentacion");
  while(1);
 }
}

void loop(){
  Pantalla_Oled.setTextSize(1);
  Pantalla_Oled.setTextColor(SSD1306_WHITE);
  Pantalla_Oled.setCursor(0, 0);
  Pantalla_Oled.println("Valor del ADC");
  Pantalla_Oled.display();
  adc_valor = analogRead(pin_adc);
  Pantalla_Oled.setTextSize(3);
  Pantalla_Oled.setTextColor(SSD1306_WHITE);
  Pantalla_Oled.setCursor(0,10);
  Pantalla_Oled.println(adc_valor);
  Pantalla_Oled.display();
  Pantalla_Oled.clearDisplay();
  delay(100);
}
