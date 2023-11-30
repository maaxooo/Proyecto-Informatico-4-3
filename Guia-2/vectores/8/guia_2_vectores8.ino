#define rojo 6
#define azul 5
#define verde 3

int pines[] = {3, 5, 6};
int L1[] = {122 , 234 , 21};
int L2[] = {33  , 53  , 155};
int L3[] = {200 , 255 , 12};
int* colores[] = {L1, L2, L3};

void setup()
{
    for (int i = 0 ; i < sizeof(pines)/sizeof(int) ; i++)
  {
    pinMode(pines[i], OUTPUT);
  }

  for (int i = 0 ; i < sizeof(colores)/sizeof(int) ; i++)
  {
    
   analogWrite(rojo, colores[i][0]);
    analogWrite(azul, colores[i][1]);
    analogWrite(verde, colores[i][2]);
    delay(500);
    
  }
  
}

void loop()
{
  
}