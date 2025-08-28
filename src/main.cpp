// C++ code
//
int numero = 0;

void setup()
{

  int led1 = 2;
  int led2 = 3;
  int led3 = 4;
  int led4 = 5;
  int led5 = 6;
  int led6 = 7;
  int led7 = 8;
  int botao = 9;

  pinMode(botao, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while (digitalRead(9) == HIGH) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led1, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led2, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led1, LOW);
    digitalWrite(led4, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led4, LOW);
    digitalWrite(led7, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led3, LOW);
    digitalWrite(led6, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led7, LOW);
    digitalWrite(led5, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led6, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led6, LOW);
    digitalWrite(led5, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led5, LOW);
    delay(100); // Wait for 100 millisecond(s)
    // caminhovolta
    digitalWrite(led5, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led6, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led7, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led3, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led4, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led2, HIGH);
    delay(100); // Wait for 100 millisecond(s)
    digitalWrite(led1, HIGH);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    delay(500); // Wait for 500 millisecond(s)
    numero = random(1, 6 + 1);
    Serial.println(numero);
  }
  if (numero == 2) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
  }
  if (numero == 2) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH);
  }
  if (numero == 3) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
  }
  if (numero == 4) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH);
  }
  if (numero == 5) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH);
  }
  if (numero == 6) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
  }
}
