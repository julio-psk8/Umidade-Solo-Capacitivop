/*
            SENSOR DE UMIDADE CAPACITIVA 
            DIA : 07-11-2023 
            TITULO: leitura do sensor display oled
                    leitura do sensor no display I2C

             
*/
//===========================================================
// ------- Bibliotecas ---------------
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>       // biblioteca display Oled
#include <Adafruit_SSD1306.h>   // biblioteca display oled
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
  analogWrite(sen, map(analogRead(sensor), 0, 1023, 0, 100));
}

void loop() {


  void solo();
}


//===========================================================
// ------- DESENVOLVIMENTO DAS FUNÇÕES ---------------

void solo() {

  display.setTextSize(2);              // Fonte do texto
  display.setTextColor(WHITE);         // Cor do texto
  display.setCursor(0, 0);             // Posiciona o cursor
  display.println("UMIDADE SOLO = ");  // Imprime mensagem
  display.setTextSize(1);              // Fonte do texto
  display.setCursor(30, 30);           // Posiciona o cursor
  display.println(sen);                // Imprime mensagem
  display.display();
  delay(2000);
}
