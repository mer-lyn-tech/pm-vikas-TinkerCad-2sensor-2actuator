const int ldrPin = A0;
const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 8;
const int buzzerPin = 7;

long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int ldrValue = analogRead(ldrPin);

  // Measure distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("LDR: ");
  Serial.print(ldrValue);

  Serial.print(" Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (ldrValue < 300 && distance < 15)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    Serial.println("Security Alert!");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    Serial.println("Area Safe");
  }

  delay(500);
}