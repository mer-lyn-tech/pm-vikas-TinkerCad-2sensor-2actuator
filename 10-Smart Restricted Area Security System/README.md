# Smart Restricted Area Security System

## Aim

To develop a restricted area security system using a PIR motion sensor and a push button. The servo motor opens a security barrier while the buzzer alerts when motion is detected or the manual trigger is pressed.

## Components Used

- Arduino UNO
- PIR Motion Sensor
- Push Button
- Servo Motor (SG90)
- Piezo Buzzer
- Jumper Wires

## Working

The PIR sensor detects movement near the restricted area. If motion is detected or the push button is pressed, the servo rotates to 90° and the buzzer sounds. Otherwise, the servo remains at 0° and the buzzer stays OFF.

## Expected Output

- Motion Detected → Servo 90°, Buzzer ON
- Push Button Pressed → Servo 90°, Buzzer ON
- No Motion & Button Released → Servo 0°, Buzzer OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony