/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Catalogo de productos
   Dev: Paolo Eduardo Orozco Argueta
   Fecha: 19 de abril
*/
byte contador = 1;

struct datos_stock {
  char nombre_producto[50];
  byte cantidad_producto;
};

datos_stock producto_1 = {"Chocolates KitKat", 30};
datos_stock producto_2 = {"Gaseosa Pepsi", 45};
datos_stock producto_3 = {"Dulces Skittles", 40};
datos_stock producto_4 = {"Nachos Doritos", 35};

void setup() {
  Serial.begin(9600);
  
  Serial.println("Entradas pin 2 (avance) y pin 3 (retroceso)");
  Serial.println("Datos de stock");
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  
}

void loop() {
  
  if(digitalRead(2)==HIGH) {
   delay(400);
   contador = contador+1;
  }
  else if(digitalRead(3)==HIGH) {
   delay(400);
   contador = contador-1;
  } else {
  }
  
  if(contador==1) {
  Serial.print("Producto: ");
  Serial.println(producto_1.nombre_producto);
  Serial.print("Cantidad: ");
  Serial.println(producto_1.cantidad_producto);
    delay(1000);
  } else if(contador==2) {
  Serial.print("Producto: ");
  Serial.println(producto_2.nombre_producto);
  Serial.print("Cantidad: ");
  Serial.println(producto_2.cantidad_producto);
    delay(1000);
  } else if(contador==3) {
  Serial.print("Producto: ");
  Serial.println(producto_3.nombre_producto);
  Serial.print("Cantidad: ");
  Serial.println(producto_3.cantidad_producto);
    delay(1000);
  } else if(contador==4) {
  Serial.print("Producto: ");
  Serial.println(producto_4.nombre_producto);
  Serial.print("Cantidad: ");
  Serial.println(producto_4.cantidad_producto);
    delay(1000);
  } else if(contador>4) {
  delay(400);
  contador = 1;
  } else {
  delay(400);
  contador = 4;
  }
}
