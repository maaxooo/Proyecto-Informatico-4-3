#include<Servo.h>

#define PIR1 4
#define PIR2 5
#define sensor A1
#define luz 7

Servo servo1;
Servo servo2;

void setup()
{
  Serial.begin(9600);
  
  pinMode(PIR1, INPUT);
  pinMode(PIR2, INPUT);
  pinMode(sensor, INPUT);
  pinMode(luz, OUTPUT);
  
  servo1.attach(2);
  servo2.attach(3); 
  //servo1.write(180);
  //servo2.write(0);
  
}

void loop()
{
  Puertas();
  Iluminacion();
}

void Puertas()
{
  int count = 0;
  int Sensor1 = digitalRead(PIR1);
  int Sensor2 = digitalRead(PIR2);
  
  Serial.print("Sensor1: ");
  Serial.println(Sensor1);
  Serial.print("Sensor2: ");
  Serial.println(Sensor2);
  delay(1000);
  
  if (Sensor1 || Sensor2)
  {
    servo1.write(90);
  	servo2.write(90);
    delay(3000);
  }
  else
  {
   	servo1.write(0);
   	servo2.write(0); 
  }
}

void Iluminacion()
{
  int ldr = analogRead(sensor);
  Serial.println(ldr);
  if(ldr < 100)
  {
    Serial.println("x");
    digitalWrite(luz, HIGH);
  }
  else
  {
    digitalWrite(luz, LOW);
  }
}
