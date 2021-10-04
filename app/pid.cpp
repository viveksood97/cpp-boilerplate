// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   pid.cpp
/// @authors Vivek Sood, Pratik Acharya
/// @brief Driver: Vivek Sood Navigator: Pratik Acharya
/// @date   2021-10-02

#include <pid.hpp>

    PIDController::PIDController() {
        targetVelocity = 0;
    }

    PIDController::~PIDController() {}

    /**
     * @brief Function to set target velocity
     * @param  targetVelocity
    
     */
    void PIDController::setTargetVelocity(double velocity) {
        targetVelocity = velocity;
    }

    /**
     * @brief Function to get target velocity
     * @param  targetVelocity
    
     */
    double PIDController::getTargetVelocity() {
        return targetVelocity;
    }
    /**
     * @brief Computes PID controller output which uses current velocity and target velocity to compute error 
     * @param  targetVelocity
     * @param  currentVelocity
     * @param  newVelocity
    
     */
    float PIDController::computeNewVelocity(double currentVelocity) {
        double error = targetVelocity - currentVelocity;
        float newVelocity = currentVelocity;
        double Pout, integral(0.0), Iout, derivative, Dout, summationError;
        // Proportional error calculation
        Pout = kp* error;
        // Integral error calculation
        integral += error*timeInterval;
        Iout = ki*integral;

        // Derivative error calculation
        derivative = (error - pastError)/timeInterval;
        Dout = kd * derivative;

        // Total error
        summationError = Pout + Iout + Dout;
        pastError = error;

        // New velocity calculation by adding PID control feedback
        newVelocity = newVelocity + summationError;

        return newVelocity;
    }

