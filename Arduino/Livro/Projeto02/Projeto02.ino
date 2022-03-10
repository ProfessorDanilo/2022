/*código morse*/
int ledPin = 10;
void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
  //S em código morse: três pontos
  for(int i = 0; i<3; i++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);    
  }

  //O em código morse: três traços
  for(int i = 0; i<3; i++){
    digitalWrite(ledPin,HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  }

  //S novamente: três ponto
  for(int i = 0; i<3; i++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin,LOW);
    delay(100);
  }

  //para não confundir, espera 5 segundos
  delay(5000);
}
