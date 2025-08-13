int led[] = {2, 3, 4, 5, 6}; // LED pin numbers

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(led[i], HIGH);
    delay(500);          // ON delay for all LEDs
    digitalWrite(led[i], LOW);
    delay(500);   
  }
    for (int i = 4; i >=0 ; i--) {
    digitalWrite(led[i], HIGH);
    delay(500);          // ON delay for all LEDs
    digitalWrite(led[i], LOW);
    delay(500); // OFF delay for all LEDs
    }
}
