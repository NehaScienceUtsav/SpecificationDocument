// Define the pin for IR sensor
const int irSensorPin = 2;  // IR sensor connected to analog pin A2

void setup() {
  // Initialize the serial communication at 9600 baud rate
  Serial.begin(9600);

  // Set the IR sensor pin as input
  pinMode(irSensorPin, INPUT);
}

void loop() {
  // Read the value from the IR sensor
  int sensorValue = analogRead(irSensorPin);

  // Display the sensor value on the serial monitor
  Serial.print("IR Sensor Value: ");
  Serial.println(sensorValue);

  // Check if the sensor value is above a certain threshold (e.g., detecting an object)
  if (sensorValue == HIGH) {
    Serial.println("Object detected!");
  } else {
    Serial.println("No object detected.");
  }

  // Wait for a short period before reading the value again
  delay(500);  // 500 ms delay
}
