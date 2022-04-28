/*controles das portas digitais*/
void ligarDigital(int x)
{
   pinMode(x,OUTPUT);
   digitalWrite(x, HIGH);
}
void desligarDigital(int x)
{
   pinMode(x,OUTPUT);
   digitalWrite(x, LOW);
}

/*ler porta digital*/
int lerDigital(int x)
{
  pinMode(x, INPUT);
  return digitalRead(x);
}

/*ler porta analógica*/
int lerAnalógivca(int x)
{
  return analogRead(x);
}

/*inicia comunicação serial*/
int iniciaComunicacao()
{
  Serial.begin(9600);
}



