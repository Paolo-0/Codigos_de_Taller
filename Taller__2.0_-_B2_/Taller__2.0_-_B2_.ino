/*
  Fundación Kinal
    Centro Educativo Técnico Laboral Kinal
    Quinto Perito
    Quinto Electrónica
    Código Técnico: EB5AM
    Curso: Taller de electrónica digital y reparación de computadoras
    Proyecto: Escritura en un pin digital (Encender o apagar un pin digital)
    Dev: Paolo Eduardo Orozco Argueta
    Fecha: 12 de abril
*/

//Directivas de preprocesador
#define LedNaranja 4    //Pin 4 conectado a un led
#define tiempo_espera 500 //tiempo entre estados del led

void setup()
{
  pinMode(LedNaranja, OUTPUT); //Pin 4 como salida.
  digitalWrite(LedNaranja, LOW); //Led conectado al pin 13 inicia apagado
}

void loop()
{
  digitalWrite(LedNaranja, HIGH); //Enciendo el led conectado al pin 4
  delay(tiempo_espera); //Espera de 500 milisegundos
  digitalWrite(LedNaranja, LOW); //Apago el led conectado al pin 4
  delay(tiempo_espera); //Espera de 500 milisegundos
}
