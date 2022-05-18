//
// Created by prenn on 16.05.2022.
//

#ifndef MDSE_2_GITHUB_SENSOR_H
#define MDSE_2_GITHUB_SENSOR_H

#include <random>

class Sensor {
protected:
    virtual int checkSensor() = 0;

    virtual ~Sensor(){};
};

class Distancesensor:Sensor{
    virtual int checkSensor() override;
};

class Cliffsensor:Sensor{
    virtual int checkSensor() override;
};

class Camerasensor:Sensor{
    virtual int checkSensor() override;
};


#endif //MDSE_2_GITHUB_SENSOR_H
