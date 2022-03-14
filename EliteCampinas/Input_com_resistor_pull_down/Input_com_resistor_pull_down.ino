int botao = 3;
int led = 2;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  if(digitalRead(botao) == 1){
    digitalWrite(led, HIGH);
  }
  else{digitalWrite(led, LOW);}
}
