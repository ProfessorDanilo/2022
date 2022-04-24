int echo = 2, trigger = 3;

long tempo;

void setup() {
  pinMode(echo, INPUT);  
  pinMode(trigger, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //enviando o pulso TTL
  //vamos forçar o desligamento do trigger
  digitalWrite(trigger, LOW);
  //aqui usamos uma nova função para esperar microsegundos
  delayMicroseconds(2);
  //inicialndo o pulso TTL
  digitalWrite(trigger, HIGH);
  //aguardando 10 milisegundos
  delayMicroseconds(10);
  //finalizando o pulso TTL
  digitalWrite(trigger, LOW);


  //nova função: para medir o pulso 
  //TTL enviada pelo módulo
  tempo = pulseIn(echo,HIGH);
  //Note que temos que informar a porta
  //e se o sinal lido é alto ou baixo


  //vamos exibir isso no serial monitor
  Serial.print("O tempo de medida do eco é de ");
  Serial.print(tempo);
  Serial.println(" microsegundos");


  //pulando linhas e esperando 
  //1 segundo para fazer outra medida
  Serial.println();
  delay(1000);//espera um segundo
}
