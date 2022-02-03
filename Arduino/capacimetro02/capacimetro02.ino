/************
 * 
 * PROGRAMA E CIRCUITO DERAM ERRADOS. CONSTA ONLINE APENAS COMO ARQUIVO PARA QUE NUM FUTURO SEJA CONSERTADO
 * 
 */

/* programa para medir a capacitância de um capacitor 
 *  circuito simples (o mais simples que consegui pensar e fazer)
 *  O objetivo é determinar a capacitância de pequenos valores
 *  Conecte o positivo do capacitor na porta A0
 *  Conecte o negativo na porta A0
 */

 //definindo tensao de leitura
 float tensao=0;

 //para medida do tempo
 int tempo0=0, tempo1=0, tau=0;


//contador do TESTE
int teste = 1;

//capacitancia media acumulada nos testes
float capAcum=0;
void setup() {
 //inicializando o monitor serial
 Serial.begin(9600);
}
void loop() {
  //configurando as saídas para carregar o capacitor
  //GND
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  //carregando o capacitor. Considerando uma impedância de 100M e um capacitor de 10 nanoF no máximo, vamos
  //aguardar 6 tau = 6 * R * C = 6 segundos
  digitalWrite(A0, LOW);
  digitalWrite(A1,HIGH);
  Serial.println("Começando o carregamento... ");
  delay(1000);
  Serial.println("Carregamento concluído.\n");  
  Serial.println("Iniciando descarga...");  
  //configurando a entrada analógica
  pinMode(A1, INPUT);
  int prov = analogRead(A1);
  delay(5000);
  /*
  Serial.print(teste);
  Serial.println(" ...");
 delay(100);
 //Ligando o relé ao 5 V
 digitalWrite(3,1);
 tempo0=millis();
 do{
  //tensao=(float)analogRead(A0)*5/1023;
  //Serial.println(tensao);
  //delay(100);
 }while(analogRead(A0)<1000);
 tempo1=millis();
 tau=tempo1-tempo0;
 Serial.print("Tempo de carga: ");
 Serial.print(tau/1000);
 Serial.println(" s.");
 Serial.println("Iniciando descarga do capacitor.");
 tempo0=millis();
 //Descarregando o capacitor
 digitalWrite(3,0);
 delay(10);
 while(1==1){
  //tensao=(float)analogRead(A0)*5/1023;
  //Serial.println(tensao);
  if(analogRead(A0)<0.63*1000){
    break;
  }
 }
 tempo1=millis();
 tau=tempo1-tempo0;
 Serial.print("O tempo para rescarregar 63% da carga do capacitor é de ");
 Serial.print(tau/1000);
 Serial.println(" s.");
 //consideranto o resistor igual a 10k e impedancia de 10k na porta A0, calculamos a capacitancia
 Serial.print("O valor da capacitancia é de ");
 //o valor abaixo foi obtido utilizando um capacitor conhecido (encontrando 9,8k para a impedancia da porta A0
 Serial.print(tau/4.9298);
 Serial.println(" microfarads.");
 Serial.print("O valor da capacitancia média nos testes é de ");
 capAcum=tau/4.9298+capAcum;
 Serial.print(capAcum/teste);
 Serial.println(" microfarads.");
 delay(100);
 teste++;*/
}
