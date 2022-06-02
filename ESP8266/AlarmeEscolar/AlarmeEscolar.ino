#include <NTPClient.h>
// change next line to use with another board/shield
#include <ESP8266WiFi.h>
//#include <WiFi.h> // for WiFi shield
//#include <WiFi101.h> // for WiFi 101 shield or MKR1000
#include <WiFiUdp.h>

int alarme = 4;//pino GPIO 2 marcado com D2
int medio = 5000, fundamental = 3000;

//crinando vetor hora
int hora[23];

//criando o vetor minuto
int minuto[60];


const char *ssid     = "Danilo_e_Udelis_2G";
const char *password = "982508999";

WiFiUDP ntpUDP;

// By default 'pool.ntp.org' is used with 60 seconds update interval and
// no offset
NTPClient timeClient(ntpUDP);

// You can specify the time server pool and the offset, (in seconds)
// additionally you can specify the update interval (in milliseconds).
// NTPClient timeClient(ntpUDP, "europe.pool.ntp.org", 3600, 60000);

void setup(){
  pinMode(alarme, OUTPUT);
  digitalWrite(alarme, HIGH);
  Serial.begin(115200);
  buscaRedes();
  WiFi.begin(ssid, password);
  int j=0;
  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 100 );
    j++;//brincando com o monitor serial
    if(j%10==0){
      Serial.print( "." );
    }
    if(j%17==0){
      Serial.print( "." );
    }
    if(j%23==0){
      Serial.print( "." );
    }
  }

  timeClient.begin();

  
  for(int i = 0; i<23; i++){
    hora[i]=i;
  }

    for(int i = 0; i<60; i++){
    minuto[i]=i;
  }
  
}

void loop() {
  timeClient.update();

  Serial.println(timeClient.getFormattedTime());
  int agora_hora=timeClient.getHours(), agora_minuto=timeClient.getMinutes(), agora_segundo=timeClient.getSeconds();
  agora_hora-=3;
  if(agora_hora<0){
    agora_hora+=24;
  }
  Serial.print(agora_hora);
  Serial.print(" : ");
  Serial.print(agora_minuto);
  Serial.print(" : ");
  Serial.print(agora_segundo);
  
  Serial.println();

  //seta pv e médio
  if((agora_hora==hora[6]&&agora_minuto==minuto[57])||
      (agora_hora==hora[7]&&agora_minuto==minuto[0])||
      (agora_hora==hora[7]&&agora_minuto==minuto[50])||
      (agora_hora==hora[8]&&agora_minuto==minuto[40])||
      (agora_hora==hora[8]&&agora_minuto==minuto[57])||
      (agora_hora==hora[9]&&agora_minuto==minuto[0])||
      (agora_hora==hora[9]&&agora_minuto==minuto[50])||
      (agora_hora==hora[10]&&agora_minuto==minuto[40])||
      (agora_hora==hora[11]&&agora_minuto==minuto[30])||
      (agora_hora==hora[11]&&agora_minuto==minuto[47])||
      (agora_hora==hora[11]&&agora_minuto==minuto[50])||
      (agora_hora==hora[12]&&agora_minuto==minuto[40])||
      (agora_hora==hora[13]&&agora_minuto==minuto[30])||
      (agora_hora==hora[14]&&agora_minuto==minuto[27])||
      (agora_hora==hora[14]&&agora_minuto==minuto[30])||
      (agora_hora==hora[15]&&agora_minuto==minuto[20])||
      (agora_hora==hora[16]&&agora_minuto==minuto[10])||
      (agora_hora==hora[16]&&agora_minuto==minuto[17])||
      (agora_hora==hora[16]&&agora_minuto==minuto[20])||
      (agora_hora==hora[17]&&agora_minuto==minuto[10])||
      (agora_hora==hora[18]&&agora_minuto==minuto[0])||
      (agora_hora==hora[18]&&agora_minuto==minuto[50])||
      (agora_hora==hora[18]&&agora_minuto==minuto[57])||
      (agora_hora==hora[19]&&agora_minuto==minuto[0])||
      (agora_hora==hora[19]&&agora_minuto==minuto[45])||
      (agora_hora==hora[20]&&agora_minuto==minuto[30])||
      (agora_hora==hora[21]&&agora_minuto==minuto[15])||
      (agora_hora==hora[21]&&agora_minuto==minuto[27])||
      (agora_hora==hora[21]&&agora_minuto==minuto[30])||
      (agora_hora==hora[22]&&agora_minuto==minuto[15])||
      (agora_hora==hora[23]&&agora_minuto==minuto[0])
      )
      {
        digitalWrite(alarme, LOW); //low liga o relay (motivos relacionados a economia de energia)
        delay(medio);
        digitalWrite(alarme,HIGH);
        delay(60000);
      }

      //seta fundamental
      if((agora_hora==hora[7]&&agora_minuto==minuto[17])||
      (agora_hora==hora[7]&&agora_minuto==minuto[20])||
      (agora_hora==hora[8]&&agora_minuto==minuto[10])||
      (agora_hora==hora[9]&&agora_minuto==minuto[00])||
      (agora_hora==hora[9]&&agora_minuto==minuto[17])||
      (agora_hora==hora[9]&&agora_minuto==minuto[20])||
      (agora_hora==hora[10]&&agora_minuto==minuto[10])||
      (agora_hora==hora[11]&&agora_minuto==minuto[00])||
      (agora_hora==hora[11]&&agora_minuto==minuto[17])||
      (agora_hora==hora[11]&&agora_minuto==minuto[20])||
      (agora_hora==hora[12]&&agora_minuto==minuto[10])||
      (agora_hora==hora[13]&&agora_minuto==minuto[0])||
      (agora_hora==hora[14]&&agora_minuto==minuto[17])||
      (agora_hora==hora[14]&&agora_minuto==minuto[20])||
      (agora_hora==hora[15]&&agora_minuto==minuto[10])||
      (agora_hora==hora[16]&&agora_minuto==minuto[0])||
      (agora_hora==hora[16]&&agora_minuto==minuto[7])||
      (agora_hora==hora[16]&&agora_minuto==minuto[10])||
      (agora_hora==hora[17]&&agora_minuto==minuto[0])||
      (agora_hora==hora[17]&&agora_minuto==minuto[50])
      )
      {
        digitalWrite(alarme, LOW); //low liga o relay (motivos relacionados a economia de energia)
        delay(fundamental);
        digitalWrite(alarme,HIGH);
        delay(60000);
      }

  delay(5000);
  
  
  
}








void buscaRedes() {
  Serial.println("scan start");


  int n = WiFi.scanNetworks();// WiFi.scanNetworks will return the number of networks found
  Serial.println("scan done");
  if (n == 0)
    Serial.println("no networks found");
  else
  {
    Serial.print(n);
    Serial.println(" networks found");
    for (int i = 0; i < n; ++i)
    {
      // Print SSID and RSSI for each network found
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.print(")");
      Serial.println((WiFi.encryptionType(i) == ENC_TYPE_NONE)?" ":"*");
      delay(10);
    }
  }
  Serial.println("");

  delay(5000);
}
