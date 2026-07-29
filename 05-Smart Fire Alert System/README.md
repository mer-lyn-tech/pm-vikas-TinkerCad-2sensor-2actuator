# Smart Fire Alert System

## Aim

To build a fire alert system using a TMP36 temperature sensor and a push button. The LED and buzzer activate when the temperature is high or when the emergency button is pressed.

## Components Used

- Arduino UNO
- TMP36 Temperature Sensor
- Push Button
- LED
- Piezo Buzzer
- 220Ω Resistor
- Jumper Wires

## Working

The Arduino continuously monitors the room temperature using the TMP36 sensor. If the temperature rises above 30°C, or if the push button is pressed, the LED and buzzer are activated to indicate a fire alert.

## Expected Output

- Temperature > 30°C → LED ON, Buzzer ON
- Push Button Pressed → LED ON, Buzzer ON
- Otherwise → LED OFF, Buzzer OFF

## Platform

- Arduino UNO
- Tinkercad Circuits

## Author

Merlyn Antony