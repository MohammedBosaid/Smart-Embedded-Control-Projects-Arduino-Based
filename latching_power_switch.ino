const int buttonPin = 2;
const int ledPin = 13;

bool isOn = false;
unsigned long lastPressTime = 0;
unsigned long lastActivity = 0;
const unsigned long timeout = 6000; // 6 ثواني

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // الزر مفعّل بمقاومة داخلية
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // إذا انضغط الزر
  if (digitalRead(buttonPin) == LOW) {
    delay(200); // debounce
    isOn = !isOn;  // عكس الحالة
    digitalWrite(ledPin, isOn ? HIGH : LOW);
    lastActivity = millis(); // حدث نشاط جديد
    while (digitalRead(buttonPin) == LOW); // انتظر حتى يترك الزر
  }

  // إيقاف تلقائي بعد وقت
  if (isOn && millis() - lastActivity > timeout) {
    isOn = false;
    digitalWrite(ledPin, LOW);
  }
}
