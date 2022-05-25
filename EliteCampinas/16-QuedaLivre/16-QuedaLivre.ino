/*declarando as variaveis*/
int tempo_i = 0;
int tempo_f = 0;
int eletroima = 2;
int botao_eletroima = 3;
int botao_queda = 4;
int liga = 1, desliga = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(eletroima, OUTPUT);
pinMode(botao_eletroima, INPUT_PULLUP);
pinMode(botao_queda, INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  Serial.println("Programa sendo inicializado");
  digitalWrite(eletroima, desliga); 
  Serial.println("Pressione o botão ligado à porta digital 3 para seguir com cada passo");
  while(digitalRead(botao_eletroima)==1){}//espera até que o botão seja pressionado
  delay(1000);
  Serial.println("...\nPosicione o botão ligado à porta digital 4 abaixo do eletroímã.");
  while(digitalRead(botao_eletroima)==1){}//espera até que o botão seja pressionado novamente
  delay(1000);
  Serial.println("...\nLigue a fonte na tomada\n...");
  while(digitalRead(botao_eletroima)==1){}//espera até que o botão seja pressionado
  delay(1000);
  Serial.println("\nPressione o botão para ligar o eletroímã."); 
  delay(1000);   
  while(digitalRead(botao_eletroima)==1){}//espera até que o botão seja pressionado  
  digitalWrite(eletroima, liga);
  Serial.println("\nPressione o botão para iniciar quanto estiver pronto.");   
  delay(1000);
  while(digitalRead(botao_eletroima)==1){}//espera até que o botão seja pressionado 
  digitalWrite(eletroima, desliga); 
  tempo_i = millis(); 
  while(digitalRead(botao_queda)==1){}   
  tempo_f = millis();
  Serial.println("Sucesso!!!");
  Serial.println(" ______________________________________________");
  Serial.print("|   O tempo de queda foi de ");
  Serial.print(tempo_f - tempo_i);
  Serial.println(" milisegundos.");
  Serial.println(" ______________________________________________");
  Serial.println("\nEletroima desligado. Aguarde 10 s para resfriar o transistor."); 
      for(int i=10; i>0; i--){
        Serial.println(i);
        delay(1000); 
      }
  Serial.println("\nPressione para reiniciar o programa.\n\n\n");
  while(digitalRead(botao_eletroima)==1){}
}
