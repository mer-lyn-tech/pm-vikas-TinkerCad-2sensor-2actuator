#include <Servo.h>

Servo gateServo;

const int trigPin = 9;
const int echoPin = 10;
const int pirPin = 2;
const int buzzerPin = 8;

long duration;
int distance;

void setup()
{
  gateServo.attach(6);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pirPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // Ultrasonic Distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // PIR Motion
  int motion = digitalRead(pirPin);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm  ");

  Serial.print("Motion: ");
  Serial.println(motion);

  // Servo Control
  if(distance < 15)
  {
    gateServo.write(90);
  }
  else
  {
    gateServo.write(0);
  }

  // Buzzer Control
  if(motion == HIGH)
  {
    digitalWrite(buzzerPin, HIGH);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}