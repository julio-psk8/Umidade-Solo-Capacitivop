/*
            SENSOR DE UMIDADE CAPACITIVA 
            DIA : 06-11-2023 
            TITULO: Leitura simples no display OLed
             
*/
//===========================================================
// ------- Bibliotecas ---------------
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//===========================================================
// ------- Objetos ---------------
Adafruit_SSD1306 display(-1);

//===========================================================
// ------- Mapeamento de hardwar ---------------
#define sensor A0
//-------------------------------------------------
//------ Variaveis Globais -----
int sen;
//-------------------------------------------------
//------ configuração inicial -----
void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
 display.clearDisplay();
 sen = analogRead(sensor);
}

void loop() {

   void solo();
}
 //===========================================================
// ------- DESENVOLVIMENTO DAS FUNÇÕES ---------------

void solo()
{

  display.setTextSize(1); // Fonte do texto
  display.setTextColor(WHITE); // Cor do texto
  display.setCursor(0,0); // Posiciona o cursor
  display.println("UMIDADE SOLO = "); // Imprime mensagem
  display.setTextSize(1); // Fonte do texto
  display.setCursor(0,10); // Posiciona o cursor
  display.println(sen); // Imprime mensagem

  display.display();
  delay(2000);
  display.clearDisplay();


}


