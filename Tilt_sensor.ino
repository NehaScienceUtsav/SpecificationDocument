// Define the tilt sensor pin
const int tiltSensorPin = 3;

void setup() {
  // Start the serial communication
  Serial.begin(9600);

  // Set the tilt sensor pin as input
  pinMode(tiltSensorPin, INPUT);
}

void loop() {
  // Read the state of the tilt sensor
  int tiltState = digitalRead(tiltSensorPin);

  // Display the sensor state on the Serial Monitor
  if (tiltState == HIGH) {
    Serial.println("Tilt detected!");
  } else {
    Serial.println("No tilt detected.");
  }

  // Add a small delay to make the output more readable
  delay(500);
}
