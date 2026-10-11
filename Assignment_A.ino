#include <Servo.h>

// Define the number of degrees of freedom
const int numServos = 6;

// Create an array of Servo objects
Servo myServos[numServos];

// Map Potentiometer and Servo pins
const int potPins[numServos]   = {A0, A1, A2, A3, A4, A5};
const int servoPins[numServos] = {3, 5, 7, 8, 10, 12}; 


void setup() {
  // Attach each servo to its respective pin
  for (int i = 0; i < numServos; i++) {
    myServos[i].attach(servoPins[i]);
    
  }
}


void loop() {
  for (int i = 0; i < numServos; i++) {
    // 1. Read the value from the potentiometer (0 to 1023)
    int potReading = analogRead(potPins[i]);
    
    // 2. Map the value to the servo angle (0 to 180 degrees)
    int Angle = map(potReading, 0, 1023, 0, 180);
    
    // 3. Command the servo to move to the mapped angle
    myServos[i].write(Angle);
  }
  
  delay(15);
}