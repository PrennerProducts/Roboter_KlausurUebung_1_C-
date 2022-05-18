//
// Created by prenn on 16.05.2022.
//

#ifndef MDSE_2_GITHUB_ROBOTEXCEPTION_H
#define MDSE_2_GITHUB_ROBOTEXCEPTION_H


#include <stdexcept>

class RobotException: public std::runtime_error{
public:
    using std::runtime_error::runtime_error;
};


class CriticalDangerException: public RobotException{
public:
    using RobotException::RobotException;
};


class InternalErrorException: public RobotException{
public:
    using RobotException::RobotException;
};

#endif //MDSE_2_GITHUB_ROBOTEXCEPTION_H
