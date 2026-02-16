# AI Smart Environment Controller (ESP32 + DHT11 + MQ135 + Blynk) 🤖🌿

Next-level smart environment controller with comfort logic and automation.
Intelligent environmental monitoring with smart automation.

This project implements an **AI-inspired Smart Environment Controller** using an **ESP32**, **DHT11 sensor**, **MQ135 air quality sensor**, and **Blynk IoT cloud dashboard**.

Unlike basic monitoring systems, this project introduces a **decision-making comfort logic layer**, allowing the system to automatically control environment conditions.

Sensors + Logic + Automation = Smart IoT System.

---

## 🧠 Project Overview

---

## ⚡ Key Features

- AI-style comfort decision system
- AQI classification:
  - GOOD
  - MODERATE
  - POOR
  - HAZARDOUS
- Comfort mode evaluation:
  - COMFORT
  - WARM
  - HUMID
  - AIR_BAD
  - CRITICAL
- Automatic fan control
- Hazard alerts using Blynk events
- Modular multi-file firmware architecture
- Auto WiFi reconnect system
- Real-time cloud monitoring

---

## 📂 Project Structure


This structure follows **industry-style embedded firmware architecture**.

---

## 🔧 Hardware Components

- ESP32 Development Board  
- DHT11 Temperature & Humidity Sensor  
- MQ135 Air Quality Sensor  
- Relay Module (fan control)  
- Buzzer  
- Smartphone with Blynk App  

---

## 🔌 Pin Connections

| Component | ESP32 GPIO |
|-----------|------------|
| DHT11 DATA | GPIO 4 |
| MQ135 AO | GPIO 34 |
| Fan Relay | GPIO 26 |
| Buzzer | GPIO 27 |

---

## 📱 Blynk Dashboard Configuration

| Virtual Pin | Purpose |
|-------------|---------|
| V0 | Temperature |
| V1 | Humidity |
| V2 | Air Quality Raw |
| V3 | AQI Category |
| V4 | Comfort Mode |
| V10 | Auto Mode Switch |

Create Blynk Event:

---

## 💻 Logic Workflow

1. Read environmental sensors
2. Classify air quality
3. Evaluate comfort mode
4. Apply automation decision:
   - Fan ON if warm / poor air
5. Send updates to Blynk
6. Trigger alerts when critical

---

## 🚀 Advanced Concepts Used

- Decision-based automation
- Environmental comfort logic
- Embedded modular firmware design
- IoT cloud synchronization
- Real-time automation control

---

## 🎯 Applications

- Smart room environment control
- Automated ventilation systems
- Indoor air monitoring
- AI-inspired IoT systems
- Embedded systems portfolio projects

---

## 🔮 Future Expansion Ideas

- Multi-room AI monitoring network
- Voice assistant automation
- SMS fallback alerts
- Data analytics dashboard
- Machine learning prediction
- Energy efficiency optimization

---

## 🧠 Author
**Dhruvang Bari**

Built to demonstrate intelligent IoT automation using sensor-driven decision logic.

The system continuously monitors:

- 🌡 Temperature  
- 💧 Humidity  
- 🌫 Air Quality  

The ESP32 analyzes sensor data using **comfort evaluation logic** and automatically performs actions such as turning ON a fan when environmental conditions worsen.

### System Architecture



## Features
- Modular multi-file architecture
- AQI classification (GOOD/MODERATE/POOR/HAZARDOUS)
- Comfort mode evaluation (temperature + humidity + air quality)
- AI-style decision layer (comfort logic)
- Auto fan control
- Hazard alerts via Blynk events
- Auto WiFi reconnect

## Blynk Virtual Pins
- V0 Temperature
- V1 Humidity
- V2 Air Raw
- V3 AQI Category
- V4 Comfort Mode
- V10 Auto Mode toggle

## Author
Dhruvang Bari
