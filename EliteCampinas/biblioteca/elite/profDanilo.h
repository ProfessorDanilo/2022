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
int lerAnalogica(int x)
{
  return analogRead(x);
}

/*COMUNICAÇÃO SERIAL*/
/*inicia comunicação serial*/
int iniciaComunicacao()
{
  Serial.begin(9600);
}
int lerSerial()
{
   return Serial.read();
}

int lerNumeroSerial()
{
   return Serial.parseInt();
}


/*espera por x segundos*/
int esperaSegundos(float x)
{
  delay(x*1000);
}

/*mostrando no monitor pulando linha*/
void imprimirPL(int x)
{
   Serial.println(x);
}

void imprimirPL(String x)
{
   Serial.println(x);
}

void imprimirPL(float x)
{
   Serial.println(x);
}
void imprimirPL(double x)
{
   Serial.println(x);
}
void imprimirPL(char x)
{
   Serial.println(x);
}


/*mostrando no monitor sem pular lina*/
void imprimir(int x)
{
   Serial.print(x);
}

void imprimir(String x)
{
   Serial.print(x);
}

void imprimir(float x)
{
   Serial.print(x);
}
void imprimir(double x)
{
   Serial.print(x);
}
void imprimir(char x)
{
   Serial.print(x);
}



//aleatório entre números
int aleatorioEntre(int min, int max)
{
   return random(min, max);

}

