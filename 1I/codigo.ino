#define button 12

void setup()
{
  for (int i = 2; i <= 11; i = i + 1)
  {
    pinMode(i, OUTPUT);
  }
  
  pinMode(button, INPUT);
} 

bool active = true;

void loop()
{
  if (!digitalRead(button))
  {
    active = !active;
    delay(500);
  }
  
  if (active)
  {
   	for (int i = 2; i <= 11; i++ )
    {
      digitalWrite(i, HIGH);
      
      if (!digitalRead(button))
      {
        active = !active;
      }
      
      delay(100);
    }
    
    for (int i = 2; i <= 11; i++ )
    {
      digitalWrite(i, LOW);
    } 
  }  
}




