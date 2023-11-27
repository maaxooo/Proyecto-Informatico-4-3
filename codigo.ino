#define Led1_R 13
#define Led1_G 12
#define Led1_B 8

#define Led2_R 11
#define Led2_G 9
#define Led2_B 10

#define Led3_R 7
#define Led3_G 2
#define Led3_B 4

#define Button 5

#define Pot A0

void setup()
{
	pinMode(Led1_R, OUTPUT);
  	pinMode(Led1_G, OUTPUT);
  	pinMode(Led1_B, OUTPUT);
  	
 	pinMode(Led2_R, OUTPUT);
  	pinMode(Led2_G, OUTPUT);
  	pinMode(Led2_B, OUTPUT);
  
  	pinMode(Led3_R, OUTPUT);
  	pinMode(Led3_G, OUTPUT);
  	pinMode(Led3_B, OUTPUT);
  
  	pinMode(Button, INPUT);
  
  	pinMode(Pot, INPUT);
  
  	Serial.begin(9600);
}

void loop()
{
	if (digitalRead(Button))
    {
     	analogWrite(Led1_R, 255);
  
  		delay(map(analogRead(Pot), 0, 1023, 0, 5000)); 
    }
  	else
    {
      digitalWrite(Led1_R, LOW);
      digitalWrite(Led1_G, LOW);
      digitalWrite(Led1_B, LOW);
      
      digitalWrite(Led2_R, LOW);
      digitalWrite(Led2_G, LOW);
      digitalWrite(Led2_B, LOW);
      
      digitalWrite(Led3_R, LOW);
      digitalWrite(Led3_G, LOW);
      digitalWrite(Led3_B, LOW);
    }
  
  	
  	if (digitalRead(Button))
    {
     	analogWrite(Led1_R, 0);
  
        digitalWrite(Led2_R, HIGH);
        digitalWrite(Led2_B, HIGH);

        delay(map(analogRead(Pot), 0, 1023, 0, 5000));
    }
  	else
    {
      digitalWrite(Led1_R, LOW);
      digitalWrite(Led1_G, LOW);
      digitalWrite(Led1_B, LOW);
      
      digitalWrite(Led2_R, LOW);
      digitalWrite(Led2_G, LOW);
      digitalWrite(Led2_B, LOW);
      
      digitalWrite(Led3_R, LOW);
      digitalWrite(Led3_G, LOW);
      digitalWrite(Led3_B, LOW);
    }
  
  	if (digitalRead(Button))
    {
     	digitalWrite(Led2_R, LOW);
        digitalWrite(Led2_B, LOW);

        analogWrite(Led3_G, 255);
        analogWrite(Led3_B, 255);

        delay(map(analogRead(Pot), 0, 1023, 0, 5000)); 
    }
  	else
    {
      digitalWrite(Led1_R, LOW);
      digitalWrite(Led1_G, LOW);
      digitalWrite(Led1_B, LOW);
      
      digitalWrite(Led2_R, LOW);
      digitalWrite(Led2_G, LOW);
      digitalWrite(Led2_B, LOW);
      
      digitalWrite(Led3_R, LOW);
      digitalWrite(Led3_G, LOW);
      digitalWrite(Led3_B, LOW);
    }
  	
  	if (digitalRead(Button))
    {
     	analogWrite(Led3_G, 0);
  		analogWrite(Led3_B, 0); 
    }
  	else
    {
      digitalWrite(Led1_R, LOW);
      digitalWrite(Led1_G, LOW);
      digitalWrite(Led1_B, LOW);
      
      digitalWrite(Led2_R, LOW);
      digitalWrite(Led2_G, LOW);
      digitalWrite(Led2_B, LOW);
      
      digitalWrite(Led3_R, LOW);
      digitalWrite(Led3_G, LOW);
      digitalWrite(Led3_B, LOW);
    }
}