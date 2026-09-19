# :seedling: Bloomie 

![Status: v0.1 Prototype](https://img.shields.io/badge/Status-v0.1_Prototype-blue)
![Platform: ESP32](https://img.shields.io/badge/Hardware-ESP32-lightgrey)
![Language: C++](https://img.shields.io/badge/Language-C-orange)

## 📌 Project Overview
The **Bloomie** is an in-development IoT project designed to monitor plant health parameters. The ultimate goal is to create a fully integrated, low-power embedded system featuring a custom PCB, Real-Time Operating System architecture, and a responsive web dashboard for remote monitoring.

Currently, the project is in the **v0.1 MVP (Minimum Viable Product)** phase, focusing on establishing reliable hardware connections and precise analog data acquisition from a soil moisture sensor.

## 🛠️ Current Hardware Stack (v0.1)
*   **Microcontroller:** ESP32 
*   **Sensor:** Soil Moisture Sensor
*   **Operating Voltage:** 3.3V  

## 🗺️ Development Roadmap
This project follows an iterative engineering approach. 

:ballot_box_with_check: **Phase 1 (v0.1):** Breadboard prototype, basic hardware setup, analog soil moisture sensor reading, and linear software calibration.  
:black_square_button: **Phase 2:** Integration of a temperature and humidity sensor via I2C communication.  
:black_square_button: **Phase 3:** Implementation of an light sensor for precise lux measurements and optimal lighting analysis.  
:black_square_button: **Phase 4:** Hardware transition from the breadboard to a **Custom PCB** design, establishing a permanent and robust embedded electronic circuit.  
:black_square_button: **Phase 5:** Firmware optimization for energy efficiency using ESP32 Deep Sleep modes. *(Optional: Architectural upgrade to a Real-Time Operating System like FreeRTOS for advanced task scheduling).*  
:black_square_button: **Phase 6:** Development of a graphical user interface (GUI). Building a responsive web dashboard utilizing HTML and CSS to intuitively visualize the plant parameters.  


## 🔌 Wiring (Prototype Phase)

| ESP32 Pin | Soil Moisture Sensor | Description |
| :--- | :--- | :--- |
| `3V3` | `VCC` | Power Supply |
| `GND` | `GND` | Ground |


