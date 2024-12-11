// Define the tilt sensor pin
const int TouchSensorPin = 3;

void setup() {
  // Start the serial communication
  Serial.begin(9600);

  // Set the tilt sensor pin as input
  pinMode(TouchSensorPin, INPUT);
}

void loop() {
  // Read the state of the tilt sensor
  int TouchState = digitalRead(TouchSensorPin);

  // Display the sensor state on the Serial Monitor
  if (TouchState == HIGH) {
    Serial.println("Touch detected!");
  } else {
    Serial.println("No Touch detected.");
  }

  // Add a small delay to make the output more readable
  delay(500);
}
