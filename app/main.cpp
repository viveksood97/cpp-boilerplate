// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   main.cpp
/// @authors Vivek Sood, Pratik Acharya
/// @brief Driver: Vivek Sood Navigator: Pratik Acharya
/// @date   2021-10-02

#include <pid.hpp>


/// @brief main function which calls PID controller
int main() {
    /// creating object pid of PID controller class
    PIDController pid;

    /// Set target velocity
    pid.setTargetVelocity(15);

    /// Calculate new velocity
    std::cout << pid.computeNewVelocity(5) << std::endl;
    return 0;
}
