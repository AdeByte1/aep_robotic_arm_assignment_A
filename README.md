# Aurora Robotics AEP Assignments

## Assignment A: 6-DoF Robotic Arm Simulation
**Objective:** Simulate a 6 Degree of Freedom robot arm using 6 servo motors controlled by potentiometers.

**Hardware Architecture:**
* **Microcontroller:** Arduino Uno
* **Actuators:** 6x Micro Servo Motors powered by an isolated external battery pack (6V) to prevent Arduino voltage regulator brownouts.
* **Sensors:** 6x Potentiometers connected to analog pins A0-A5.
* **Grounding:** A common ground is established between the external power supply and the Arduino for stable PWM reference.

**Software Logic:**
The C++ code utilizes the `Servo.h` library. To maintain scalable, DRY (Don't Repeat Yourself) engineering principles, the code avoids redundant variable declarations by using arrays to store pin assignments and a `for` loop to iterate through the reading and writing process. The 10-bit ADC potentiometer readings (0-1023) are mapped directly to servo angles (0-180 degrees) sequentially within the loop.