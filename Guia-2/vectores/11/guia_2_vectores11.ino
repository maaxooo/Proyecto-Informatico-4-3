#define echo 6
#define trig 7
void setup()
{
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(2);
  digitalWrite(trig, LOW);
  
  float tiempo = pulseIn(echo, HIGH);
  
  Serial.print("Objeto cercano a ");
  Serial.println(tiempo / 58.2);
}