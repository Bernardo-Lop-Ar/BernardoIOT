// C++ code
//
int buzzer = 8;
#define R 3
#define G 6
#define B 5	
void setup()
{
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  analogWrite(R, 55);
  analogWrite(G, 78);
  analogWrite(B, 0);
  tone(buzzer, 400, 1000);
  delay(500);
  noTone(buzzer);
  delay(500);
  
  analogWrite(R, 200);
  analogWrite(G, 0);
  analogWrite(B, 100);
  tone(buzzer, 300, 1000);
  delay(500);
  noTone(buzzer);
  delay(500);
  
  analogWrite(R, 245);
  analogWrite(G, 245);
  analogWrite(B, 220);
  tone(buzzer, 100, 1000);
  delay(500);
  noTone(buzzer);
  delay(500);

  analogWrite(R, 200);
  analogWrite(G, 200);
  analogWrite(B, 200);
  tone(buzzer, 50, 1000);
  delay(500);
  noTone(buzzer);
  delay(500);
  
  analogWrite(R, 218);
  analogWrite(G, 165);
  analogWrite(B, 32);
  tone(buzzer, 600, 1000);
  delay(500);
  noTone(buzzer);
  delay(500);


}