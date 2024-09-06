#define R 3
#define G 6
#define B 5
void setup()
{
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{

  //1
  analogWrite(R, 55);
  analogWrite(G, 78);
  analogWrite(B, 0);
  Serial.println("Amarelo Claro");
  delay(500);
 
  //2
  analogWrite(R, 200);
  analogWrite(G, 0);
  analogWrite(B, 100);
  Serial.println("Roxo");
  delay(500);
 
  //3
  analogWrite(R, 245);
  analogWrite(G, 245);
  analogWrite(B, 220);
  Serial.println("Bege");
  delay(500);
 
  //4
  analogWrite(R, 200);
  analogWrite(G, 200);
  analogWrite(B, 200);
  Serial.println("Branco");
  delay(500);
 
  //5
  analogWrite(R, 218);
  analogWrite(G, 165);
  analogWrite(B, 32);
  Serial.println("Amarelo");
  delay(500);
 
  //6
  analogWrite(R, 255);
  analogWrite(G, 0);
  analogWrite(B, 0);
  Serial.println("Vermelho");
  delay(500);
 
  //7
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 0);
  Serial.println("Verde");
  delay(500);
 
  //8
  analogWrite(R, 0);
  analogWrite(G, 0);
  analogWrite(B, 255);
  Serial.println("Azul");
  delay(500);
}