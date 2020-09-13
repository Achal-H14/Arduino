int ledPin1 = 11;
int ledPin2 = 12;
int ledPin3 = 13;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int j = 0; j < 3; j++) {
    delay(2000);
    for (int i = 0; i < 5; i++) {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      delay(100);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      delay(100);
      Serial.print("J= ");
      Serial.print(j);
      Serial.print("  i= ");
      Serial.println(i);
    }
  }
}
