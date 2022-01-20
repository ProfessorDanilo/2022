/*******************************************************************************
*
*    Projeto: Hello Word! - COMUNICAÇÃO I2C
*    Data: 30/09/2020
*            http://squids.com.br/arduino
*
*******************************************************************************/
/*adaptado por danilo lima
 * retirado de http://www.squids.com.br/arduino/index.php/projetos-arduino/projetos-squids/basico/297-projeto-90-como-controlar-um-display-oled-ssd1306-no-arduino
 * adicionei sensor ultrasonico
 */
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

float eco=0, x1=0, x2=0, t1=0, t2=0, v1=0, v2=0, a;


const byte SCREEN_WIDTH = 128; // OLED display width, in pixels
const byte SCREEN_HEIGHT = 64; // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
const int OLED_RESET = -1; // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
//inicializano comunicação serial e configurando ultrasom hc-sr04
Serial.begin(9600);
pinMode(2,INPUT);//sinal echo do módulo ultrasonico (sonar)
pinMode(3,OUTPUT);//triger do sonar
// initialize with the I2C addr 0x3C
display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  

// Clear the buffer.
display.clearDisplay();
  
// Display Text "Hello Word"
display.clearDisplay();
display.setTextSize(2);
display.setTextColor(WHITE);
display.setCursor(0,10);
display.println("Ola!");
display.setTextSize(1);
display.println("Seja bem vindo(a) ao");
display.println("laboratorio de");
display.println("ciencia e tecnologia.");
display.display();
delay(5000);
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(WHITE);
display.setCursor(0,10);
display.println("Vamos comecar usando um");
display.print("  ");
display.setTextSize(2);
display.println("SONAR!!!");
display.display();
delay(5000);
}

void loop() {
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
  eco=pulseIn(2,HIGH);
  t1=t2;
  t2=millis();
  x1=x2;
  x2=15.6*eco/897;
  v1=v2;
  v2=1000*(x2-x1)/(t2-t1);
  a=1000*(v2-v1)/(t2-t1);
  Serial.println(x1);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,10);
  display.print(x2);
  display.println(" cm");
  display.print(abs(v2));
  display.println(" cm/s");   
  display.print(abs(a));
  display.println(" cm/s2"); 
  display.display();
  delay(1000);
  }
