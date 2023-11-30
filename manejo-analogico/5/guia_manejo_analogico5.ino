//Colocar 1 led rgb y 3 potenciómetros, 
//cada potenciómetro debe controlar la intensidad de
//cada canal del led rgb.

#define led1rojo 3
#define led1azul 5
#define led1verde 6

#define pot1 A0
#define pot2 A1
#define pot3 A2

void setup()
{
  pinMode(led1rojo, OUTPUT);
  pinMode(led1azul, OUTPUT);
  pinMode(led1verde, OUTPUT);
  
  pinMode(pot1, INPUT);
  pinMode(pot2, INPUT);
  pinMode(pot3, INPUT);
}

void loop()
{
  int lecturaAnal1 = analogRead(pot1);
  int nuevoValor1 = map(lecturaAnal1, 0, 1023, 0, 255);
  
  int lecturaAnal2 = analogRead(pot2);
  int nuevoValor2 = map(lecturaAnal2, 0, 1023, 0, 255);
  
  int lecturaAnal3 = analogRead(pot3);
  int nuevoValor3 = map(lecturaAnal3, 0, 1023, 0, 255);
  
  analogWrite(led1rojo, nuevoValor1);
  analogWrite(led1azul, nuevoValor2);
  analogWrite(led1verde, nuevoValor3);
}