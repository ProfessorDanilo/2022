int echo = 2, trigger = 3, buzzer = 9, buildInPin = 13;
long tempo;
void setup() {
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(buildInPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  //enviando o pulso TTL
  //vamos forçar o desligamento do trigger
  digitalWrite(trigger, LOW);
  //aqui usamos uma nova função para esperar microssegundos
  delayMicroseconds(2);
  //inicialndo o pulso TTL
  digitalWrite(trigger, HIGH);
  //aguardando 10 milissegundos
  delayMicroseconds(10);
  //finalizando o pulso TTL
  digitalWrite(trigger, LOW);
  //nova função: para medir o pulso
  //TTL enviada pelo módulo
  tempo = pulseIn(echo, HIGH);
  //Note que temos que informar a porta
  //e se o sinal lido é alto ou baixo
  //vamos exibir isso no serial monitor
  Serial.print("O tempo de medida do eco é de ");
  Serial.print(tempo);
  Serial.println(" microssegundos");
  //pulando linhas e esperando
  //1 segundo para fazer outra medida
  Serial.println();
  if (tempo < 250) {
    digitalWrite(buildInPin, HIGH);
    tone(buzzer, 555);
  } else  if (tempo < 600) {
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(100);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(50);
  } else  if (tempo < 900) {
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(200);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(100);
  } else  if (tempo < 1200) {
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(300);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(200);
  } else  if (tempo < 1700) {
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(400);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(300);
  } else  if (tempo < 2000) {
    digitalWrite(buildInPin, HIGH);
    noTone(buzzer);
    tone(buzzer, 555);
    delay(500);
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
    delay(400);
  } else {
    digitalWrite(buildInPin, LOW);
    noTone(buzzer);
  }
}
