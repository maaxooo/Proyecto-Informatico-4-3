// Generar una cascada de 10 leds comunes que 
//vallan de apagado gradualmente hasta el
//último led totalmente prendido.

#define led1  A0
#define led2  A1
#define led3  A2
#define led4  A3
#define led5  A4
#define led6  A5
#define led7  3
#define led8  5
#define led9  6
#define led10 9

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop()
{
  analogWrite(led1, 255);
  analogWrite(led2, 255);
  analogWrite(led3, 255);
  analogWrite(led4, 255);
  analogWrite(led5, 255);
  analogWrite(led6, 255);
  analogWrite(led7, 255);
  analogWrite(led8, 255);
  analogWrite(led9, 255);
  analogWrite(led10, 255);
  delay(500);
  analogWrite(led1, 200);
  analogWrite(led2, 200);
  analogWrite(led3, 200);
  analogWrite(led4, 200);
  analogWrite(led5, 200);
  analogWrite(led6, 200);
  analogWrite(led7, 200);
  analogWrite(led8, 200);
  analogWrite(led9, 200);
  analogWrite(led10, 200);
  delay(500);
  analogWrite(led1, 155);
  analogWrite(led2, 155);
  analogWrite(led3, 155);
  analogWrite(led4, 155);
  analogWrite(led5, 155);
  analogWrite(led6, 155);
  analogWrite(led7, 155);
  analogWrite(led8, 155);
  analogWrite(led9, 155);
  analogWrite(led10, 155);
  delay(500);
  analogWrite(led1, 100);
  analogWrite(led2, 100);
  analogWrite(led3, 100);
  analogWrite(led4, 100);
  analogWrite(led5, 100);
  analogWrite(led6, 100);
  analogWrite(led7, 100);
  analogWrite(led8, 100);
  analogWrite(led9, 100);
  analogWrite(led10, 100);
  delay(500);
  analogWrite(led1, 55);
  analogWrite(led2, 55);
  analogWrite(led3, 55);
  analogWrite(led4, 55);
  analogWrite(led5, 55);
  analogWrite(led6, 55);
  analogWrite(led7, 55);
  analogWrite(led8, 55);
  analogWrite(led9, 55);
  analogWrite(led10, 55);
  delay(500);
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);
  analogWrite(led6, 0);
  analogWrite(led7, 0);
  analogWrite(led8, 0);
  analogWrite(led9, 0);
  analogWrite(led10, 0);
  delay(500);
}