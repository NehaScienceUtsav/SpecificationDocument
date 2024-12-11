void setup() {
  // Initialize the digital pin as an output
  pinMode(3, OUTPUT);
  // Start the Serial Monitor
  Serial.begin(9600);
}

void loop() {
  // Turn on the LED/Buzzer
  digitalWrite(3, HIGH);
  // Print a message to the serial monitor to confirm the LED/Buzzer is on
  Serial.println("LED/Buzzer is ON");
  // Delay to avoid flooding the serial monitor with too many messages
  delay(1000);
}
