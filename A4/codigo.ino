void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  int Array[] = { 1, 0 ,0 ,1, 1, 0, 1, 1};

  for (int i = 0; i < sizeof(Array)/sizeof(int); i++)
  {

    digitalWrite(7, Array[i]);
    delay(1000);
  }
}