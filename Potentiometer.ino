int potPin = A2;  // Pin where the potentiometer is connected
int potValue = 0; // Variable to store the potentiometer value

void setup() {
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the potentiometer
  potValue = analogRead(potPin);
  // Print the potentiometer value to the serial monitor
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  // Small delay to make the readings easier to follow
  delay(500);
}
