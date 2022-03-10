/*efeito de iluminação sequencial
 * usando array
 */
 byte ledPin[]={4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
 int ledDelay;
 int direcao=1;
 int currentLED=0;
 unsigned long changeTime;
 int potPin = 2;

 void setup(){
  for(int x=0; x<10; x++){
    pinMode(ledPin[x], OUTPUT);
  }
  changeTime=millis();
  //Serial.begin(9600);//parta verificar valor da entrada analógica
 }

void loop(){  
  //modifiquei a linha de baixo pois achei legal usar a função map
  ledDelay=map(analogRead(potPin),0,1023,10,65); /*
  Serial.print("porta analógica: ");
  Serial.println(analogRead(potPin));
  Serial.println("");
  Serial.print("resultado da função map(): ");
  Serial.println(ledDelay);
  Serial.println("");
  Serial.println("");
  */
  if((millis() - changeTime) > ledDelay){
    changeLed();
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
