byte conteo = 0;
float constante_lb = 2.20462262;
float constante_microA = 1000000;


float conversion_kg_lb(float kilogramos){
  float resultado1;
  resultado1 = kilogramos*constante_lb;
  return resultado1;
}
float conversion_A_microA(float Amperios){
  float resultado2;
  resultado2 = Amperios*constante_microA;
  return resultado2;
}
void secuencia_leds(int valor_led){
  switch(valor_led){
    case 1:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    break;
    case 2:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    break;
    case 3:
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    break;
    case 4:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    break;
    case 5:
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
  
  float valor_recibido1;
  valor_recibido1 = conversion_kg_lb(1);
  Serial.print(valor_recibido1);
  Serial.println(" lb");
  
  float valor_recibido2; 
  valor_recibido2 = conversion_A_microA(1.450024848);
  Serial.print(valor_recibido2);
  Serial.println(" microAmperios");
  
  while(conteo<1){
    secuencia_leds(1);
    delay(2000);
    secuencia_leds(2);
    delay(2000);
    secuencia_leds(3);
    delay(2000);
    secuencia_leds(4);
    delay(2000);
    secuencia_leds(5);
    delay(2000);
  }
}
void loop()
{
}
