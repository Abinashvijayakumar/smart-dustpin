 #include <Servo.h>

// Pin definitions
const int trigPin = 5;     // GPIO5
const int echoPin = 18;    // GPIO18
const int servoPin = 13;   // GPIO13

Servo lidServo;

bool lidOpen = false;
unsigned long lastDetectionTime = 0;

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  lidServo.attach(servoPin);
  lidServo.write(0); // Start with lid closed

  Serial.println("Smart Dustbin Initialized");
}

void loop() {
  // Trigger the ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo time
  long duration = pulseIn(echoPin, HIGH, 30000); // timeout 30ms
  float distance = duration * 0.034 / 2; // in cm

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance < 20) {
    lastDetectionTime = millis();
    if (!lidOpen) {
      lidServo.write(120); // Open lid
      lidOpen = true;
      Serial.println("Lid opened");
    }
  }

  if (lidOpen && (millis() - lastDetectionTime >= 4000)) {
    lidServo.write(0); // Close lid
    lidOpen = false;
    Serial.println("Lid closed");
  }

  delay(200); // Loop delay to reduce sensor overload
}
