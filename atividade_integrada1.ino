#define R 2
int buzzer = 5;
int botao = 0;
const int pinoBuzzer = 5; //PINO DIGITAL EM QUE O BUZZER ESTÁ CONECTADO
const int sensor = A0;
int cm = 0;
float temperaturaC = 0;
long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}
void setup()
{
   Serial.begin(9600);
   pinMode(R, OUTPUT);
   pinMode(7, INPUT);
   pinMode(buzzer, OUTPUT);
}

void loop()
{
  botao = digitalRead(7);
  cm = 0.01723 * readUltrasonicDistance(9, 10);
  Serial.print(cm);
  Serial.println(" cm");
  delay(100);
  int valorSensor = analogRead(sensor);
  
  float tensao = ((valorSensor/1024.0)*5.0); 
  
  temperaturaC = (tensao)*100.0; 
  
  Serial.print("Valor do sensor: ");       
  Serial. print(valorSensor); 
  Serial.print(", Tensao (V): ");          
  Serial.println(tensao);
  
  if (cm <= 20)
  {
  digitalWrite(R, HIGH);  
  tone(buzzer, 300, 1000);
    if (botao == HIGH){
      	noTone(buzzer);
    }
   Serial.print(" Celsius: ");
   Serial.println(temperaturaC);
  }
  else 	
  {
  digitalWrite(R, LOW);
  noTone(buzzer);
  }
  
  
}