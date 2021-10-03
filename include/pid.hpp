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
    double kp = 0.4;
    double ki = 0.001;
    double kd = 0.0001;
    double summationError = 0;
    double targetVelocity;
    double pastError = 0;
    double timeInterval = 0.01;

 public:
    /// @brief Setter for targetVelocity.
    /// @param[in] velocity the value of velocity to set
    void setTargetVelocity(double velocity);

    /// @brief Computes the new velocity using
    /// kp, ki, kd, summationError, pastError,
    /// targetVelocity and timeInterval
    /// @param[in] currentVelocity the current velocity
    /// @return new velocity
    double computeNewVelocity(double currentVelocity);

    /// @brief get the target velocity
    /// @return target velocity
    double getTargetVelocity();
};


