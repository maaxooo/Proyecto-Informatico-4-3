void setup()
{
  for (int i = 2; i <= 11; i = i + 1)
  {
    pinMode(i, OUTPUT);
  }
} 



void loop()
   {
    for (int i = 2; i <= 11; i = i + 2 )
    {
      digitalWrite(i, HIGH);
    }
  	delay(1000);
    for (int i = 2; i <= 11; i = i + 2 )
    {
      digitalWrite(i, LOW);
    }
  
  	for (int i = 3; i <= 11; i = i + 2 )
    {
      digitalWrite(i, HIGH);
    }
  	delay(1000);
    for (int i = 3; i <= 11; i = i + 2 )
    {
      digitalWrite(i, LOW);
    }
   }




