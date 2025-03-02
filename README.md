Overview-
The Automatic Floor Cleaner is a simple autonomous robot that navigates and cleans floors using an 8051 microcontroller. It detects obstacles using IR sensors, controls movement using DC motors, and operates a cleaning mop for effective cleaning. The system is designed to be an affordable and efficient alternative to high-end robotic vacuum cleaners.

Features-
Autonomous Navigation – Uses IR sensors to detect and avoid obstacles
Motorized Cleaning Mop – Ensures continuous cleaning while the robot moves
Efficient Motor Control – Controlled using an L293D motor driver
Low-Cost Design – Uses readily available components
Scalable – Can be improved with IoT, scheduling, and advanced navigation

Project Components-
Hardware-
8051 Microcontroller (AT89C51)
IR Sensors (x2) – Obstacle detection
DC Motors (x3) – 2 for wheels, 1 for mop
L293D Motor Driver – Controls motor operations
9V Battery – Powers the mop motor
12V Power Supply – Powers the wheels
Wheels (x4) – 2 driving wheels, 2 balancing wheels

Software and Tools-
Keil uVision IDE – Code development and simulation
PROGISP – Code uploading to 8051
Embedded C – Programming language

Working Principle-
Obstacle Detection: The IR sensors detect obstacles in real time
Decision Making: The 8051 microcontroller processes sensor data and decides movement
Motor Control: The L293D driver controls the DC motors based on sensor input
Navigation: The cleaner moves forward, turns left or right when needed, and stops if fully blocked
Cleaning Mechanism: The mop motor runs continuously, ensuring floor cleaning during movement
