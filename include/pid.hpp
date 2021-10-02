// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.

#pragma once

#include <iostream>

class PIDController {
 private:
    double kp;
    double ki;
    double kd;
    double summationError;
    double targetVelocity;

 public:
    void setTargetVelocity(double velocity) {
        targetVelocity = velocity;
    }

    double computeNewVelocity(double currentVelocity) {
        return -1;
    }
};


