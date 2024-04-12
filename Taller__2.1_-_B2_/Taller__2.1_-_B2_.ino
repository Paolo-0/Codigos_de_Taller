/*
  Fundación Kinal
    Centro Educativo Técnico Laboral Kinal
    Quinto Perito
    Quinto Electrónica
    Código Técnico: EB5AM
    Curso: Taller de electrónica digital y reparación de computadoras
  Proyecto: Como leer un pin digital
    Dev: Paolo Eduardo Orozco Argueta
    Fecha: 12 de abril
*/

//Directivas del preprocesador
#define push_button 2 //Push button conectado al pin 2
#define led 3

void setup() {
  pinMode(push_button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);           //Inicio la comunicación serial
  Serial.println("Lectura de un pulsador"); //Envio el texto entre comillas al puerto serie
}

void loop() {
  /*Variable local, que se encarga de almacenar el valor (abierto o cerrado)
  del pulsador conectado al pin 2*/
  bool estado_boton = digitalRead (push_button);
  if (estado_boton == HIGH) //¿He presionado el interruptor?
  {
    //Si está en HIGH
    digitalWrite(led, LOW); //Apago el led
  } else {
    //Si está en LOW
    digitalWrite(led, HIGH); //Mantengo encendido el led
  }
}
