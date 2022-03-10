/*efeito de iluminação sequencial
 * usando array
 */
 byte ledPin[]={4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
 int ledDelay(65);
 int direcao=1;
 int currentLED=0;
 unsigned long changeTime;

 void setup(){
  for(int x=0; x<10; x++){
    pinMode(ledPin[x], OUTPUT);
  }
  changeTime=millis();
 }

void loop(){
  if((millis()-changeTime) > ledDelay){
    changeLed2();
    changeTime = millis();
  }
}


void changeLed(){
  for(int x=0; x<10; x++){
    digitalWrite(ledPin[x], LOW);
  }
  digitalWrite(ledPin[currentLED],HIGH);
  currentLED+=direcao;
  if(currentLED==9) direcao=-1;
  if(currentLED==0) direcao=1;
}


//abaixo uma outra versão que eu criei



void changeLed2(){
  for(int x=0; x<10; x++){
    digitalWrite(ledPin[x], HIGH);
    delay(ledDelay);
  }
  for(int x=0; x<10; x++){
    digitalWrite(ledPin[x], LOW);
    delay(ledDelay);
  }
  for(int x=9; x>=0; x--){
    digitalWrite(ledPin[x], HIGH);
    delay(ledDelay);
  }
  for(int x=9; x>=0; x--){
    digitalWrite(ledPin[x], LOW);
    delay(ledDelay);
  }
  
}
