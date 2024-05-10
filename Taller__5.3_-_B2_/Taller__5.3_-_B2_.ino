/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller (5.3 - B2)
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 9 de mayo
   link de la simulacion: https://www.tinkercad.com/things/k93Xi4YqzCr-taller-53-b2?sharecode=b-jYxNvz3uMnfj5QbXv98v_I7030iKw9xs8b6YdaIwo
   
*/
byte conteo = 0;

void secuencia_leds(int valor_led){
  switch(valor_led){
    case 0:
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    break;
    case 1:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    break;
    case 2:
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    break;
    case 3:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    break;
    case 4:
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    break;
    case 5:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    break;
    case 6:
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    break;
    case 7:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    break;
    case 8:
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    break;
    case 9:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    break;
  }
}

void setup()
{
  
  Serial.begin(9600);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  
  secuencia_leds(9);
  delay(1000);
  secuencia_leds(8);
  delay(1000);
  secuencia_leds(7);
  delay(1000);
  secuencia_leds(6);
  delay(1000);
  secuencia_leds(5);
  delay(1000);
  secuencia_leds(4);
  delay(1000);
  secuencia_leds(3);
  delay(1000);
  secuencia_leds(2);
  delay(1000);
  secuencia_leds(1);
  delay(1000);
  secuencia_leds(0);
  delay(1000);
  
  tone(6,250,500);
  
  digitalWrite(7,LOW);
}
void loop(){}
