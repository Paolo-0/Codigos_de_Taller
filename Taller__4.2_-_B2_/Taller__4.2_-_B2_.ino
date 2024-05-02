/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller 4 Parte II
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 29 de abril
*/

byte conteo = 0;
int time = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  if (digitalRead(2)==HIGH) {
    Serial.println("Secuencia velocidad - 1");
    conteo = 1;
    time = 500;
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,HIGH);
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,HIGH);
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,HIGH);
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,HIGH);
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,HIGH);
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,HIGH);
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
  } else if (digitalRead(3)==HIGH) {
    Serial.println("Secuencia velocidad - 2");
    conteo = 1;
    time = 250;
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,HIGH);
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,HIGH);
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,HIGH);
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,HIGH);
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,HIGH);
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,HIGH);
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(5,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(3)==HIGH) {
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
  } else {
    conteo = 0;
    time = 1000;
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    delay(1000);
  }
}
