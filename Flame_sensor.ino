const int flamePin = 2;  // Pin connected to the flame sensor

void setup() {
  pinMode(flamePin, INPUT);  // Set the flame sensor pin as input
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  int flameState = digitalRead(flamePin); // Read the state of the flame sensor

  if (flameState == LOW) { // Flame detected
    Serial.println("Flame detected!");
  } else {
    digitalWrite(buzzerPin, LOW); // Turn the buzzer off
  }

  delay(100); // Small delay for stability
}
