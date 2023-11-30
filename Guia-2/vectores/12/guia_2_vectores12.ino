#define led 3
#define boton 2
void setup()
{
  pinMode(led, OUTPUT);
  pinMode (boton, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int secuencia[] = {0, 0, 0, 0, 0};
  for(int i = 0; i < (sizeof(secuencia)/sizeof(int)); i++)
  {
   
    digitalWrite(led, HIGH);
    delay(1000);
    int estadoBot = digitalRead(boton);
    digitalWrite(led, LOW);
    secuencia[i] = estadoBot;
    delay(500);
    
  }
  
  Serial.print("[");
  for(int i = 0; i < (sizeof(secuencia)/sizeof(int)); i++)
  {
   
    Serial.print(secuencia[i]);
    
    if (i !=4)
    {
     
      Serial.print(", ");
    
    }
    else
    {
     
      Serial.println("]");
      
    }
  }
  delay(5000);
}