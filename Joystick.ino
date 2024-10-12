#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

int potX = A0;
int potY = A1;
int botao = 2;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(botao, INPUT_PULLUP);}

void loop() {
  int valorX = analogRead(potX);
  int valorY = analogRead(potY);
  int estadoBotao = digitalRead(botao);

  char mensagem[17];

  int limiarX = 450;
  int limiarY = 450;

  if (valorY < 512 - limiarY) {
    strcpy(mensagem, estadoBotao == LOW ? "p.Cima" : "l.Cima");
  } else if (valorY > 512 + limiarY) {
    strcpy(mensagem, estadoBotao == LOW ? "p.Baixo" : "l.Baixo");
  } else if (valorX > 512 + limiarX) {
    strcpy(mensagem, estadoBotao == LOW ? "p.Direita" : "l.Direita");
  } else if (valorX < 512 - limiarX) {
    strcpy(mensagem, estadoBotao == LOW ? "p.Esquerda" : "l.Esquerda");
  } else {
    strcpy(mensagem, "Parado");}

  if ()

  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print(mensagem);

  delay(500);}
