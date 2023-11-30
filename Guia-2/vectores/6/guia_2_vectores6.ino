
int numeros[] = {2, 6, 10, 11};
int multiplos[] = {1, 2, 3, 4, 5};

void setup()
{
  Serial.begin(9600);
  for (int i = 0 ; i < sizeof(numeros)/sizeof(int) ; i++)
  {
    
   for (int j = 0 ; j < sizeof(multiplos)/sizeof(int) ; j++)
   {
     
    Serial.println(numeros[i]*multiplos[j]);
    delay(200);
     
   }
    
  }
  
}

void loop()
{
  
}