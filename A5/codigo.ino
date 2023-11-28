void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int Array[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
  int Array2[] = { 0, 1 ,0 ,1, 0, 0, 1,0};

  for (int i = 0; i < sizeof(Array)/sizeof(int); i++)
  {

    digitalWrite(7, Array[i]);
    digitalWrite(8, Array2[i]);
    delay(1000);
  }
}