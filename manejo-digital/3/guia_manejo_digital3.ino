// Prender a la vez, de una tanda de 10leds comunes, 
//los 5 impares y luego los 5 pares, y que
//vallan alternando el prender y apagar.

#define led1  0
#define led2  1 
#define led3  2
#define led4  3 
#define led5  4 
#define led6  5
#define led7  6
#define led8  7
#define led9  8
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
  // 2,4,6,8,10
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led10, HIGH);
  delay(400);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led10, LOW);
  
  //1, 3, 5, 7, 9
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led9, HIGH);
  delay(400);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led9, LOW);
  
}