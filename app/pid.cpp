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

    double PIDController::computeNewVelocity(double currentVelocity) {
        double newVelocity = -1;
        return newVelocity;
    }

