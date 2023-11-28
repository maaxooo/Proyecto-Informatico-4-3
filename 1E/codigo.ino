int led1[] = {2, 4, 3};
int led2[] = {5, 7, 6};

void setup()
{
  for (int i = 0; i <= 3; i++)
  {
    pinMode(led1[i], OUTPUT);
    pinMode(led2[i], OUTPUT);
  }
}

void loop()
{
  digitalWrite(led1[0], HIGH); //Rojo
  delay(1000);
  digitalWrite(led1[0], LOW); //Cian
  digitalWrite(led1[1], HIGH);
  digitalWrite(led1[2], HIGH);
  delay(1000);
  digitalWrite(led1[0], LOW); //Verde
  digitalWrite(led1[2], LOW);
  delay(1000);
  digitalWrite(led1[1], LOW); //Magenta
  digitalWrite(led1[0], HIGH);
  digitalWrite(led1[2], HIGH);
  delay(1000);
  digitalWrite(led1[0], LOW); //Azul
  delay(1000);
  digitalWrite(led1[0], HIGH); //Blanco
  digitalWrite(led1[1], HIGH);
  delay(1000);
  digitalWrite(led1[2],LOW); //Amarillo
  delay(1000);
  digitalWrite(led1[0],LOW); 
  digitalWrite(led1[1],LOW); 
  digitalWrite(led1[2],LOW); 
  
  
  digitalWrite(led2[0], HIGH); //Rojo
  delay(1000);
  digitalWrite(led2[0], LOW); //Cian
  digitalWrite(led2[1], HIGH);
  digitalWrite(led2[2], HIGH);
  delay(1000);
  digitalWrite(led2[0], LOW); //Verde
  digitalWrite(led2[2], LOW);
  delay(1000);
  digitalWrite(led2[1], LOW); //Magenta
  digitalWrite(led2[0], HIGH);
  digitalWrite(led2[2], HIGH);
  delay(1000);
  digitalWrite(led2[0], LOW); //Azul
  delay(1000);
  digitalWrite(led2[0], HIGH); //Blanco
  digitalWrite(led2[1], HIGH);
  delay(1000);
  digitalWrite(led2[2],LOW); //Amarillo
  delay(1000);
  digitalWrite(led2[0],LOW); 
  digitalWrite(led2[1],LOW); 
  digitalWrite(led2[2],LOW);

}