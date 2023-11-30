//a) Simular el ciclo de encendido de luces de un semáforo, 
//tanto el del auto como el peatonal
//al mismo tiempo.

#define ledAutosRojo         2
#define ledAutosAzul         3
#define ledAutosVerde        4

#define ledPersonasRojo      5
#define ledPersonasAzul  6
#define ledPersonasVerde     7

void setup()
{
  //autos
  pinMode(ledAutosRojo, OUTPUT);
  pinMode(ledAutosAzul, OUTPUT);
  pinMode(ledAutosVerde, OUTPUT);
  
  //personas
  pinMode(ledPersonasRojo, OUTPUT);
  pinMode(ledPersonasAzul, OUTPUT);
  pinMode(ledPersonasVerde, OUTPUT);
}

void loop()
{
  // //////////////////autos//////////////////
  
  //prender y apagar rojo
  digitalWrite(ledAutosRojo, HIGH);
  delay(1000);
  digitalWrite(ledAutosRojo, LOW);
  
  //prender y apagar amarillo
  digitalWrite(ledAutosVerde, HIGH);
  digitalWrite(ledAutosRojo, HIGH);
  
  delay(1000);
  
  digitalWrite(ledAutosVerde, LOW);
  digitalWrite(ledAutosRojo, LOW);
  digitalWrite(ledAutosAzul, LOW);
  
  // prender y apagar verde autos
  digitalWrite(ledAutosVerde, HIGH);
  delay(1000);
  digitalWrite(ledAutosRojo, LOW);
  digitalWrite(ledAutosAzul, LOW);
  
  
  
  
  // /////////personas////////////////////
  
  
  
   //prender y apagar rojo
  digitalWrite(ledPersonasRojo, HIGH);
  delay(1000);
  digitalWrite(ledPersonasRojo, LOW);
  
  //prender y apagar amarillo
  digitalWrite(ledPersonasVerde, HIGH);
  digitalWrite(ledPersonasRojo, HIGH);
  
  delay(1000);
  
  digitalWrite(ledPersonasVerde, LOW);
  digitalWrite(ledPersonasRojo, LOW);
  digitalWrite(ledPersonasAzul, LOW);
  
  // prender y apagar verde autos
  digitalWrite(ledPersonasVerde, HIGH);
  delay(1000);
  digitalWrite(ledPersonasVerde, LOW);
  digitalWrite(ledPersonasAzul, LOW);
  
}