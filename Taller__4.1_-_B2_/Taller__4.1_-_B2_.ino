/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller 4 Parte I
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 26 de abril
*/
byte conteo = 0;
int time = 500;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  if (digitalRead(2)==HIGH) {
    time = 1000;
  } else if (digitalRead(3)==HIGH) {
    time = 2000;
  } else if (digitalRead(4)==HIGH) {
    time = 3000;
  } else {
    time = 500;
  }
  
  if (digitalRead(2)==HIGH) {
    if (digitalRead(3)==HIGH) {
      if (digitalRead(4)==HIGH) {
        time = 500;
      }else{}
    }else{}
  }else{}
  
  Serial.println(conteo);
  conteo++;
  delay(time);
  
  if(conteo == 10) {
    conteo = 0;
  } else {
  }
  
}
