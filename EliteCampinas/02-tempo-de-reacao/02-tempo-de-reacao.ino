int led = 2, botao = 3;
int espera;
int tempo_inicial, tempo_final;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  digitalWrite(led,LOW);
  Serial.println("Pressione o botão para iniciar");
  Serial.println("");
  Serial.println("");
  while(digitalRead(botao) == 0){
    //fica esperando apertar o botão
    //para iniciar o jogo
    digitalWrite(led,HIGH);
    delay(250);
    digitalWrite(led,LOW);
    delay(250);
  }
  espera=random(500, 5000);
  delay(espera);
  digitalWrite(led,HIGH);
  tempo_inicial=millis();
  while(digitalRead(botao) == 0){
    //fica esperando apertar o botão
    //para saber o tempo de reação
  }
  digitalWrite(led,LOW);
  tempo_final=millis();
  Serial.print("O tempo de reação foi de: ");
  Serial.println(tempo_final-tempo_inicial);
  Serial.println("");
  delay(1000);
}
