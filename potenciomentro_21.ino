// C++ code
//
const int X = A0;
const int Y = A1;
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop()
{
  Serial.print("EIXO X: ");
  Serial.print(analogRead(X));
  Serial.print("   EIXO Y: ");
  Serial.println(analogRead(Y));
  
  if (analogRead(X) <= 511) {
    Serial.println("Para Esquerda...");
  }else if (analogRead(X) >= 512) {
    Serial.println("Para Direita...");
  }
  
  if (analogRead(Y) <= 511) {
    Serial.println("Para Baixo...");
  }else if (analogRead(Y) >= 512){
    Serial.println("Para Cima...");
  }
   delay(1000);
}