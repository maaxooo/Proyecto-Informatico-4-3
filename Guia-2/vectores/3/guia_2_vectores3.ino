
float numeros[] = {5.4 , 5.39 , 5.38 , 5.31 , 5.21 , 5.03 , 4.45 , 3.95 , 2.6 , 1.49  };
float mayor = numeros[0];
void setup()
{
  Serial.begin(9600);
  for (int i = 0 ; i < sizeof(numeros)/sizeof(numeros[0]) ; i++)
  {
    
    if (numeros[i] > mayor)
    {
      
     mayor = numeros[i]; 
      
    }//if
    
  }//for
  Serial.print(mayor);
  
}

void loop()
{
  
}

