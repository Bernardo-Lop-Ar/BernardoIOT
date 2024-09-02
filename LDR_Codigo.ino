// C++ code
//
  int LDR = 0;
  int LED = 9;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	int LDR = analogRead(A0);
  	Serial.print("Valor Medido no LDR:");
  	Serial.println(LDR);
  if (LDR>650){
  		digitalWrite(LED, HIGH);
    	Serial.println("LED ligado");
  }else{
    digitalWrite(LED, LOW);
  	Serial.println("LED desligado");
  }
  	delay(1000);
}