/*Se seu programa não funcionar
 * tente inverter os valores
 * das variáveis ligar e desligar
 * abaixo
 */
int ligar=1;
int desligar=0;


void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
 ///mostra o número 8
 oito();
}

void oito(){
  //primeiro desligamos tudo
  for(int i=0; i<=13; i++){ 
    digitalWrite(i, desligar);
  }
  digitalWrite(2, ligar);
  digitalWrite(3, ligar);
  digitalWrite(4, ligar);
  digitalWrite(5, ligar);
  digitalWrite(6, ligar);
  digitalWrite(7, ligar);
  digitalWrite(8, ligar);
}
