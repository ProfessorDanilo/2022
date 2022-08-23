int LDR = A0, buzer = 2;

void setup() {
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(LDR));
  if(analogRead(LDR) < 874){
    tone(buzer, 440, 200);
  }
  delay(10);
}
