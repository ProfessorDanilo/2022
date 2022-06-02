#include <SPI.h>
#include <WiFi.h>

char ssid[] = "Danilo_e_Udelis_2G";          //  your network SSID (name)
char pass[] = "982508999";   // your network password
int status = WL_IDLE_STATUS;

WiFiServer server(80);

void setup() {
  // initialize serial:
  Serial.begin(115200);
  Serial.println("Attempting to connect to WPA network...");
  Serial.print("SSID: ");
  Serial.println(ssid);

  status = WiFi.begin(ssid, pass);
  if ( status != WL_CONNECTED) {
    Serial.println("Couldn't get a wifi connection");
    while(true);
  }
  else {
    server.begin();
    Serial.print("Connected to wifi. My address:");
    IPAddress myAddress = WiFi.localIP();
    Serial.println(myAddress);

  }
}


void loop() {

}
