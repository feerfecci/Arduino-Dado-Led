// Definição dos pinos
int leds[] = {2, 3, 5, 8, 7, 6, 4};
int led1 = 2;
int led2 = 3;
int led3 = 5;
int led4 = 8;
int led5 = 7;
int led6 = 6;
int led7 = 4;
int botao = 9;
int numero = 0;

void setup() {
  pinMode(botao, INPUT);
  for (int i = 0; i < 7; i++) {
    pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600);
}

void apagarTodos() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(leds[i], LOW);
  }
}

void mostrarNumero(int n) {
  apagarTodos();
  switch (n) {
    case 1:
      digitalWrite(led7, HIGH); // LED central
      break;
    case 2:
      digitalWrite(led2, HIGH);
      digitalWrite(led5, HIGH);
      break;
    case 3:
      digitalWrite(led1, HIGH);
      digitalWrite(led7, HIGH);
      digitalWrite(led6, HIGH);
      break;
    case 4:
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led6, HIGH);
      break;
    case 5:
      digitalWrite(led1, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led6, HIGH);
      digitalWrite(led7, HIGH);
      break;
    case 6:
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      digitalWrite(led6, HIGH);
      break;
  }
}

void loop() {
  if (digitalRead(botao) == HIGH) {
    // animação de rolagem
    for (int i = 0; i < 7; i++) {
      apagarTodos();
      digitalWrite(leds[i], HIGH);
      delay(100);
    }
    apagarTodos();
    delay(200);

    // sorteio do dado
    numero = random(1, 7);
    Serial.println(numero);
    mostrarNumero(numero);
  }
}
