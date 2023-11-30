
int numeros[] = { 10 , 4 , 2 };
int temp = 0;
  
void setup()
{
  Serial.begin(9600);
  for (int i = 1 ; i < sizeof(numeros)/sizeof(int) ; i++)
  {
    
    for (int j = 0 ; j < sizeof(numeros)/sizeof(int) ; j++)
    {
      
      if (numeros[j]> numeros[j+1])
          {
            
            temp = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = temp;
            
          }//if
      
    }//for j
    
  }//for i
  
  
for (int i = 0 ; i < sizeof(numeros)/sizeof(int) ; i++)
 {
  
   Serial.print(numeros[i]);
   Serial.print(", ");
   
 }
  Serial.println("");
  
  
}//void


void loop()
{
 
}