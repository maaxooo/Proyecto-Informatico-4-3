//Con un potenciometro y un Buzzer generar 
//una gama de sonidos.
#define buzzer 2

#define potenciometro A05
void setup()
{
  
  pinMode(buzzer, OUTPUT);
  pinMode(potenciometro, INPUT);

}

void loop()
{
  int lecturaAnaloga = analogRead(potenciometro);
  
  // Utilizando la frecuencia de las notas en Hz se cambia la escala
  // a las notas fa y sol
  int frecuencia = map(lecturaAnaloga, 0, 1023, 21, 6271);
    
  tone(buzzer, frecuencia); 
  
}