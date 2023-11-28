void setup()
{
  Serial.begin(9600);
  
  int Array[] = { 10, 4 , 2};
  
  int Cantidad = sizeof(Array)/sizeof(int);
  int Array2[Cantidad];
  int Suma = 0;

  for (int i = 0; i < Cantidad; i++)
  {
    int temp = 100;
    int temp2 = 0;
    for (int i = 0; i < Cantidad; i++)
    {
	  if (Array[i] < temp)
      {
        temp = Array[i];
  		temp2 = i;
      }
    }
    Array[temp2] = 100;
    Array2[i] = temp;
  }
  
  Serial.print("lista: ");
  for (int i = 0; i < Cantidad; i++)
  {
    Serial.print(Array2[i]);
    Serial.print(", ");
  }
  Serial.println("");
}

void loop()
{

}