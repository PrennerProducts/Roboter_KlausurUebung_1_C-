//
// Created by prenn on 16.05.2022.
//

#include <iostream>
#include "Motor.h"

void Motor::setSpeed(int speed) {
    if(speed <=10 && speed >=0) motorspeed = speed;
}

int Motor::getSpeed() {
    return motorspeed;
}

void Motor::emergencyBrake() {
    motorspeed = 0;
    std::cout << "EmergencyBreak! Motorspeed ist " << getSpeed() << std::endl;
}
