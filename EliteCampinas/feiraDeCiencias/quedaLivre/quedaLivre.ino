// Programa adaptado de https://www.filipeflop.com/blog/como-conectar-display-oled-arduino/
// Programa Original: Teste Display OLED SSD1306
// Autor Original: FILIPEFLOP

//Precisamos incluir esta biblioteca para usarmos o display
#include "U8glib.h"
// Display que vamos trabalhar:
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NO_ACK);  // VDD=5V GND=GND SCL=A5 SDA=A4


/*declarando as variaveis*/
int espera = 1000;
int tempo_i = 0;
int tempo_f = 0;
char tempoQueda[6];
char contagem[2];
int eletroima = 2;
int botao_eletroima = 3;
int botao_queda = 4;
int liga = 1, desliga = 0;


void setup(void)
{
  //iniciando comunicação serial
  Serial.begin(9600);

  //iniciando comunização com o display
  if ( u8g.getMode() == U8G_MODE_R3G3B2 ) {
    u8g.setColorIndex(255);     // white
  }
  else if ( u8g.getMode() == U8G_MODE_GRAY2BIT ) {
    u8g.setColorIndex(3);         // max intensity
  }
  else if ( u8g.getMode() == U8G_MODE_BW ) {
    u8g.setColorIndex(1);         // pixel on
  }
  else if ( u8g.getMode() == U8G_MODE_HICOLOR ) {
    u8g.setHiColorByRGB(255, 255, 255);
  }

  //Configurando o dispositivo de queda livre
  pinMode(eletroima, OUTPUT);
  pinMode(botao_eletroima, INPUT_PULLUP);
  pinMode(botao_queda, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(void)
{
  digitalWrite(eletroima, desliga);
  u8g.firstPage();
  do {
    //Seleciona a fonte de texto
    u8g.setFont(u8g_font_8x13B);
    //Linha superior - nome da escola
    u8g.drawStr( 5, 15, "Elite Colegio"); //escolha x, y, valor (coordenadas e valor impresso)
    //unidade
    u8g.setFont(u8g_font_fub14);
    u8g.drawStr( 10, 35, "Calculo de");
    //gravidade
    u8g.drawStr( 15, 53, "     g... ");
    //moldura
    u8g.drawRFrame(0, 18, 128, 46, 4);
  } while ( u8g.nextPage() );
  while (digitalRead(botao_eletroima) == 1) {}
  u8g.setFont(u8g_font_fub14);
  //iniciando o programa
  //imprimindo no computador
  Serial.println("Programa sendo inicializado");
  //imprimindo no display
  u8g.firstPage();
  do {
    u8g.drawStr( 10, 35, "Iniciando...");
  } while ( u8g.nextPage() );

  delay(espera);
  u8g.firstPage();
  do {
    u8g.drawStr( 10, 25, "Pressione");
    u8g.drawStr( 10, 45, "continuar...");
  } while ( u8g.nextPage() );
  Serial.println("Pressione o botão ligado à porta digital 3 para seguir com cada passo");
  while (digitalRead(botao_eletroima) == 1) {} //espera até que o botão seja pressionado
  delay(espera);
  u8g.firstPage();
  do {
    u8g.drawStr( 10, 25, "Pressione");
    u8g.drawStr( 10, 45, "continuar...");
  } while ( u8g.nextPage() );
  Serial.println("...\nPosicione o botão ligado à porta digital 4 abaixo do eletroímã.");
  //reduzindo a letra para caber no display
  u8g.setFont(u8g_font_8x13B);
  u8g.firstPage();
  do {
    u8g.drawStr( 10, 15, "Verifique se o ");
    u8g.drawStr( 10, 30, "outro botao");
    u8g.drawStr( 10, 45, "esta abaixo");
    u8g.drawStr( 10, 60, "do eletroima.");
  } while ( u8g.nextPage() );
  while (digitalRead(botao_eletroima) == 1) {} //espera até que o botão seja pressionado novamente
  delay(espera);
  Serial.println("\nPressione o botão para ligar o eletroímã.");
  u8g.firstPage();
  do {
    u8g.drawStr( 10, 15, "Pressione o");
    u8g.drawStr( 10, 30, "botao para");
    u8g.drawStr( 10, 45, "ligar o");
    u8g.drawStr( 10, 60, "eletroima.");
  } while ( u8g.nextPage() );
  delay(espera);
  while (digitalRead(botao_eletroima) == 1) {} //espera até que o botão seja pressionado
  digitalWrite(eletroima, liga);
  Serial.println("\nPressione para liberar a esfera.");
  u8g.firstPage();
  do {
    u8g.drawStr( 10, 15, "Pressione");
    u8g.drawStr( 10, 30, "para");
    u8g.drawStr( 10, 45, "liberar a");
    u8g.drawStr( 10, 60, "esfera.");
  } while ( u8g.nextPage() );
  delay(espera);
  while (digitalRead(botao_eletroima) == 1) {} //espera até que o botão seja pressionado
  digitalWrite(eletroima, desliga);
  tempo_i = millis();
  while (digitalRead(botao_queda) == 1) {}
  tempo_f = millis();
  Serial.println("Sucesso!!!");
  Serial.println(" ______________________________________________");
  Serial.print("|   O tempo de queda foi de ");
  Serial.print(tempo_f - tempo_i);
  Serial.println(" milisegundos.");
  Serial.println(" ______________________________________________");
  int t = tempo_f - tempo_i;
  itoa(tempo_f - tempo_i, tempoQueda, 10);
  u8g.firstPage();
  do {
    u8g.setFont(u8g_font_8x13B);
    u8g.drawStr( 0, 25, "Tempo de queda:");
    u8g.setFont(u8g_font_fub14);
    u8g.drawStr( 10, 60, tempoQueda);
    u8g.drawStr( 90, 60, "ms");
  } while ( u8g.nextPage() );
  delay(espera);
  Serial.println("\nEletroima desligado. Aguarde 60 s para resfriar o transistor.");
  //Aguardando 60 segundos
  //alternando entre:
  //tempo de queda
  //informando a espera
  for (int i = 89; i > 0; i--) {
    itoa(i / 10 + 1, contagem, 10);
    if (i % 5 == 0) {
      u8g.firstPage();
      do {
        //Seleciona a fonte de texto
        u8g.setFont(u8g_font_8x13B);
        //Linha superior - nome da escola
        u8g.drawStr( 5, 15, "Elite Colegio");
        //contagem regressiva
        u8g.drawStr( 115, 15, contagem);
        //unidade
        u8g.setFont(u8g_font_fub14);
        u8g.drawStr( 2, 35, "Resfriando o");
        //gravidade
        u8g.drawStr( 10, 53, "transistor...");
        //moldura
        u8g.drawRFrame(0, 18, 128, 46, 4);
      } while ( u8g.nextPage() );
    }
    else {
      u8g.firstPage();
      do {
        //Seleciona a fonte de texto
        u8g.setFont(u8g_font_8x13B);
        //Linha superior - nome da escola
        u8g.drawStr( 5, 15, "Elite Colegio");
        //contagem regressiva
        u8g.drawStr( 115, 15, contagem);
        //tempo de queda
        u8g.setFont(u8g_font_fub14);
        u8g.drawStr( 10, 35, "Queda:");
        u8g.drawStr( 10, 60, tempoQueda);
        u8g.drawStr( 90, 60, "ms");
        //moldura
        u8g.drawRFrame(0, 18, 128, 46, 4);
      } while ( u8g.nextPage() );
    }
    Serial.println(i);
    delay(espera/2);
  }
  Serial.println("\nPressione para reiniciar o programa.\n\n\n");
  u8g.firstPage();
      do {
        //Seleciona a fonte de texto
        u8g.setFont(u8g_font_8x13B);
        //Linha superior - nome da escola
        u8g.drawStr( 5, 15, "Pronto p/ rein.");
        //tempo de queda
        u8g.setFont(u8g_font_fub14);
        u8g.drawStr( 10, 35, "Queda:");
        u8g.drawStr( 10, 60, tempoQueda);
        u8g.drawStr( 90, 60, "ms");
        //moldura
        u8g.drawRFrame(0, 18, 128, 46, 4);
      } while ( u8g.nextPage() );
  while (digitalRead(botao_eletroima) == 1) {}
  delay(espera);
}
