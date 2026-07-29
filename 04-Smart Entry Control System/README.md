# Smart Entry Control System

## Aim

To create a smart entry control system using an ultrasonic sensor and a push button. The gate opens only when a person is near and the button is pressed.

## Components Used

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Push Button
- Servo Motor
- LED
- 220Ω Resistor
- Jumper Wires

## Working

The ultrasonic sensor measures the distance to a person. If the person is within 15 cm and the push button is pressed, the servo motor rotates to open the gate, and the LED lights up to indicate access has been granted.

## Expected Output

- Distance < 15 cm + Button Pressed → Servo 90°, LED ON
- Any other condition → Servo 0°, LED OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony