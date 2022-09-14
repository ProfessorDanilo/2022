int buzer = 2, ValorAnalogico = 1000, ValorDigital = 1;
int portaDo = A0, portaRe = A1, portaMi = A2,
    portaFa = A3, portaSol = A4,
    portaLa = A5, portaSi = 3;
//notas (frequências)
int notaDo = 264, notaRe = 297, notaMi = 330,
    notaFa = 352, notaSol = 396,
    notaLa = 440, notaSi = 495;
//piezo
int portaPiezo = 9;
//duração da nota
int duracao = 200;
void setup()
{
  pinMode(portaDo, INPUT);
  pinMode(portaRe, INPUT);
  pinMode(portaMi, INPUT);
  pinMode(portaFa, INPUT);
  pinMode(portaSol, INPUT);
  pinMode(portaLa, INPUT);
  pinMode(portaSi, INPUT);
  pinMode(portaPiezo, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  Serial.println(analogRead(portaDo));
  Serial.println(analogRead(portaSi));//note que a porta Si é digital. O correto é digitalRead(portaSi)
  if (analogRead(portaDo) < ValorAnalogico) {
    tone(buzer, notaDo, 200);
  }
  delay(10);//sugiro deixar somente um delay. Pode deletar esta linha.

  if (analogRead(portaRe) < ValorAnalogico) {
    tone(buzer, notaRe, 200);//sugiro que mude 200 por duracao
  }
  delay(10);//pode deletar esta linha também

  if (analogRead(portaMi) < ValorAnalogico) {
    tone(buzer, notaMi, duracao);//aqui é um exemplo da mudança
  }
  delay(10);//pode deletar esta linha também

  if (analogRead(portaFa) < ValorAnalogico) {
    tone(buzer, notaFa, 200);
  }
  delay(10);//pode deletar esta linha também

  if (analogRead(portaSol) < ValorAnalogico) {
    tone(buzer, notaSol, 200);//200 por duracao
  }
  delay(10);//pode deletar esta linha também

  if (analogRead(portaLa) < ValorAnalogico) {
    tone(buzer, notaLa, 200);
  }
  delay(10);//pode deletar esta linha também

  if (digitalRead(portaSi) < ValorDigital) {//aqui, simplesmente "if(digitalRead(portaSi))" já da certo. Pegunte-me para entender melhor
    tone(buzer, notaSi, 200);
  }
  delay(10);//deixe apenas esta linha, ok
}
