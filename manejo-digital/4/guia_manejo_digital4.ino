// Simular el semáforo de un tren con 2 led y 
// un Buzzer para el sonido.
#define led1    2
#define led2    3
#define buzzer  4

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  
  //tone(buzzer, 261, 600);
  
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
}