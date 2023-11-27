#define LedR 2
#define LedG 7
#define LedB 4

#define PotR A0
#define PotG A1
#define PotB A2

#define Button 8

void setup()
{
  pinMode(LedR, OUTPUT);
  pinMode(LedG, OUTPUT);
  pinMode(LedB, OUTPUT);
  
  pinMode(PotR, INPUT);
  pinMode(PotG, INPUT);
  pinMode(PotB, INPUT);
  
  pinMode(Button, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  if (!digitalRead(Button))
  {
    Serial.println("Tiene 10 segundos para configurar el color del led....");
    
    delay(10000);
    
    int valuePotR = map(analogRead(PotR), 0, 1023, 0, 255);
  	int valuePotG = map(analogRead(PotG), 0, 1023, 0, 255);
  	int valuePotB = map(analogRead(PotB), 0, 1023, 0, 255);
    
    analogWrite(LedR, valuePotR);
  	analogWrite(LedG, valuePotG);
  	analogWrite(LedB, valuePotB);
    
    Serial.print("El led está usando esta configuración de colores RGB: (");
    Serial.print(valuePotR);
    Serial.print("; ");
    Serial.print(valuePotG);
    Serial.print("; ");
    Serial.print(valuePotB);
    Serial.println(")");
  }

}