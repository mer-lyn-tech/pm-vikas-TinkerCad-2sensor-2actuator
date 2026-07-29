# Automatic Gate Alarm

## Aim

To create an automatic gate system that opens a gate using an ultrasonic sensor and alerts users using a buzzer when motion is detected.

## Components Used

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- PIR Motion Sensor
- Servo Motor
- Piezo Buzzer
- Jumper Wires

## Working

The ultrasonic sensor measures the distance to an object. If the object is within 15 cm, the servo motor rotates to 90° to simulate opening a gate.

The PIR sensor detects motion. When motion is detected, the piezo buzzer turns ON to provide an alert.

## Expected Output

- Object within 15 cm → Servo opens the gate.
- Motion detected → Buzzer turns ON.
- Otherwise → Gate closes and buzzer remains OFF.

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony