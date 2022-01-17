/* programa para medir a capacitância de um capacitor 
 *  o relé fará a carga e a descarga do capacitor, ligando o resistor à 5V e depois ao gnd
 *  a porta A0 também está no positivo do capacitor
 *  programa similar com circuito disponivel em https://www.tinkercad.com/things/1nyxKni8JlQ
 */

 //definindo tensao de leitura
 float tensao=0;

 //para medida do tempo
 float tempo0=0, tempo1=0, tau=0;


//contador do TESTE
int teste = 1;

//capacitancia media acumulada nos testes
float capAcum=0;
void setup() {
 //inicializando o monitor serial
 Serial.begin(9600);
 //configurando a saída digital, para carregar o capacitor
 pinMode(2, OUTPUT);
 //configurando a porta analógica que irá ligar o relé
 pinMode(3, OUTPUT);
 //configurando a porta de leitura analogica
 pinMode(A0,INPUT);

 
}
void loop() {
  Serial.print("Começando teste ");
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
 teste++;
}
