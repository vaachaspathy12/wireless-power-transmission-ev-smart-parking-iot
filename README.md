# EV Wireless Charging and Smart Parking System using IoT

## Overview

This project implements an IoT-based Electric Vehicle (EV) Wireless Charging and Smart Parking System using Arduino. The system detects vehicle presence in parking slots using ultrasonic sensors and automatically enables the corresponding wireless charging station. Parking and charging status are displayed on an LCD screen and monitored through the Arduino controller.

## Features

- Smart parking slot detection using ultrasonic sensors
- Automatic activation of wireless charging stations
- Real-time LCD status display
- Dual parking slot monitoring
- Relay-controlled charging station operation
- Arduino-based implementation
- Low-cost prototype for EV charging infrastructure

## Components Used

- Arduino Uno
- Ultrasonic Sensor (HC-SR04) × 2
- 16x2 LCD Display
- Relay Module × 2
- Wireless Power Transfer Coils
- Breadboard and Connecting Wires
- Power Supply

## Working Principle

1. Ultrasonic sensors continuously monitor the parking slots.
2. When a vehicle is detected within the predefined threshold distance, the corresponding parking slot is marked as occupied.
3. The Arduino activates the relay associated with that charging station.
4. Wireless power transfer is enabled for the detected vehicle.
5. The LCD displays the active charging station information.
6. Distance information is also sent through the serial monitor for debugging and monitoring.

   Start
  ↓
Initialize LCD
  ↓
Initialize Sensors
  ↓
Measure Distance 1
  ↓
Measure Distance 2
  ↓
Vehicle in Slot 1?
  ↓
Relay 1 ON/OFF
  ↓
Vehicle in Slot 2?
  ↓
Relay 2 ON/OFF
  ↓
Update LCD
  ↓
Print Distances
  ↓
Repeat Forever

## Pin Configuration

| Component | Arduino Pin |
|------------|------------|
| Ultrasonic Sensor 1 Trigger | D2 |
| Ultrasonic Sensor 1 Echo | D3 |
| Ultrasonic Sensor 2 Trigger | D4 |
| Ultrasonic Sensor 2 Echo | D5 |
| Relay 1 | D6 |
| Relay 2 | D7 |
| LCD RS | D8 |
| LCD EN | D9 |
| LCD D4 | D10 |
| LCD D5 | D11 |
| LCD D6 | D12 |
| LCD D7 | D13 |

## Software Used

- Arduino IDE
- Embedded C/C++
- IoT-Based Monitoring Concepts

## Applications

- Smart EV Charging Stations
- Automated Parking Management
- Smart Cities Infrastructure
- Sustainable Transportation Systems

## Future Enhancements

- Mobile App Integration
- Cloud-Based Monitoring
- RFID-Based Vehicle Authentication
- Online Slot Reservation System
- Real-Time Energy Monitoring

## Author

Shree Krishna Vaachaspathy

## License

This project is intended for educational and academic purposes.
