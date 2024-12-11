// Define the analog pin for the sound sensor
int soundSensorPin = A2;
int sensorValue = 0;

void setup() {
  // Initialize the serial communication at 9600 baud rate
  Serial.begin(9600);
  // Wait for the serial communication to start
  while (!Serial) {
    ; // Do nothing until the serial connection is established
  }
}

void loop() {
  // Read the value from the sound sensor
  sensorValue = analogRead(soundSensorPin);
  
  // Display the raw sensor value on the serial monitor
  Serial.print("Sound Sensor Value: ");
  Serial.println(sensorValue);
  
  // Print messages based on the sensor value
  if (sensorValue > 500) {
    Serial.println("Loud sound detected!");
  } else if (sensorValue > 300 && sensorValue <= 500) {
    Serial.println("Moderate sound detected.");
  } else {
    Serial.println("Quiet environment.");
  }
  
  // Delay for a short period before reading again
  delay(500);
}
