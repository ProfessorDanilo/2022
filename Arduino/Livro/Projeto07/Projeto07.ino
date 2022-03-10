//Projeto 7: lâmpada pulsante
int ledPin=11;
float sinVal;
int ledVal;

void setup(){
  pinMode(ledPin, OUTPUT);
}
/*fiz algumas mudanças pois achei que ficaria
 * visualmente mais interessante
 */
void loop(){
  for(int x=0; x<180; x++){
    sinVal=(sin(x*3.1416/180))*(sin(x*3.1416/180));
    ledVal = int(sinVal*50);
    analogWrite(ledPin, ledVal);
    delay(5);
  }
}
