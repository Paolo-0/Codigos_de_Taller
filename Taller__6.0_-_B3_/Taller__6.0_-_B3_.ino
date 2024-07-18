//Librerías
#include <LedControl.h> //Me permite usar el IC MAX7219 (matriz led)

//Directivas de preprocesador
#define din_matrix  3 //Donde entran los datos
#define cs_matrix   2 //Control del slave, para hablarle al integrado
#define clk_matrix  4
#define canal_analogico A7

//Constructores
LedControl matrix_led = LedControl(din_matrix, clk_matrix, cs_matrix,1);

//Variables
unsigned int valor_adc;
int tiempo;
byte pacman_A [8] = {
  B00111000,
  B01000100,
  B10001000,
  B10010000,
  B10001000,
  B01000100,
  B00111000,
  B00000000
  };

byte pacman_B [8] = {
  B00111000,
  B01000100,
  B10000100,
  B10011100,
  B10000100,
  B01000100,
  B00111000,
  B00000000
  };

void setup() {
  Serial.begin(9600);
  matrix_led.shutdown(0, false); //Encender mi matriz led
  matrix_led.setIntensity(0,15);
  matrix_led.clearDisplay(0);
  Serial.println("Uso de la matriz led");
  pinMode(canal_analogico, INPUT);
}

void loop() {
  valor_adc = analogRead(canal_analogico);
  tiempo = map(valor_adc,0,1023,100,2000);
  
  for(int i=0; i<8;i++){
    matrix_led.setRow(0,i,pacman_A[i]);
    }
    delay(tiempo);
  
  for(int i=0; i<8;i++){
    matrix_led.setRow(0,i,pacman_B[i]);
    }
    delay(tiempo);
}
