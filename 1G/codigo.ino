#define Button 5

int leds[3][3] = {{13, 12, 8}, {11, 9, 10}, {7, 2, 4}};
int ledRandom = 0;

void setup()
{
  	pinMode(Button, INPUT);
  
  	for (int i = 0; i < 3; i++)
    {
      for (int x = 0; x < 3; x++)
      {
        pinMode(leds[i][x], OUTPUT);
      }
    }

  	
}

void loop()
{  
	if (!digitalRead(Button))
    {
      if (ledRandom < 2)
      {
       	ledRandom = ledRandom+1;
      }
      else
      {
        ledRandom = 0;
      }
      
      for (int i = 0; i < 3; i++)
      {
        for (int x = 0; x < 3; x++)
        {
          digitalWrite(leds[i][x], LOW);
        }
      }

      for (int i = 0; i < 3; i++)
      {
        digitalWrite(leds[ledRandom][i], HIGH); 
      }
    	
      delay(1000);
    }
  
 	
  	
  	
}