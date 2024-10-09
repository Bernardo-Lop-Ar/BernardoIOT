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
  delay(1000);
}