// C++ code
//

int botao = 0;
void setup() {
pinMode (10, INPUT); // BOTAO
pinMode (9, OUTPUT); // VERDE PEDESTRE
pinMode (8, OUTPUT); // VERMELHO PEDESTRE
pinMode (7, OUTPUT); // VERDE SEMAFORO
pinMode (6, OUTPUT); // AMARELO SEMAFORO
pinMode (5, OUTPUT); // VERMELHO SEMAFORO
}

void loop() {
  botao = digitalRead(10);
  if(botao == HIGH){
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    delay(2000);
    digitalWrite(5, LOW);
    digitalWrite(9, LOW);
    delay(0);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(3000);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(0);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    delay(0);
    }

}