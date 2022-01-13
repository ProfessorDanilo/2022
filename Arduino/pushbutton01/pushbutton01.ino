/* Testando push button para apliocação no projeto de estudo de queda livre*/

int botao = 0, cont = 0;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Inicializando");
}
void loop() {
  botao = digitalRead(2);
  if(!botao){
    cont++;
    Serial.print("Deu Certo!   ");
    Serial.println(cont);
  }
}
/*FUNCIONOU*/
