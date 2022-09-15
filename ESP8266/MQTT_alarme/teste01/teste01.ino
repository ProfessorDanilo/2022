// --- WIFI ---
#include <NTPClient.h>
// change next line to use with another board/shield
#include <ESP8266WiFi.h>
//#include <WiFi.h> // for WiFi shield
//#include <WiFi101.h> // for WiFi 101 shield or MKR1000
#include <WiFiUdp.h>
/*
const char* ssid = "Danilo_e_Udelis_2G";
const char* password = "982508999";
*/
#define ssid "Danilo_e_Udelis_2G"
#define password "982508999"

WiFiClient wemosMiniClient;

// --- MQTT ---
#include <PubSubClient.h>
const char* mqtt_Broker = "mqtt.eclipseprojects.io";
const char* mqtt_ClientID = "alarme";
PubSubClient client(wemosMiniClient);
const char* topicoAlarmeEnsinoMedioEPreVestibular = "alarmeEmPv";
const char* topicoAlarmeEnsinoFundamental = "alarmeFund";

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.printf("Connecting to %s\n", ssid);
  WiFi.mode(WIFI_STA);
  delay(1000);
  WiFi.begin(ssid, password);
  delay(1000);
  Serial.print(WL_CONNECTED);
  Serial.println(" WL_CONNECTED after successful connection is established");
  Serial.print(WL_NO_SSID_AVAIL);
  Serial.println(" WL_NO_SSID_AVAIL in case configured SSID cannot be reached");
  Serial.print(WL_CONNECT_FAILED);
  Serial.println(" WL_CONNECT_FAILED if connection failed");
  Serial.print(WL_WRONG_PASSWORD);
  Serial.println(" WL_WRONG_PASSWORD if password is incorrect");
  Serial.print(WL_IDLE_STATUS);
  Serial.println(" WL_IDLE_STATUS when Wi-Fi is in process of changing between statuses");
  Serial.print(WL_DISCONNECTED);
  Serial.println(" WL_DISCONNECTED if module is not configured in station mode");
  Serial.print(WiFi.status());
  Serial.println(" WiFi.status");
  delay(1000);
  Serial.print(WiFi.waitForConnectResult());
  Serial.println(" WiFi.waitForConnectResult");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.println("...");
    Serial.print(WiFi.waitForConnectResult());
    Serial.println(" WiFi.waitForConnectResult");
  }
  Serial.println();
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());

  client.setServer(mqtt_Broker, 1883);
}

void loop() {
  if (!client.connected()) {
    reconectarMQTT();
  }
  publicar();
}

void reconectarMQTT() {
  while (!client.connected()) {
    client.connect(mqtt_ClientID);
  }
}

void publicar() {
  client.publish(topicoAlarmeEnsinoMedioEPreVestibular, String(50).c_str(), true);
  client.publish(topicoAlarmeEnsinoFundamental, String(52).c_str(), true);
}
