/*
     CÓDIGO:  Q0624
     AUTOR:   BrincandoComIdeias
     LINK:    https://www.youtube.com/brincandocomideias ; https://cursodearduino.net/ ; https://cursoderobotica.net
     COMPRE:  https://www.arducore.com.br/
     SKETCH:  Exemplo LiquidCrystal_I2C
     DATA:    11/02/2020
*/

// INCLUSÃO DE BIBLIOTECAS
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// DEFINIÇÕES
#define endereco  0x27 // Endereços comuns: 0x27, 0x3F
#define colunas   16
#define linhas    2

// INSTANCIANDO OBJETOS
LiquidCrystal_I2C lcd(endereco, colunas, linhas);

void setup() {
  lcd.init(); // INICIA A COMUNICAÇÃO COM O DISPLAY
  lcd.backlight(); // LIGA A ILUMINAÇÃO DO DISPLAY
  lcd.clear(); // LIMPA O DISPLAY

  
  lcd.clear(); // LIMPA O DISPLAY
  //lcd.noBacklight(); // DESLIGA A ILUMINAÇÃO DO DISPLAY
  
  pinMode (9, OUTPUT); // VERDE PEDESTRE
  pinMode (8, OUTPUT); // VERMELHO PEDESTRE
  pinMode (7, OUTPUT); // VERDE SEMAFORO
  pinMode (6, OUTPUT); // AMARELO SEMAFORO
  pinMode (5, OUTPUT); // VERMELHO SEMAFORO

}

void loop() {

  	digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    lcd.setCursor(4, 0);
    lcd.print("VERMELHO");
    lcd.setCursor(5, 1);
    lcd.print("VERDE");
    delay(2000);
    digitalWrite(5, LOW);
    digitalWrite(9, LOW);
    lcd.clear();
    delay(0);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  	lcd.setCursor(5, 0);
    lcd.print("VERDE");
    lcd.setCursor(4, 1);
    lcd.print("VERMELHO");
    delay(3000);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    lcd.clear();
    delay(0);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    lcd.setCursor(4, 0);
    lcd.print("AMARELO");
    lcd.setCursor(4, 1);
    lcd.print("VERMELHO");
    delay(1000);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    lcd.clear();
    delay(0);


}
