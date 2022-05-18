//
// Created by prenn on 16.05.2022.
//

#ifndef MDSE_2_GITHUB_MOTOR_H
#define MDSE_2_GITHUB_MOTOR_H


class Motor {
private:
    int motorspeed;

    void setSpeed(int speed);
    int getSpeed();
    void emergencyBrake();
};


#endif //MDSE_2_GITHUB_MOTOR_H
