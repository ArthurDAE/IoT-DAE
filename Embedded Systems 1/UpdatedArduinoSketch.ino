// Define pin constants
const int ledPin = 13; // LED connected to digital pin 13
const int buttonPin = 2; // Button connected to digital pin 2
const int analogPin = A0; // Potentiometer connected to analog pin A0

// Variable to store the analog value
int analogValue = 0;
// Variable to store the button state
int buttonState = 0;

void setup() {
  // Initialize the digital pins:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the value from the potentiometer
  analogValue = analogRead(analogPin);
  
  // Map the analog value to a range from 0 to 255
  int brightness = map(analogValue, 0, 1023, 0, 255);
  
  // Read the state of the button
  buttonState = digitalRead(buttonPin);
  
  // If the button is pressed, turn the LED on
  if (buttonState == HIGH) {
    // Set the LED to HIGH
    digitalWrite(ledPin, HIGH);
  } else {
    // Set the LED to a brightness based on the potentiometer
    analogWrite(ledPin, brightness);
  }
  
  // Wait for a moment
  delay(10);
}
