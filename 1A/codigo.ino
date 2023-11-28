#define greenLED 3
#define yellowLED 9
#define redLED 5

#define green2LED 11
#define red2LED 10

void setup()
{
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  
  pinMode(green2LED, OUTPUT);
  pinMode(red2LED, OUTPUT);
}

void loop()
{
  digitalWrite(greenLED, HIGH);
  digitalWrite(red2LED, HIGH);
  delay(5000);
  
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(2000);
  
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  digitalWrite(red2LED, LOW);
  digitalWrite(green2LED, HIGH);
  delay(3000);
  
  digitalWrite(green2LED, LOW);
  digitalWrite(red2LED, HIGH);
  delay(1000);
  digitalWrite(red2LED, LOW);
  delay(1000);
  digitalWrite(red2LED, HIGH);
  delay(1000);
  digitalWrite(red2LED, LOW);
  delay(1000);
  digitalWrite(red2LED, HIGH);
  delay(1000);
  digitalWrite(red2LED, LOW);
  delay(1000);
  digitalWrite(red2LED, HIGH);
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(2000);
  digitalWrite(yellowLED, LOW);
}