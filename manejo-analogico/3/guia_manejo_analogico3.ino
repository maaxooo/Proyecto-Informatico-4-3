// Con un led rgb mostrar 3 tonalidades distintas
//de los siguientes colores, cian, rojo,
//amarillo.

#define led1rojo  6
#define led1azul  5
#define led1verde 3

void setup()
{
  pinMode(led1rojo, OUTPUT);
  pinMode(led1azul, OUTPUT);
  pinMode(led1verde, OUTPUT);
}

void loop()
{
  analogWrite(led1verde, 255);
  analogWrite(led1azul, 255);
  delay(500);
  analogWrite(led1verde, 0);
  analogWrite(led1azul, 0);
  analogWrite(led1rojo, 100);
  delay(500);
  analogWrite(led1rojo, 55);
  analogWrite(led1verde, 55);
  delay(500);
  analogWrite(led1rojo, 0);
  analogWrite(led1verde, 0);
  delay(500);
}