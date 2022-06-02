int led = 4;//pino D2
int espera = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,1);//acende na placa mas desliga a porta
  delay(espera);
  digitalWrite(led,0);
  delay(espera);
}
