int L = 9;

void setup() {
  pinMode(L, OUTPUT); // Set pin 9 as an output
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second
}

void loop() {
  
  digitalWrite(L, HIGH);  // Turn the LED on (HIGH is the voltage level)
  delay(5000);            // Wait for 5 seconds
  digitalWrite(L, LOW);   // Turn the LED off by making the voltage LOW
  delay(2000);            // Wait for 2 seconds

  // Read the input on analog pin 0
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  // Print out the value you read
  Serial.println(voltage);
}