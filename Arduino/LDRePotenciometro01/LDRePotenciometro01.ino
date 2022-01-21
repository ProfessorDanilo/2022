/*******************************************************************************
*                          ___ A5 
*                         |
*    GND --- ^v^v10K^v^v ----- 5V
*    4 LEDS rosa nas portas digitais 3, 5, 6, 9
*    potenciometro
*    1->GND
*    2->A0
*    3->5V
*
*******************************************************************************/
/*Criado por Danilo Lima
 */
#define potenciometro A0
#define led1 3
#define led2 5
#define led3 6
#define led4 9
#define ldr A5
#define ledVerde 10



void setup() {
  pinMode(potenciometro, INPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(ledVerde, map(analogRead(ldr),100,1011,12,0));
  Serial.println(analogRead(potenciometro));
  analogWrite(led1,8);
  delay(analogRead(potenciometro)/3+50);
  analogWrite(led2,8);  
  analogWrite(led1,0);
  delay(analogRead(potenciometro)/3+50);
  analogWrite(led3,8);  
  analogWrite(led2,0);
  delay(analogRead(potenciometro)/3+50);
  analogWrite(led4,8);
  analogWrite(led3,0);
  delay(analogRead(potenciometro)/3+50);
  analogWrite(led4,0);
  
}
