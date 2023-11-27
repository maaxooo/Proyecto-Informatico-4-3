
#define LDR A0
#define TPM A1

#define LedR 3
#define LedG 6
#define LedB 5

void setup()
{
  pinMode(LDR, INPUT);
  pinMode(TPM, INPUT);
  
  pinMode(LedR, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedB, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  	int ldrValue = (analogRead(LDR)/1023.0) * 5;
  	Serial.println(ldrValue);

  	int tpmValue = (5.0 /1024 * analogRead(TPM)) * 100 - 50 ;
	Serial.println(tpmValue); 

	if (tpmValue < 18 && ldrValue <= 2)
    {
         digitalWrite(LedR, LOW);
         digitalWrite(LedG, LOW);
         digitalWrite(LedB, HIGH);
    }
	else if (tpmValue >= 18 && tpmValue <= 90 && ldrValue <= 2)
    {
         digitalWrite(LedR, LOW);
         digitalWrite(LedG, HIGH);
         digitalWrite(LedB, LOW);             
    }
	else if (tpmValue > 90 && ldrValue <= 2)
    {
         digitalWrite(LedR, HIGH);
         digitalWrite(LedG, LOW);
         digitalWrite(LedB, LOW);             
    }
  	else
    {
      	 digitalWrite(LedR, LOW);
         digitalWrite(LedG, LOW);
         digitalWrite(LedB, LOW);
    }
  
	delay(1000);
}