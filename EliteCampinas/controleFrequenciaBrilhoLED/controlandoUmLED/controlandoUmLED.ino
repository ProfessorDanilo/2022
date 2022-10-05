int LED = 3, potenciometro = A0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(analogRead(potenciometro));
  digitalWrite(LED, LOW);
  delay(analogRead(potenciometro));
}
