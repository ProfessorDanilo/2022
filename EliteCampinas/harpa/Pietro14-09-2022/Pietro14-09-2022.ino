int LDRdo = A0, LDRre = A1, LDRmi = 3, buzer = 2, ValorADescobrir = 500;
int DO = 264, RE = 297, MI = 330;
void setup() {
  pinMode(LDRdo, INPUT);
  pinMode(LDRre, INPUT);
  pinMode(LDRmi, INPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(LDRmi));
  if (analogRead(LDRdo) > 500) {
    tone(buzer, DO, 200);
  }
  if (analogRead(LDRre) > 500 ) {
    tone(buzer, RE, 200);
  }

  if (digitalRead(LDRmi)  ) {
    tone(buzer, MI, 200);
  }

  delay(10);
}
/*sem comentários
 * está no caminho certo.
 * Qualquer coisa me chama durante a aula.
 */
