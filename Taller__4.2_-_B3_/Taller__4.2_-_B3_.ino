#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define canal_pot A6
#define IN1  9
#define IN2  10
#define IN3  11
#define IN4  12
#define pin_Sensor 8
#define pin_Hall 2

unsigned int valor_adc;
unsigned int brillo_led;
bool valor;
bool valor_Hall;
int tiempo;
byte Cantidad_R;

LiquidCrystal_I2C lcd(0x27,16,2);

int paso [8][4] =
{
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1}
};
 
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(canal_pot, INPUT);
  pinMode(pin_Sensor, INPUT);
  pinMode(pin_Hall, INPUT);
  
  lcd.init();
  lcd.backlight();
  lcd.print("Practica no.1");
  lcd.setCursor(0,1);
  lcd.print("Paolo Orozco");
  delay(200);
  lcd.setCursor(0,1);
  lcd.print("Contador_Rev:");
}
 
  
void loop()
{ 
  valor_Hall = digitalRead(pin_Hall);
  valor_adc = analogRead(canal_pot);
  brillo_led = map(valor_adc,0,1023,0,2);
  valor = digitalRead(pin_Sensor);
  switch(brillo_led){
    case 0:
    tiempo = 3;
    Cantidad_R = 5;
    break;
    case 1:
    tiempo = 2;
    Cantidad_R = 7;
    break;
    case 2:
    tiempo = 1;
    Cantidad_R = 12;
    break;
    }
  if(valor_Hall==LOW){
      lcd.setCursor(14,1);
      lcd.print(Cantidad_R);
      lcd.print(" ");
    }
  if(valor==LOW){
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(IN1, paso[i][0]);
      digitalWrite(IN2, paso[i][1]);
      digitalWrite(IN3, paso[i][2]);
      digitalWrite(IN4, paso[i][3]);
      delay(tiempo);
    }
  }
}
