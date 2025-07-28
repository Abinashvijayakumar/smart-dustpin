# 🗑️ Smart Dustbin – Contactless Waste Disposal System (Arduino/ESP32 Based)

This project is developed to promote **contactless waste disposal**, especially useful during **pandemic situations like COVID-19**, where minimizing surface contact is essential. The system is designed to **automatically open the dustbin lid** when someone approaches, using **ultrasonic sensing and servo control**. It is built using either **Arduino UNO/Nano** or **ESP32**, offering flexibility in implementation.

No internet connection is required, making it ideal for **homes, hospitals, schools, offices**, and **public areas** in low-connectivity zones.

---

## 🛠 Features

- 🤖 **Fully Contactless Operation**  
  Detects hand movement or human presence and opens the lid automatically.

- ⚙️ **Supports Arduino & ESP32**  
  Modular code supports both platforms, depending on available hardware.

- ⛔ **Offline & Secure**  
  Operates independently without relying on internet/cloud services.

- 🔋 **Low Power Consumption**  
  Suitable for battery or USB power. Can run efficiently on portable setups.

- 🧼 **Hygienic & Safe**  
  Minimizes risk of virus or bacteria transmission through touch.

---

## 🔧 Hardware Components

| Component        | Quantity | Purpose                             |
|------------------|----------|-------------------------------------|
| Arduino UNO / Nano OR ESP32 | 1        | Microcontroller                 |
| Ultrasonic Sensor (HC-SR04) | 1        | Proximity detection             |
| Servo Motor (SG90/MG996R)   | 1        | Lid movement                    |
| Jumper Wires                | As needed | Circuit connections            |
| Breadboard / PCB            | 1        | Prototyping                     |
| Power Source (9V Battery/USB)| 1        | System power                    |
| Dustbin with Movable Lid    | 1        | Mechanical structure            |

---

## 🧠 Working Principle

1. The ultrasonic sensor continuously measures distance in front of the bin.
2. When a person or object is detected within 15–20 cm, it triggers the servo.
3. The servo motor opens the lid for a few seconds and then closes it automatically.
4. If the person stays, the system waits before opening again — avoiding continuous operation.

---

## 💻 Programming & Setup

### 1. Requirements
- Arduino IDE
- Servo and Ultrasonic libraries (if using ESP32)

### 2. Pin Connections

**For Arduino UNO:**
- Ultrasonic Trig: D9  
- Ultrasonic Echo: D8  
- Servo Signal: D6

**For ESP32:**
- Ultrasonic Trig: GPIO 18  
- Ultrasonic Echo: GPIO 19  
- Servo Signal: GPIO 23

### 3. Upload the Code
- Connect your board to the system.
- Choose the correct COM port and board in Arduino IDE.
- Upload `smart_dustbin.ino` from this repo.

---

## 📂 Repository Structure

```bash
smart-dustbin/
├── images/                  # Demo images/videos (add your own)
├── smart_dustbin.ino        # Main source code
├── README.md                # Project documentation
├── circuit_diagram.png      # Wiring reference
├── LICENSE


## 📄 License

This project is open-sourced under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 👨‍💻 Developed By

**Abinash Vijayakumar**  
Electronics and Communication Engineer  
Tech enthusiast | Innovator | IoT & Embedded Systems Developer  
[LinkedIn](#) | [Portfolio](#)
