int ldrPin = 3; // LDR sensor connected to digital pin D3
int ldrValue = 0;

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
  pinMode(ldrPin, INPUT); // Set the LDR pin as input
}

void loop() {
  // Read the value from the LDR sensor
  ldrValue = digitalRead(ldrPin);
  
  // Print the LDR value on the Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Check if light is detected or not based on the LDR value
  if (ldrValue == HIGH) {
    Serial.println("Light Detected");
  } else {
    Serial.println("No Light Detected");
  }

  // Small delay before reading the value again
  delay(1000);
}
