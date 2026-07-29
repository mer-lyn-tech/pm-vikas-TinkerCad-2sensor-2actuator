# Smart Night Security System

## Aim

To create a smart security system that detects nearby objects during low-light conditions using an LDR and an ultrasonic sensor. An LED and a buzzer are activated to provide an alert.

## Components Used

- Arduino UNO
- Photoresistor (LDR)
- Ultrasonic Sensor (HC-SR04)
- LED
- Piezo Buzzer
- 10kΩ Resistor
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Working

The Arduino reads the ambient light using the LDR and measures the distance using the ultrasonic sensor. If it is dark and an object is detected within 15 cm, the LED and buzzer turn ON. Otherwise, they remain OFF.

## Expected Output

- Dark + Object within 15 cm → LED ON, Buzzer ON
- Any other condition → LED OFF, Buzzer OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony