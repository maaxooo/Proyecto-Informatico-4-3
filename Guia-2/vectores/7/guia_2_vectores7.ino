#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6

int pines[] = {2, 3, 4, 5, 6};

void setup()
{
  
  for (int i = 0 ; i < sizeof(pines)/sizeof(int) ; i++)
  {
    pinMode(pines[i], OUTPUT);
  }
  
  for (int i = 0 ; i < sizeof(pines)/sizeof(int) ; i++)
  {
    
   digitalWrite(pines[i], 1);
    delay(300);
    
  }
  
  
}

void loop()
{
  
}