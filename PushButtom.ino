const int buttonPin = 2;    // Pin where the button is connected
const int ledPin = 13;      // Pin where the LED is connected

int buttonState = 0;         // Variable for reading the button status
int lastButtonState = 0;     // Variable to store the previous state of the button
int ledState = LOW;          // Variable to store the LED state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with pull-up resistor
  pinMode(ledPin, OUTPUT);          // Set LED pin as output
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the state of the button

  // Check if the button is pressed
  if (buttonState == LOW && lastButtonState == HIGH) {
    // Toggle the LED state
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }

  lastButtonState = buttonState; // Save the current state as the last state
}
