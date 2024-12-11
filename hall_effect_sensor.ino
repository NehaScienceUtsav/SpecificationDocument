// Define the Hall Effect sensor pin
int hallSensorPin = A2; // Pin where Hall Effect sensor is connected
int sensorValue = 0;    // Variable to store the sensor reading

void setup() {
  // Start serial communication at 9600 baud
  Serial.begin(9600);
  
  // Initialize the sensor pin as an input
  pinMode(hallSensorPin, INPUT);
}

void loop() {
  // Read the value from the Hall Effect sensor
  sensorValue = analogRead(hallSensorPin);
  
  // Print the sensor reading to the Serial Monitor
  Serial.print("Hall Sensor Reading: ");
  Serial.println(sensorValue);

  // Print additional messages based on the sensor reading
  if (sensorValue > 512) {
    Serial.println("Magnetic field detected.");
  } else {
    Serial.println("No significant magnetic field.");
  }

  // Wait for a short period before the next reading
  delay(500);  // Delay in milliseconds
}


