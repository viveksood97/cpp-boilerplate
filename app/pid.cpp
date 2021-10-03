// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   pid.cpp
/// @authors Vivek Sood, Pratik Acharya
/// @brief Driver: Vivek Sood Navigator: Pratik Acharya
/// @date   2021-10-02

#include <pid.hpp>


    void PIDController::setTargetVelocity(double velocity) {
        targetVelocity = velocity;
    }

    double PIDController::getTargetVelocity() {
        return 0;
    }

    float PIDController::computeNewVelocity(double currentVelocity) {
        double error = targetVelocity - currentVelocity;
        float newVelocity = currentVelocity;
        double Pout, integral (0.0), Iout, derivative, Dout, summationError;
    
        Pout = kp* error;
        integral += error*timeInterval;
        Iout = ki*integral;
        derivative = (error - pastError)/timeInterval;
        Dout = kd * derivative;
        summationError = Pout + Iout + Dout;
        pastError= error;
        newVelocity = newVelocity + summationError;
        error = targetVelocity - newVelocity;
        return newVelocity;
    }

