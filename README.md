# Obstacle-Avoiding-Car



## Introduction

Obstacle Avoiding Car (OAC) is a project which uses an Arduino and an ultrasonic distance sensor to give a car the ability to navigate obstacles and avoid them. The distance information detected from the ultrasonic sensor will be sent to the Arduino which allows the car to control its motors and avoid obstacles. This project involves the basics of Arduino programming as well as different hardware concepts such as motor drivers, LEDs, resistors, and of course, breadboards. This is a good introduction project to Arduino and challenging enough to help you combine different concepts into a working product.

<img src="/Images/obstacle_avoiding_car1.jpg" width=500 align=center>

## Working Principle

The main principle of this obstacle avoiding car is distance sensing with the ultrasonic sensor and car-movement execution by controlling the motors with the motor driver chip L293D. The ultrasonic sensor constantly detects the distance between the car and the obstacle ahead of it. On a normal operation, the motor keeps moving forward. However, whenever the detected distance is close enough, the Arduino receives the warining from the sensor and sends signals to the motor driver chips L239D to control the motors causing the car to perform a backup and turn sequence into a new direction where there is no obstacle. Then, the car continues to move forward until a new obstacle is detected ahead. This loop continues as long as the car is turned on.



## Skills and Concepts Learnt

1. Arduino coding: 
- User defined functions
- Basic hardware functions in Arduino (pinMode, digitalWrite
- If/else statements
- Loops

2. Hardware concepts
- Breadboards
- Arduino Pinouts
- Motors and motor drivers
- LEDs and resistors
- Basic circuit theory

## Directory Structure

- `Hardware` contains the parts list, the assembly instructions for constructing the Arudino-based circuit and building the physial chassis for the car.
- `obstacleAvoidingCar` contains Arduino-specific code for the car.
- `Images` contains all the photos related to this projects.
