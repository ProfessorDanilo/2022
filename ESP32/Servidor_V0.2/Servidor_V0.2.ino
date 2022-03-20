#include <WiFi.h>                                                                 //Inclusão das bibliotecas
#include <WebServer.h>
#include <Wire.h>
#define BMP_SDA 21                                                                //Definição dos pinos I2C
#define BMP_SCL 22
 
WebServer sv(80);
  
const char* ssid= "Danilo_e_Udelis_2G";                                             //Dados da sua rede Wi-Fi                                                
const char* senha = "982508999";
void conectado() {                                                                //Sub-rotina para caso o servidor fique online
  sv.send(200, "text/html", html(analogRead(34), analogRead(35)));     //Envia ao servidor, em formato HTML, o nosso script, com os parâmetros de pressão e temperatura
}
void nao_encontrado() {                                                           //Sub-rotina para caso seja retornado um erro
  sv.send(404, "text/plain", "Não encontrado");                                   //Retorna a mensagem de erro em caso de um retorno 404
}
String html(float temperatura, float pressao) {                                   //Variável que armazenará o script HTML
  String cd = "<!DOCTYPE html>\n";
  cd += "<html lang=\"pt-br\">\n";
  cd += "<head>\n";
  cd += "<meta charset=\"UTF-8\">\n";
  cd += "<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\n";
  cd += "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  cd += "<title>Dados dos sensores</title>\n";
  cd += "<style>\n";
  cd += "html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  cd += "body{margin-top: 50px;} \n";
  cd += "h1 {color: #444444; margin: 50px auto 30px;}\n";
  cd += "p {font-size: 24px; color: #444444; margin-bottom: 10px;}\n";
  cd += "</style>\n";
  cd += "<meta http-equiv=\"refresh\" content=\"1\">\n";
  cd += "</head>\n";
  cd += "<body>\n";
  cd += "<div id=\"webpage\">\n";
  cd += "<h1>Dados dos sensores</h1>\n";
  cd += "<p>Temperatura: ";
  cd += (int)temperatura;
  cd += " *C</p>\n";
  cd += "<p>Umidade: 65%</p>\n";
  cd += "<p>Pressão Atmosférica: ";
  cd += (int)pressao / 101325;
  cd += " atm</p>\n";
  cd += "</div>\n";
  cd += "</body>\n";  
  cd += "</html>\n";
  return cd;                                                                      //Retorna o script                                             
} 
void setup() {
  Serial.begin(115200);                                                           //Inicia o monitor serial
  delay(100);
  
  Serial.print("Se conectando a: ");
  Serial.println(ssid);
  WiFi.begin(ssid, senha);                                                        //Se conecta ao Wi-Fi
  while (WiFi.status() != WL_CONNECTED) {                                         //Verifica se a conexão foi bem-sucedida
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nConectado");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());                                                 //Imprime o endereço de IP
  sv.on("/", conectado);
  sv.onNotFound(nao_encontrado);
  sv.begin();                                                                     //Inicia o servidor
  Serial.println("Servidor Online");
}
void loop() { 
  sv.handleClient();                                                           //Executa as ações do servidor
  Serial.println(analogRead(34));
}
