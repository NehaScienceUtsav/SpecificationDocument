int Motor = 2;  // Pin where the Motor is connected

void setup() {
  // getting output from digital pin 2
  pinMode(Motor, OUTPUT);
  // Start the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Turn on the Motor
  digitalWrite(Motor, HIGH);
  // Print a message to the serial monitor to confirm the Motor is on
  Serial.println("Motor is ON");
  // Delay to avoid flooding the serial monitor with too many message
  delay(1000);
}
