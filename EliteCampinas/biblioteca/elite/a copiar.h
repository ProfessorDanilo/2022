#include <SoftwareSerial.h>

//comunicando bluetooth:
//deve-se informar a porta RX e TX respectivamente
void iniciaBluetooth(RX, TX)
{
  SoftwareSerial mySerial(RX, TX);
  Serial.begin(9600);
  mySerial.begin(9600);
  mySerial.setTimeout(5);
}

int confirmarBluetooth()
{
  if (mySerial.available()> 0)
      return Sim;
   return Nao;
}

void enviarBluetooth(int x)
{
   mySerial.println(x);
}

void enviarBluetooth(String x)
{
   mySerial.println(x);
}

void enviarBluetooth(float x)
{
   mySerial.println(x);
}

int receberBluetooth()
{
   return mySerial.read();
}


int receberNumeroBluetooth()
{
   return mySerial.parseInt();
}




//Ligar um led na porta x
void ligarSaida(int x)
{
   pinMode(x,OUTPUT);
   digitalWrite(x, HIGH);
}

//Desligar um led na porta x
void desligarSaida(int x)
{
   pinMode(x,OUTPUT);
   digitalWrite(x, LOW);
}


//Ler uma porta analogica
int lerPorta(int x)
{
  pinMode(x, INPUT);
  return analogRead(x);
}

//inicia comunicação serial
int iniciaMonitor()
{
  Serial.begin(9600);
}
int receberDoMonitor()
{
   return Serial.read();
}

int receberNumeroDoMonitor()
{
   return Serial.parseInt();
}






//espera por x segundos
int espera(float x)
{
  delay(x*1000);
}


//mostrando no monitor pulando linha
void mostrarNoMonitorPL(int x)
{
   Serial.println(x);
}

void mostrarNoMonitorPL(String x)
{
   Serial.println(x);
}

void mostrarNoMonitorPL(float x)
{
   Serial.println(x);
}


//mostrando no monitor sem pular lina
void mostrarNoMonitor(int x)
{
   Serial.print(x);
}

void mostrarNoMonitor(String x)
{
   Serial.print(x);
}

void mostrarNoMonitor(float x)
{
   Serial.print(x);
}



//aleatório entre números
int aleatorioEntre(int min, int max)
{
   return random(min, max);

}
