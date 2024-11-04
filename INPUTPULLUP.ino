const int buttonPin = 2; // Connect the push button to digital pin 2 
const int ledPin = 13;   // Optional: Use the built-in LED on pin 13 
  
void setup() { 
  // Initialize the push button pin as an input with an internal pull-up resistor 
  pinMode(buttonPin, INPUT_PULLUP); 
  // Set the LED pin as an output 
  pinMode(ledPin, OUTPUT); 
   
  // Start serial communication for debugging (optional) 
  Serial.begin(9600); 
} 
  
void loop() { 
  // Read the state of the push button 
  int buttonState = digitalRead(buttonPin); 
  
  // Check if the button is pressed 
  if (buttonState == LOW) { 
    // Button is pressed 
    Serial.println("Button Pressed!"); 
    digitalWrite(ledPin, HIGH); // Turn on the LED 
  } else { 
    // Button is not pressed 
    Serial.println("Button Released!"); 
    digitalWrite(ledPin, LOW); // Turn off the LED 
  } 
  
  // Short delay for stability 
  delay(100); 
} 
