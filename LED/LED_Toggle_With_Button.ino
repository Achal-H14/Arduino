int button = 2;
int led = 13;
int status = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
 
  Serial.begin(9600);
}

void loop() {
  //a) if the button is not pressed the false status is reversed by !status and the LED turns on
  //b) if the button is pressed the true status is reveresed by !status and the LED turns off

  if (digitalRead(button) == LOW) {
    Serial.print("status 1:");
    Serial.println(status);
    status = !status;
    digitalWrite(led, status);
    Serial.print("status 2:");
    Serial.println(status);
}
  while (digitalRead(button) == LOW); 
  delay(50); // Small delay
}
