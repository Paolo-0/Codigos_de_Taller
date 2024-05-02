/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller 4 Parte III
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 2 de abril
*/

int time = 0;

void setup() {
  Serial.begin(9600);
  pinMode(0, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if ((digitalRead(0)==LOW)&&(digitalRead(3)==LOW)) {
    Serial.println("Gracias por su atencion");
    delay(1000);
  } else {}
    
  if (digitalRead(3)==LOW) {
    Serial.println("Practica No. 4_Paolo Eduardo Orozco Argueta");
    delay(2000);
  } else {}
  if (digitalRead(0)==LOW) {
    if (digitalRead(0)==LOW) {
      digitalWrite(4,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(5,LOW);
      delay(2000);
    } else {}
    if (digitalRead(0)==LOW) {
      digitalWrite(4,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(5,LOW);
      delay(2000);
    } else {}
    if (digitalRead(0)==LOW) {
      digitalWrite(4,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(5,HIGH);
      delay(2000);
    } else {}
    if (digitalRead(0)==LOW) {
      digitalWrite(4,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(5,LOW);
      delay(2000);
    } else {}
    if (digitalRead(0)==LOW) {
      digitalWrite(4,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(5,LOW);
      delay(2000);
    } else {}
    if (digitalRead(0)==LOW) {
      digitalWrite(4,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,HIGH);
      digitalWrite(5,HIGH);
      delay(2000);
    } else {}
    if (digitalRead(0)==LOW) {
      digitalWrite(4,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
      digitalWrite(5,LOW);
      delay(2000);
    } else {}
  } else {
      digitalWrite(4,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
      digitalWrite(5,LOW);
      delay(2000);
  }
  
  if (digitalRead(2)==LOW) {
    time = 500;
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,HIGH);
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,HIGH);
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(10,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(9,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,HIGH);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,HIGH);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(8,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(7,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
    if (digitalRead(2)==LOW) {
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      delay(time);
    } else {}
  } else {
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    delay(500);
  }
}
