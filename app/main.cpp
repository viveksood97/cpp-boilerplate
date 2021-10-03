// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   main.cpp
/// @authors Vivek Sood, Pratik Acharya
/// @brief Driver: Vivek Sood Navigator: Pratik Acharya
/// @date   2021-10-02

#include <pid.hpp>


/// @brief main function
/// @return  0
int main() {
    PIDController pid;
    pid.setTargetVelocity(15);
    std::cout << pid.computeNewVelocity(5) << std::endl;
    return 0;
}
