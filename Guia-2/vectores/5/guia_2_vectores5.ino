#define led 2
#define led2 3
int secuencia[] = { 1, 0 ,0 ,1, 1, 0, 1,1};
int secuencia2[] = { 0, 1 ,0 ,1, 0, 0, 1,0};

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
  for (int i = 0 ; i < sizeof(secuencia)/sizeof(int) ; i++)
  {
    
    digitalWrite(led, secuencia[i]);
    digitalWrite(led2, secuencia2[i]);
   Serial.println(secuencia2[i]);
   delay(500);
    
  }
}

void loop()
{
 
}