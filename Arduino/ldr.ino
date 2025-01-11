int L = 9; // LED pin

void setup() {
  pinMode(L, OUTPUT);    
  Serial.begin(9600);    
}

void loop() {
  
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  // Print out the value you read
  Serial.println(voltage);

  // Check if the voltage is above 0.7 volts
  if (voltage > 0.7) {
    digitalWrite(L, HIGH);  // Turn the LED on
    delay(5000);            // Wait for 5 seconds
    digitalWrite(L, LOW);   // Turn the LED off
    delay(2000);            // Wait for 2 seconds
  } else {
    digitalWrite(L, LOW);   // Ensure the LED is off if voltage is below 0.7 volts
  }
}
