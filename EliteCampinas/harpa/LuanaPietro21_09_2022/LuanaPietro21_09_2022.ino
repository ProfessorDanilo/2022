int LDRdo = A0, LDRre = A1, LDRmi = 3, LDRfa = A2, LDRsol = A3, LDRla = A4, LDRsi = A5, buzer = 2, ValorADescobrir = 500;
int DO = 264, RE = 297, MI = 330, FA = 352, SOL = 396, LA = 440, SI = 495;
void setup() {
  pinMode(LDRdo, INPUT);
  pinMode(LDRre, INPUT);
  pinMode(LDRmi, INPUT);
  pinMode(LDRfa, INPUT);
  pinMode(LDRsol, INPUT);
  pinMode(LDRla, INPUT);
  pinMode(LDRsi, INPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(LDRmi));
  Serial.print("Do: ");
  Serial.println(analogRead(LDRdo));
  Serial.print("Re: ");
  Serial.println(analogRead(LDRre));
  Serial.print("Fa: ");
  Serial.println(analogRead(LDRfa));
  Serial.print("Sol: ");
  Serial.println(analogRead(LDRsol));
  Serial.print("La: ");
  Serial.println(analogRead(LDRla));
  if (analogRead(LDRdo) > 500) {
    tone(buzer, DO, 200);
  }
  if (analogRead(LDRre) > 500 ) {
    tone(buzer, RE, 200);
  }

  if (digitalRead(LDRmi)  ) {
    tone(buzer, MI, 200);
  }

  if (analogRead(LDRfa) > 500 ) {
    tone(buzer, FA, 200);
  }

  if (analogRead(LDRsol) > 500 ) {
    tone(buzer, SOL, 200);
  }

  if (analogRead(LDRla) > 700 ) {
    tone(buzer, LA, 200);
  }

  if (analogRead(LDRsi) > 500 ) {
    tone(buzer, SI, 200);
  }

  delay(10);
}