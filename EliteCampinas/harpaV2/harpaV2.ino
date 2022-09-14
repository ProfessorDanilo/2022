int LDRdo = A0, LDRre = A1, LDRmi = A2, LDRfa = A3,
    LDRsol = A4, LDRla = A5, LDRsi = 3;
int buzer = 2, ValorADescobrir = 500, duracao = 200;
int notaDo = 264, notaRe = 297, notaMi = 330,
    notaFa = 352, notaSol = 396,
    notaLa = 440, notaSi = 495;
void setup() {
  pinMode(LDRdo, INPUT);
  pinMode(LDRre, INPUT);
  pinMode(LDRmi, INPUT);
  pinMode(LDRfa, INPUT);
  pinMode(LDRsol, INPUT);
  pinMode(LDRla, INPUT);
  pinMode(LDRsi, INPUT);
  pinMode(buzer, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(LDRsi));
  if (analogRead(LDRdo) < ValorADescobrir) {
    tone(buzer, notaDo, duracao);
  }
  if (analogRead(LDRre) < ValorADescobrir) {
    tone(buzer, notaRe, duracao);
  }
  if (analogRead(LDRmi) < ValorADescobrir) {
    tone(buzer, notaMi, duracao);
  }
  if (analogRead(LDRfa) < ValorADescobrir) {
    tone(buzer, notaFa, duracao);
  }
  if (analogRead(LDRsol) < ValorADescobrir) {
    tone(buzer, notaSol, duracao);
  }
  if (analogRead(LDRla) < ValorADescobrir) {
    tone(buzer, notaLa, duracao);
  }

  //a seguir escolha o adequado ao seu circuito
  if (digitalRead(LDRsi)) {//1 quando interrompe o laser
    tone(buzer, notaSi, duracao);
  }
  
  /*if (!digitalRead(LDRsi)) {//0 quando interrompe o laser
    tone(buzer, notaSi, duracao);
  }*/
  delay(10);
}
