int buzer = 2, ValorAnalogico = 1000, ValorDigital = 0;
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
  Serial.print("Do: ");
  Serial.println(analogRead(portaDo));
  Serial.print("Re: ");
  Serial.println(analogRead(portaRe));
  Serial.print("Mi: ");
  Serial.println(analogRead(portaMi));
  Serial.print("Fa: ");
  Serial.println(analogRead(portaFa));
  Serial.print("Sol: ");
  Serial.println(analogRead(portaSol));
  Serial.print("La: ");
  Serial.println(analogRead(portaLa));
  Serial.print("Si: ");
  Serial.println(analogRead(portaSi));
  Serial.println(digitalRead(portaSi));
  if (analogRead(portaDo) > ValorAnalogico) {
    tone(buzer, notaDo, duracao);
  }

  if (analogRead(portaRe) > ValorAnalogico) {
    tone(buzer, notaRe, duracao);
  }

  if (analogRead(portaMi) > ValorAnalogico) {
    tone(buzer, notaMi, duracao);
  }

  if (analogRead(portaFa) > ValorAnalogico) {
    tone(buzer, notaFa, duracao);
  }
  delay(10);//pode deletar esta linha também

  if (analogRead(portaSol) > ValorAnalogico) {
    tone(buzer, notaSol, duracao);
  }

  if (analogRead(portaLa) > ValorAnalogico) {
    tone(buzer, notaLa, duracao);
  }

  if (digitalRead(portaSi)) {
    tone(buzer, notaSi, duracao);
  }
  delay(10);
}