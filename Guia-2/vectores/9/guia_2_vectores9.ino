#define buzz 5

int a = 0;
int b = 0;
int vector[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void setup()
{
  pinMode(buzz, OUTPUT);
  
  for (int i = 0 ; i < 10 ; i++)
  {
   
    a = random(1, 10);
    vector[i] = a;
    
  }
  Serial.begin(9600);
}

void loop()
{
  
  
  for (int i = 0 ; i < sizeof(vector)/sizeof(int) ; i++)
  {
   
    Serial.println(vector[i]);
   
  }//for
  
}