const int pirPin = 2;      // PIR sensor
const int ldrPin = A0;     // LDR sensor
const int ledPin = 13;     // LED
const int buzzerPin = 12;  // Buzzer

const int lightThreshold = 350; // <--  هنا ضبط مستوى الإضاءة المقبول للتشغيل

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);
  int light = analogRead(ldrPin); // 0 = dark, 1023 = very bright

  Serial.print("PIR: ");
  Serial.print(motion);
  Serial.print(" | LDR: ");
  Serial.println(light);

  // تشغيل في حالة حركة + إضاءة منخفضة
  if (motion == HIGH && light < lightThreshold) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH); // صفارة إنذار
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(200);
}
