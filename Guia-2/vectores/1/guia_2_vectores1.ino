int media = 0;
int array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int n = 0;
void setup()
{
  
  Serial.begin(9600);
  for (int i = 0 ; i < sizeof(array)/sizeof(int) ; i++)
  {
    n = n + array[i];
  }
  media = n/10;
}  



void loop()
{
  Serial.println(media);
  delay(500);
}