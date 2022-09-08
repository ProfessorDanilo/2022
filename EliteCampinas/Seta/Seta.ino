/* LED esquerdo -> digital 2
   LED direito -> digital 3
   botão led esquerdo -> 4
   botão led direito -> 5
*/

int LEDesquerdo = 2, LEDdireito = 3, botaoEsquerdo = 4, botaoDireito = 5;
int seta = 0; //se 1 liga a esquerda, se 2 liga a direita
void setup() {
  Serial.begin(9600);
  pinMode(LEDesquerdo, OUTPUT);
  pinMode(LEDdireito, OUTPUT);
  pinMode(botaoEsquerdo, INPUT_PULLUP);
  pinMode(botaoDireito, INPUT_PULLUP);
}

void loop() {
  Serial.println(digitalRead(botaoEsquerdo));
  Serial.println(digitalRead(botaoDireito));  
  if(!digitalRead(botaoEsquerdo)){
    seta = 1;
  }  
  if(!digitalRead(botaoDireito)){
    seta = 2;
  }  
  delay(300);
  if(seta == 1){
    digitalWrite(LEDesquerdo, HIGH);
    delay(400);
    digitalWrite(LEDesquerdo, LOW);
  }
  if(seta == 2){
    digitalWrite(LEDdireito, HIGH);
    delay(400);
    digitalWrite(LEDdireito, LOW);
  }
}
