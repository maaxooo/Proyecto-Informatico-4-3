//Con ayuda de un botón y 3 led rgb lograr
//que cada vez que se toque el botón se apaguen
//todos los led y solo se prenda 1, cada vez que 
//se toque el botón cambiar de led prendido.

#define led1rojo 2
#define led1azul 3
#define led1verde 4

#define led2rojo 5
#define led2azul 6
#define led2verde 7

#define led3rojo 8
#define led3azul 9
#define led3verde 10

#define bottom 11

void setup()
{
  //led 1
  pinMode(led1rojo, OUTPUT);
  pinMode(led1azul, OUTPUT);
  pinMode(led1verde, OUTPUT);
  
  //led 2
  pinMode(led2rojo, OUTPUT);
  pinMode(led2azul, OUTPUT);
  pinMode(led2verde, OUTPUT);
  
  //led 3
  pinMode(led3rojo, OUTPUT);
  pinMode(led3azul, OUTPUT);
  pinMode(led3verde, OUTPUT);

}

void loop()
{
  
}