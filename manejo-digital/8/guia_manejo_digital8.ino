//Con la ayuda de un botón, cada vez que se toque,
//cambiar el color de un led rgb en esta
//secuencia de colores, rojo, cian, verde,
//magenta, azul, blanco, amarillo.
#define led_R 2
#define led_G 4
#define led_B 3

#define boton_up 5

int cambioLed = 1;
bool presionado = false;

void setup()
{
  // Led
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);
  
  // Botón
  pinMode(boton_up, INPUT_PULLUP);
}

void loop()
{
  int estadoBoton = digitalRead(boton_up);

  if (estadoBoton == LOW && !presionado)
  {
    presionado = true;

    // Apagar todos los LED
    digitalWrite(led_R, LOW);
    digitalWrite(led_G, LOW);
    digitalWrite(led_B, LOW);

    // Color rojo
    if (cambioLed == 1) {
      digitalWrite(led_R, HIGH);
      cambioLed = 2;
    }
    
    // Color cian
    else if (cambioLed == 2) {
      digitalWrite(led_G, HIGH);
      digitalWrite(led_B, HIGH);
      cambioLed = 3;
    }
    
    // Color verde
    else if (cambioLed == 3) {
      digitalWrite(led_G, HIGH);
      cambioLed = 4;
    }
    
    // Color magenta
    else if (cambioLed == 4) {
      digitalWrite(led_R, HIGH);
      digitalWrite(led_B, HIGH);
      cambioLed = 5;
    }    
    
    // Color azul
    else if (cambioLed == 5) {
      digitalWrite(led_B, HIGH);
      cambioLed = 6;    
    }
    
    // Color blanco
    else if (cambioLed == 6) {
      digitalWrite(led_R, HIGH);
      digitalWrite(led_G, HIGH);
      digitalWrite(led_B, HIGH);
      cambioLed = 7;
    }    
  
    // Color amarillo
    else if (cambioLed == 7) {
      digitalWrite(led_R, HIGH);
      digitalWrite(led_G, HIGH);
      cambioLed = 1;
    }    
  }

  if (estadoBoton == HIGH && presionado)
  {
    presionado = false;
  }
}
