#include <Adafruit_NeoPixel.h>

#define pin_led 3
#define n_pixeles 7
#define TRIGGER 13
#define ECHO 12
#define a 10
#define b 11
#define c 6
#define d 5
#define e 4
#define f 8
#define g 7

byte C_personas=0;
byte i=0;

Adafruit_NeoPixel led(n_pixeles,pin_led, NEO_RGB + NEO_KHZ800);

void setup(){
  Serial.begin(9600);
  led.begin();
  led.clear();
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  digitalWrite(TRIGGER, LOW);
  for(byte n;n<n_pixeles;n++){
    led.setPixelColor(n,led.Color(200,0,0));
    led.show();
  }
}

void loop(){
  delay(50);
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER, LOW);
  int Sensor = pulseIn(ECHO, HIGH);
  int distancia = Sensor/59;
  if(distancia<=8 && distancia>=6){
    digitalWrite(LED_BUILTIN, HIGH);
    C_personas++;
    Serial.println(distancia);
    delay(500);
  }else{
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println(distancia);
  }
  switch(C_personas){
    case 0:
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    delay(100);
    break;
    case 1:
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(100);
    break;
    case 2:
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(100);
    break;
    case 3:
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(100);
    break;
    case 4:
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(100);
    break;
    case 5:
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(100);
    break;
    case 6:
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(100);
    break;
    case 7:
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(100);
    break;
    case 8:
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(100);
    break;
    default:
    led.clear();
    for(byte n;n<n_pixeles;n++){
      led.setPixelColor(n, led.Color(0,200,0));
      led.show();
    }
    for(i;i<1;i++){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    }
    delay(1000);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(500);
    break;
  }
}
