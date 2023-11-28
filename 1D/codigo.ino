#define led1 2
#define led2 3
#define buzz 4

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  tone(buzz, 220, 100);
  delay(1000);
  
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  tone(buzz, 220, 100);
  delay(1000);
  
}