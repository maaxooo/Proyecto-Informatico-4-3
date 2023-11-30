#define led_1 2
#define led_2 3
#define led_3 4
#define led_4 5
#define led_5 6
#define led_6 7
#define led_7 8
#define led_8 9
#define led_9 10
#define led_10 11

#define button 13

bool secuenciaBoton = true;
  
void setup() 
{
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);
  pinMode(led_6, OUTPUT);
  pinMode(led_7, OUTPUT);
  pinMode(led_8, OUTPUT);
  pinMode(led_9, OUTPUT);
  pinMode(led_10, OUTPUT);

  pinMode(button, INPUT_PULLUP);
  
}

void loop()
{
  bool lecturaBoton = digitalRead(button);
  
  if (secuenciaBoton){
  digitalWrite(led_1, HIGH);
  delay(50);
  
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  delay(50);

  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  delay(50);

  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  delay(50);

  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH);
  delay(50);
  
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH);
  delay(50);
  
  digitalWrite(led_6, LOW);
  digitalWrite(led_7, HIGH);
  delay(50);
  
  digitalWrite(led_7, LOW);
  digitalWrite(led_8, HIGH);
  delay(50);
  
  digitalWrite(led_8, LOW);
  digitalWrite(led_9, HIGH);
  delay(50);
  
  digitalWrite(led_9, LOW);
  digitalWrite(led_10, HIGH);
  delay(50);
  digitalWrite(led_10, LOW);
  }
  
  if (lecturaBoton == LOW){
    secuenciaBoton = !secuenciaBoton;
    delay(100);
  }
}