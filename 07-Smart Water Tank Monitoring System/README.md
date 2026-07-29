# Smart Water Tank Monitoring System

## Aim

To monitor the water level using an ultrasonic sensor and alert the user with an LED and buzzer when the water level is low. A push button is provided to manually test the alarm.

## Components Used

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Push Button
- LED
- Piezo Buzzer
- 220Ω Resistor
- Jumper Wires

## Working

The ultrasonic sensor measures the distance to the water surface. If the measured distance is greater than 15 cm, indicating a low water level, the LED and buzzer are activated. The push button can also be used to manually activate the alert.

## Expected Output

- Distance > 15 cm → LED ON, Buzzer ON
- Push Button Pressed → LED ON, Buzzer ON
- Otherwise → LED OFF, Buzzer OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony