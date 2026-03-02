Automatic Traffic Signal System using Ultrasonic Sensor
Project Overview

This project implements an intelligent traffic signal control system using Arduino and Ultrasonic Sensors (HC-SR04). The system detects vehicle density and dynamically adjusts traffic light timing to improve traffic flow and reduce congestion.

The complete system was designed and simulated using Proteus Professional, and the control logic was developed in Arduino IDE.

 Tools & Technologies Used

Arduino Uno

Embedded C (Arduino IDE)

HC-SR04 Ultrasonic Sensor

Proteus Professional (Simulation)

LEDs (Red, Yellow, Green)

Resistors

System Working

Ultrasonic sensors measure vehicle distance.

If distance is below a threshold → traffic density is high.

Green signal time increases for that lane.

If no vehicle is detected → signal timing is reduced/skipped.

System runs continuously and updates dynamically.

Project Files
automatic-traffic-signal-ultrasonic/
│
├── traffic_with_ultrasonic.ino        → Arduino source code
├── traffic_with_ultrasonic.pdsprj     → Proteus simulation project
└── README.md
How to Run the Project
Arduino Code

Open traffic_with_ultrasonic.ino in Arduino IDE.

Select Board → Arduino Uno.

Upload the code to Arduino (or generate HEX file for Proteus).

🔹 Proteus Simulation

Open traffic_with_ultrasonic.pdsprj in Proteus.

Load the compiled HEX file into Arduino component.

Run simulation.

Features

Automatic traffic light control

Vehicle density detection

Dynamic green signal timing

Fully simulated in Proteus

Cost-effective smart traffic solution

Future Enhancements

IoT-based traffic monitoring

Emergency vehicle detection

AI-based traffic prediction

Real-time traffic data logging

📜 License

This project is licensed under the MIT License.
