# Smart Room Cooling System

## Aim

To control a ventilation mechanism using a servo motor based on temperature and light intensity.

## Components Used

- Arduino UNO
- TMP36 Temperature Sensor
- Photoresistor (LDR)
- Servo Motor
- LED
- 10kΩ Resistor
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Working

The Arduino reads the temperature from the TMP36 sensor and the light intensity from the LDR. When the temperature is above 30°C and the light intensity is high, the servo motor rotates to open ventilation, and the LED turns ON. Otherwise, the servo returns to its initial position and the LED remains OFF.

## Expected Output

- High Temperature + Bright Light → Servo 90°, LED ON
- Any other condition → Servo 0°, LED OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony