#include <LiquidCrystal.h>

//LiquidCrystal(rs, enable, d4, d5, d6, d7)

LiquidCrystal lcd(5, 6, 8, 9, 10, 11);

#define buzz 3
#define button 2

bool active = false;

void setup()
{
  lcd.begin(16, 2);
  
  pinMode(buzz, OUTPUT);
  pinMode(button, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(button));
  if (!digitalRead(button))
  {
    active = !active;
    delay(500);
  }
  
  if (active)
  {
    lcd.clear();
    
    for (int i = 0; i < 10; i++)
    {
      lcd.setCursor( 2  , 0);
      lcd.print(random(1, 6));
      lcd.setCursor( 8  , 0);
      lcd.print(random(1, 6));
      delay(100);
      lcd.clear();
    }

    int rnd1 = random(1, 6);
    int rnd2 = random(1, 6);

    lcd.setCursor( 2  , 0);
    lcd.print(rnd1);
    lcd.setCursor( 8  , 0);
    lcd.print(rnd2);

    if ((rnd1 + rnd2) == 7)
    {
      lcd.setCursor( 4  , 1);
      lcd.print("WIN");
      digitalWrite(buzz, HIGH);
      delay(3000);
      digitalWrite(buzz, LOW);
    }
    
    active = false;
  }
}