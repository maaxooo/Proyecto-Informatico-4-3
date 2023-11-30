#define led 2

int secuencia[] = { 1, 0 ,0 ,1, 1, 0, 1,1};

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
  for (int i = 0 ; i < sizeof(secuencia)/sizeof(int) ; i++)
  {
    
    digitalWrite(led, secuencia[i]);
   Serial.println(secuencia[i]);
   delay(500);
    
  }
}

void loop()
{
 
}