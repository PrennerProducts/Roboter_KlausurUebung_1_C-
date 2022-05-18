//
// Created by prenn on 16.05.2022.
//

#include <iostream>
#include "Sensor.h"
#include "RobotException.h"

int Distancesensor::checkSensor() {
    int randvalue =  rand() % 100;
    if(randvalue < 5){
        throw InternalErrorException("Throw InternalErrorEception!");
    }
    std::cout << "My random Nummer = " << randvalue << std::endl;

    return 1234234234;
}
