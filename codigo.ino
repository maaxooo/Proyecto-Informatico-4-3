#define Led1_R 13
#define Led1_G 12
#define Led1_B 8

#define Led2_R 11
#define Led2_G 9
#define Led2_B 10

#define Led3_R 7
#define Led3_G 2
#define Led3_B 4

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
}

void loop()
{
	analogWrite(Led1_R, 255);
  
  	delay(2000);
  
  	analogWrite(Led1_R, 0);
  
  	digitalWrite(Led2_R, HIGH);
  	digitalWrite(Led2_B, HIGH);
  
  	delay(2000);
  
  	digitalWrite(Led2_R, LOW);
  	digitalWrite(Led2_B, LOW);
  	
  	analogWrite(Led3_G, 255);
  	analogWrite(Led3_B, 255);
  
  	delay(2000);
  
  	analogWrite(Led3_G, 0);
  	analogWrite(Led3_B, 0);
}