// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.

/// @file   pid.cpp
/// @authors Vivek Sood, Pratik Acharya
/// @brief Driver: Vivek Sood Navigator: Pratik Acharya
/// @date   2021-10-02

#pragma once

#include <iostream>

/// @class PIDController
/// @brief Implementation of a PID controller
class PIDController {
 private:
    double kp;
    double ki;
    double kd;
    double summationError;
    double pastError;
    double targetVelocity;
    double timeInterval;

 public:
    /// @brief Setter for targetVelocity.
    /// @param[in] velocity the value of velocity to set
    void setTargetVelocity(double velocity) {
        targetVelocity = velocity;
    }

    /// @brief Computes the new velocity using
    /// kp, ki, kd, summationError, pastError,
    /// targetVelocity and timeInterval
    /// @param[in] currentVelocity the current velocity
    /// @return new velocity
    double computeNewVelocity(double currentVelocity) {
        double newVelocity = -1;
        return newVelocity;
    }
};


