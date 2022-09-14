int direita = 2, esquerda = 3, portaVelocidade = 5, velocidade = 500;
int LDResquerdo = A1, LDRdireito = A0;
void setup() {
  pinMode(direita, OUTPUT);
  pinMode(esquerda, OUTPUT);
  pinMode(portaVelocidade, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(portaVelocidade, velocidade);
  if (analogRead(LDResquerdo) > 600 && analogRead(LDRdireito) < 300) { //esquerdo no preto e direito no branco
    digitalWrite(direita, HIGH);
    digitalWrite(esquerda, LOW);
  }
  else if (analogRead(LDResquerdo) < 500 && analogRead(LDRdireito) > 400) { //esquerdo no branco e direito no preto
    digitalWrite(direita, LOW);
    digitalWrite(esquerda, HIGH);
  }
  else {
    digitalWrite(direita, LOW);
    digitalWrite(esquerda, HIGH);
  }

  Serial.print("Reflexão lado esquerdo: -->");
  Serial.println(analogRead(LDResquerdo));
  Serial.print("Reflexão direito: ");
  Serial.println(analogRead(LDRdireito));
  delay(10);

}
