/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Taller 4 Parte IV
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 2 de mayo
*/
byte cuenta = 0;
int conteo = 0;

void setup() {
  
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  
}
void loop() {
  if(digitalRead(2)==HIGH) {
    cuenta = 1;
  } else if(digitalRead(3)==HIGH) {
    cuenta = 2;
  } else {}
  if (cuenta == 1) {
    Serial.println(conteo);
    conteo++;
    delay(100);
  } else if (cuenta == 2) {
    Serial.println(conteo);
    conteo--;
    delay(100);
  }
  if (conteo < 0) {
    conteo = 99;
  } else if (conteo > 99) {
    conteo = 0;
  }
}
