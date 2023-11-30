//Con ayuda de un potenciómetro 
//cambiar la velocidad de parpadeo de 2 led rgb en color
//magenta y amarillo

#define led1rojo 3
#define led1azul A1
#define led1verde A2

#define led2rojo A3
#define led2azul A4
#define led2verde A5

#define potenciometro A0


void setup()
{
  pinMode(led1rojo, OUTPUT);
  pinMode(led1azul, OUTPUT);
  pinMode(led1verde, OUTPUT);
  
  pinMode(led2rojo, OUTPUT);
  pinMode(led2azul, OUTPUT);
  pinMode(led2verde, OUTPUT);
  
  pinMode(potenciometro, INPUT);
}

void loop()
{
  int lecturaAnal = analogRead(potenciometro);
  int nuevoValor = map(lecturaAnal, 0, 1023, 5, 1000);
  
  analogWrite(led1rojo, 255);
  analogWrite(led1azul, 255);
  analogWrite(led2rojo, 255);
  analogWrite(led2verde, 255);
  delay(nuevoValor);
  analogWrite(led1rojo, 0);
  analogWrite(led1azul, 0);
  analogWrite(led2rojo, 0);
  analogWrite(led2verde, 0);
  delay(nuevoValor);
}