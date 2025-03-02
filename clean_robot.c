#include <reg51.h>

sbit Motor1_1 = P1^0;  // DC Motor 1
sbit Motor1_2 = P1^1;  // DC Motor 1
sbit Motor2_1 = P1^2;  // DC Motor 2
sbit Motor2_2 = P1^3;  // DC Motor 2
sbit SensorLeft = P2^1;  // Left IR Sensor
sbit SensorRight = P2^2; // Right IR Sensor

void delay(unsigned int time) {
    unsigned int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++);
}

void forward() {
    Motor1_1 = 1;  // Move Motor1 forward
    Motor1_2 = 1;
    Motor2_1 = 1;
    Motor2_2 = 1;  // Move Motor2 forward
}

void stop() {
    Motor1_1 = 0;  // Stop Motor1
    Motor1_2 = 0;
    Motor2_1 = 0;  // Stop Motor2
    Motor2_2 = 0;
}

void main() {
    while(1) {
        if(SensorLeft == 1 && SensorRight == 1) {  // No obstacle
            forward();  // Move forward
        } 
        else if(SensorLeft == 0 && SensorRight == 1) {  // Obstacle on left
            Motor1_1 = 0;
            Motor1_2 = 0;  // Stop left motor
            Motor2_1 = 1;
            Motor2_2 = 1;  // Turn right
            delay(1000);
            forward();
        } 
        else if(SensorLeft == 1 && SensorRight == 0) {  // Obstacle on right
            Motor1_1 = 1;  // Turn left
            Motor1_2 = 1;
            Motor2_1 = 0;
            Motor2_2 = 0;  // Stop right motor
            delay(1000);
            forward();
        } 
        else {  // Obstacle on both sides
            stop();  // Stop both motors
            delay(1000);
        }
    }
}
