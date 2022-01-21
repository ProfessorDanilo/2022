/*******************************************************************************
*                       testabdo sensor de presença simples
*
*******************************************************************************/
/*Criado por Danilo Lima
 */
#define entrada A0
#define led 3



void setup() {
  pinMode(entrada, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {  
  if(analogRead(entrada)>500){
    analogWrite(led, 8);
  }
  else{analogWrite(led, 0);}
  delay(100);
}
