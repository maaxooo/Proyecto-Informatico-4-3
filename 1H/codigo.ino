#define button 5

int led1[] = {2, 4, 3};
int color = 0;

void setup()
{
  for (int i = 0; i <= 3; i++)
  {
    pinMode(led1[i], OUTPUT);
  }
}

void loop()
{
  if (!digitalRead(button))
  {
    
    
    if (color < 8)
    {
      color = color + 1;
    }
    else
    {
      color = 1;
    }
      
    delay(500);
  }
  
  if (color == 1)
  {
    digitalWrite(led1[0], HIGH); //Rojo
  }
  if (color == 2)
  {
    digitalWrite(led1[0], LOW); //Cian
    digitalWrite(led1[1], HIGH);
    digitalWrite(led1[2], HIGH);
  }
  if (color == 3)
  {
    digitalWrite(led1[0], LOW); //Verde
    digitalWrite(led1[2], LOW);
  }
  if (color == 4)
  {
    digitalWrite(led1[1], LOW); //Magenta
    digitalWrite(led1[0], HIGH);
    digitalWrite(led1[2], HIGH);
  }
  if (color == 5)
  {
    digitalWrite(led1[0], LOW); //Azul
  }
  if (color == 6)
  {
    digitalWrite(led1[0], HIGH); //Blanco
    digitalWrite(led1[1], HIGH);
  }
  if (color == 7)
  {
    digitalWrite(led1[2],LOW); //Amarillo
  }
  if (color == 8)
  {
    digitalWrite(led1[0],LOW); 
    digitalWrite(led1[1],LOW); 
    digitalWrite(led1[2],LOW); 
  }
}