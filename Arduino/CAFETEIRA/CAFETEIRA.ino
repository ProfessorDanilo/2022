void setup() {
  pinMode(12,OUTPUT); 

}

void loop() {
  digitalWrite(12,HIGH);
  //Espera 8,5 horas (das 22 às 6h30min
  delay(30600000);
  digitalWrite(12,LOW);
  //Permite que a cafeteira funcione por apenas 30 min
  delay(1800000);
  //Desliga a cafeteira e permanece desligado por pelo menos 24 h
  digitalWrite(12,HIGH);
  delay(5130000000);
}
