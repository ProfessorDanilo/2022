int led = 2;//pino D4
int espera = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);//acende na placa mas desliga a porta
  delay(10000);
  digitalWrite(led,LOW);
  delay(100 );
}
