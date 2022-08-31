//portas
int portaDo = A0, portaRe = A1, portaMi = A2,
    portaFa = A3, portaSol = A4,
    portaLa = A5, portaSi = 4;
//notas (frequências)
int notaDo = 264, notaRe = 297, notaMi = 330,
    notaFa = 352, notaSol = 396,
    notaLa = 440, notaSi = 495;
//piezo
int portaPiezo = 9;
//duração da nota
int duracao = 200;
void setup()
{
  /*Portas analógicas não precisam ser configuradas*/
  /*  pinMode(portaDo, INPUT);
    pinMode(portaRe, INPUT);
    pinMode(portaMi, INPUT);
    pinMode(portaFa, INPUT);
    pinMode(portaSol, INPUT);
    pinMode(portaLa, INPUT);*/
  pinMode(portaSi, INPUT);
  pinMode(portaPiezo, OUTPUT);
  /*a linha abaixo não é necessária*/
  //  pinMode(LDRdo, INPUT);

  /*inicia a comunicação somente uma vez*/
  Serial.begin(9600);
}
/*o ValorADescobrir é o valor a partir do qual
   o buzer começa a tocar. Você pode testar para
   cada um dos LDR e colocar nas variáveis abaixo
*/
int ValorADescobrir_Do = 0, ValorADescobrir_Re = 0,
    ValorADescobrir_Mi = 0, ValorADescobrir_Fa = 0, 
    ValorADescobrir_Sol = 0, ValorADescobrir_La = 0;
    /*note que acima não declaramos um valor a descobrir
     * para a nota Si pois ela entrará na porta digital.
     * Consegue entender porque?
     */

     /*aqui tinha um colchete a mais*/
//}

/*note que somente podemos colocar um void loop()*/
void loop() {
  /*imprimindo os valores de leituras dos LDRs
   * ligados nas portas analógicas e digital
   */
  Serial.print("Valor do LDR Dó: ");
  Serial.println(analogRead(portaDo));
  
  Serial.print("Valor do LDR Ré: ");
  Serial.println(analogRead(portaRe));
  
  Serial.print("Valor do LDR Mi: ");
  Serial.println(analogRead(portaMi));
  
  Serial.print("Valor do LDR Fá: ");
  Serial.println(analogRead(portaFa));
  
  Serial.print("Valor do LDR Sol: ");
  Serial.println(analogRead(portaSol));
  
  Serial.print("Valor do LDR Lá: ");
  Serial.println(analogRead(portaLa));

  Serial.print("Valor do LDR Si: ");
  Serial.println(digitalRead(portaSi));
  Serial.println();

  /*agora é que o Arduino irá tocar o buzer se ...*/  
  if (analogRead(portaDo) < ValorADescobrir_Do) {
    tone(portaPiezo, notaDo, duracao);
  }
  if (analogRead(portaRe) < ValorADescobrir_Re) {
    tone(portaPiezo, notaRe, duracao);
  }
  if (analogRead(portaMi) < ValorADescobrir_Mi) {
    tone(portaPiezo, notaMi, duracao);
  }
  if (analogRead(portaFa) < ValorADescobrir_Fa) {
    tone(portaPiezo, notaFa, duracao);
  }
  if (analogRead(portaSol) < ValorADescobrir_Sol) {
    tone(portaPiezo, notaSol, duracao);
  }
  if (analogRead(portaLa) < ValorADescobrir_La) {
    tone(portaPiezo, notaLa, duracao);
  }
  delay(10);
}
