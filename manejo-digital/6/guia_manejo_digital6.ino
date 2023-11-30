//Con un botón al mantenerlo presionado lograr 
//iniciar una secuencia de sonidos de
//prendido y apagado estilo alarma.

#define buzzer 2
#define bottom 4

void setup()
{
  pinMode(bottom, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int estado = digitalRead(bottom);
  Serial.println(estado);
  
  if(estado != 1) //== (!estadoB)
  {
    tone(buzzer, 500, 300);
    noTone(buzzer);
    tone(buzzer,400, 300);
    
  }
  else
  {
  	noTone(buzzer);
  }
}