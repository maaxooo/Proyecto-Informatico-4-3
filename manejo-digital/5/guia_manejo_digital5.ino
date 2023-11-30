// e) Prender 2 led RGB de tal manera que uno 
//quede prendido y otro apagado y muestren
//cada uno cuando prenda esta seria de colores,
//rojo, cian, verde, magenta, azul, blanco,
//amarillo

//led 1
#define led1rojo   0
#define led1azul   1
#define led1verde  2

//led 2
#define led2rojo   3 
#define led2azul   4  
#define led2verde  5

void setup()
{
  pinMode(led1rojo, OUTPUT);
  pinMode(led1azul, OUTPUT);
  pinMode(led1verde, OUTPUT);
  pinMode(led2rojo, OUTPUT);
  pinMode(led2azul, OUTPUT);
  pinMode(led2verde, OUTPUT);
  
}

void loop()
{
  ////////// colores y apagado led 1/////////
  	// rojo
  digitalWrite(led1rojo, HIGH);
  delay(500);
  digitalWrite(led1rojo, LOW);
  
    // cian
  
  digitalWrite(led1verde, HIGH);
  digitalWrite(led1azul, HIGH);
  delay(500);
  digitalWrite(led1verde, LOW);
  digitalWrite(led1azul, LOW);
  
    // verde
  digitalWrite(led1verde, HIGH);
  delay(500);
  digitalWrite(led1verde, LOW);
  
    // magenta
  digitalWrite(led1azul, HIGH);
  digitalWrite(led1rojo, HIGH);
  delay(500);
  digitalWrite(led1azul, LOW);
  digitalWrite(led1rojo, LOW);
  
    // azul
  digitalWrite(led1azul, HIGH);
  delay(500);
  digitalWrite(led1azul, LOW);
  
    // blanco
  digitalWrite(led1rojo, HIGH);
  digitalWrite(led1azul, HIGH);
  digitalWrite(led1verde, HIGH);
  delay(500);
  digitalWrite(led1rojo, LOW);
  digitalWrite(led1azul, LOW);
  digitalWrite(led1verde, LOW);
  
    // amarillo
  digitalWrite(led1rojo, HIGH);
  digitalWrite(led1verde, HIGH);
  delay(500);
  digitalWrite(led1rojo, LOW);
  digitalWrite(led1verde, LOW);

  ////////// colores y apagado led 2/////////
  	// rojo
  digitalWrite(led2rojo, HIGH);
  delay(500);
  digitalWrite(led2rojo, LOW);
  
    // cian
  
  digitalWrite(led2verde, HIGH);
  digitalWrite(led2azul, HIGH);
  delay(500);
  digitalWrite(led2verde, LOW);
  digitalWrite(led2azul, LOW);
  
    // verde
  digitalWrite(led2verde, HIGH);
  delay(500);
  digitalWrite(led2verde, LOW);
  
    // magenta
  digitalWrite(led2azul, HIGH);
  digitalWrite(led2rojo, HIGH);
  delay(500);
  digitalWrite(led2azul, LOW);
  digitalWrite(led2rojo, LOW);
  
    // azul
  digitalWrite(led2azul, HIGH);
  delay(500);
  digitalWrite(led2azul, LOW);
  
    // blanco
  digitalWrite(led2rojo, HIGH);
  digitalWrite(led2azul, HIGH);
  digitalWrite(led2verde, HIGH);
  delay(500);
  digitalWrite(led2rojo, LOW);
  digitalWrite(led2azul, LOW);
  digitalWrite(led2verde, LOW);
  
    // amarillo
  digitalWrite(led2rojo, HIGH);
  digitalWrite(led2verde, HIGH);
  delay(500);
  digitalWrite(led2rojo, LOW);
  digitalWrite(led2verde, LOW);

}