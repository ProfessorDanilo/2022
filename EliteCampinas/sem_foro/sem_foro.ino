void setup(){
  //configurando as portas de saída
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
  //aqui dizemos para o arduino
  //iniciar a comunicação com o PC
  //usando uma taxa de 9600 bits por segundo
  Serial.begin(9600); //dizemos que a comunicação serial foi iniciada
  
}
void loop(){  
  //ligando o LED verde
  digitalWrite(10, HIGH);

  //para mostrar algo no monitor serial usamos a função
  //print (para não dar um "enter" no final da linha) ou
  //println (para dar um "enter" no final da linha"
  Serial.print("Status atual do semáforo: ");
  Serial.println("Verde.");
  
  //aguardando 5 segundos
  delay(5000);
  //desligando o sinal verde
  digitalWrite(10,LOW);
  //ligando o sinal amarelo
  digitalWrite(11, HIGH);

  //Informamos que o sinal amarelo está ligado
  Serial.print("Status atual do semáforo: ");
  Serial.println("Amarelo.");
  
  //aguardando dois segundos
  delay(2000);
  //desligando o sinal amarelo
  digitalWrite(11,LOW);
  //ligando o sinal vermelho
  digitalWrite(12,HIGH);

  //Informamos que o sinal vermelho está ligado
  Serial.print("Status atual do semáforo: ");
  Serial.println("Vermelho.");
  
  //aguardadando 5 segundos
  delay(5000);
  //desligando o sinal vermelho
  digitalWrite(12,LOW);  
  //agora o programa começara de novo


  //código inserido no final da aula 06
  if(3 > 2){
    Serial.println("Verdadeiro");
  }
}
