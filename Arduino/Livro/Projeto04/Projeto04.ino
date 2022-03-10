/*semáforo interativo*/
//definindo as portas
int carRed=12, carYellow=11, carGreen=10, pedRed=9, pedGreen=8, button=2, crossTime=5000;
unsigned long changeTime; //tempo desde que o botão foi pressionado

void setup(){
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, HIGH);  
}

void loop(){
  int estado = digitalRead(button);
  if(estado == HIGH && (millis() - changeTime) > 5000) changeLights(); 
}

void changeLights(){
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);

  digitalWrite(carYellow, LOW);
  digitalWrite(carRed,HIGH);
  delay(1000); //por segurança, espera um segundo antes de liberar para o pedestre

  digitalWrite(pedRed, LOW);
  digitalWrite(pedGreen, HIGH);
  delay(crossTime);

  //pisca o led do pedestre
  for(int i = 0; i<10; i++){
    digitalWrite(pedRed, HIGH);
    delay(250);
    digitalWrite(pedRed, LOW);
    delay(250);
  }

  //acende o vermelho do pedestre e libera para os vepiculos (como no brasil)
  digitalWrite(pedRed,HIGH);
  delay(500);
  digitalWrite(pedGreen,LOW);
  digitalWrite(carGreen,HIGH);
  digitalWrite(carRed,LOW);

  //atualiza o changeTime
  changeTime=millis();    
}
