void setup()
{
  Serial.begin(9600);
  
  float Array[] = {5.4 , 5.39 , 5.38 , 5.31 , 5.21 , 5.03 , 4.45 , 3.95 , 2.6 , 1.49  };
  int Cantidad = sizeof(Array)/sizeof(int);

  float temp = 0;
  for (int i = 0; i < Cantidad; i++)
  {
    
    if (Array[i] > temp)
    {
      temp = Array[i];
    }
  }
  
  Serial.print("El numero mas grande es: ");
  Serial.println(temp);
}

void loop()
{

}