# Smart Garage Parking System

## Aim

To automatically open a garage door when a vehicle is detected nearby during daylight conditions.

## Components Used

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Photoresistor (LDR)
- Servo Motor
- LED
- 10kΩ Resistor
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Working

The Arduino measures the distance using the ultrasonic sensor and reads the light level using the LDR. When a vehicle is detected within 15 cm during bright conditions, the servo motor opens the garage door and the LED turns ON.

## Expected Output

- Distance < 15 cm and Bright Light → Servo 90°, LED ON
- Otherwise → Servo 0°, LED OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony