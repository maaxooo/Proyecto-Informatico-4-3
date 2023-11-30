#define led 4

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led, 255);
  delay(600);
  analogWrite(led, 0);

  analogWrite(led, 10);
  delay(600);
  analogWrite(led, 0);
  
  analogWrite(led, 150);
  delay(600);
  analogWrite(led, 0);
  
  analogWrite(led, 250);
  delay(600);
  analogWrite(led, 0);
  
  analogWrite(led, 50);
  delay(600);
  analogWrite(led, 0);
  
}