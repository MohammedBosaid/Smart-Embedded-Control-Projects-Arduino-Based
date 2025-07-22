# 🔌 Smart Embedded Control Projects – Arduino Based

Welcome to a repository that combines two smart Arduino-based systems for real-world applications. Both projects are built using Tinkercad and aim to simulate practical embedded use cases such as energy-saving automation and nighttime intrusion detection.

---

## 📁 Projects Included

### 1. **Latching Power Switch with Auto Power-Off**
![Latching Power Switch](./latching%20power%20switch%20with%20auto%20power%20off.png)

🛠️ A button-controlled power switch system that toggles an output (like a light or device) ON/OFF.  
If the user forgets to turn it off, the system powers down automatically after a configurable timeout.

- **Input**: Push Button (with internal pull-up)
- **Output**: LED
- **Features**:
  - Latching behavior: one press = ON, next press = OFF
  - Auto shut-off after 6 seconds of inactivity
- **Use Case**: Energy-saving in environments where user forgetfulness is a risk

📄 **Code Location**: [`latching_power_switch.ino`](./latching_power_switch.ino)

---

### 2. **SmartLight Guardian – PIR + LDR Based Night Motion Detector**
![SmartLight Guardian](./SmartLight%20Guardian.png)

🎯 A security and automation system that intelligently lights up and triggers a buzzer when movement is detected **at night**.

- **Inputs**:
  - PIR Sensor (motion detection)
  - LDR or Potentiometer (light level simulation)
- **Outputs**:
  - LED (lighting)
  - Buzzer (alert)
- **Logic**:
  - Detects motion ONLY if it's dark (adjustable threshold)
  - Helps save power and reduce false triggers during daylight

📄 **Code Location**: [`smartlight_guardian.ino`](./smartlight_guardian.ino)

---

## 🧰 Tools & Platform

- [Arduino Uno](https://www.arduino.cc)
- [Tinkercad Circuits](https://www.tinkercad.com)
- Optional: [Wokwi Simulator](https://wokwi.com) for higher analog precision

---

## 🧠 Future Improvements

- Add LCD or OLED for live feedback
- Add Bluetooth module to control/reset the system remotely
- Use real-time clocks (RTC) to manage night/day modes precisely
- Store logs in EEPROM or send them to cloud dashboards


