#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11

void setup()
{
  for (int i = 2; i <= 11; i = i + 1)
  {
    pinMode(i, OUTPUT);
  }
} 



void loop()
   {
    for (int i = 2; i <= 11; i = i + 1 )
    {
      digitalWrite(i, HIGH);
	  delay(100);
    }
    for (int i = 2; i <= 11; i = i + 1 )
    {
      digitalWrite(i, LOW);
    }
   }




