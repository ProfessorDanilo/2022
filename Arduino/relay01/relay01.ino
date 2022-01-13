/* Testando relay para apliocação no projeto de estudo de queda livre*/

int tempo=500;

void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  Serial.println("Inicializando...");
}
void loop() {

  digitalWrite(2, HIGH);
  Serial.println("DESLIGADO");
  delay(tempo);

  digitalWrite(2, LOW);
  Serial.println("LIGADO");
  delay(tempo);
  
  
}
/*FUNCIONOU*/
