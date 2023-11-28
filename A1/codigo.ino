void setup()
{
  Serial.begin(9600);
  
  int Array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  
  int Cantidad = sizeof(Array)/sizeof(int);
  int Suma = 0;

  for (int i = 0; i < Cantidad; i++)
  {
    Suma = Suma + Array[i];
    
  }
  
  Serial.print("El promedio es: ");
  Serial.println(Suma/Cantidad);
}

void loop()
{

}