# Smart Brightness Control System

## Aim

To monitor ambient light using an LDR and a user-adjustable threshold using a potentiometer. An RGB LED provides visual feedback, while a buzzer provides an audio alert in low-light conditions.

## Components Used

- Arduino UNO
- Photoresistor (LDR)
- Potentiometer
- RGB LED (Common Cathode)
- Piezo Buzzer
- 10kΩ Resistor
- Three 220Ω Resistors
- Breadboard
- Jumper Wires

## Working

The Arduino compares the LDR value with the threshold set by the potentiometer. If the light level falls below the threshold, the RGB LED turns red and the buzzer activates. Otherwise, the RGB LED turns green and the buzzer remains off.

## Expected Output

- Dark → Red LED + Buzzer ON
- Bright → Green LED + Buzzer OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony