#define buzz 2
#define botton 3

void setup()
{
  pinMode(buzz, OUTPUT);
  pinMode(botton, INPUT);
}

void loop()
{
  if (!digitalRead(botton))
  {
    tone(buzz, 220, 100);
    delay(1000);
    tone(buzz, 220, 100);
    delay(1000);
  }
  
}