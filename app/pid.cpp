// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   pid.cpp
/// @authors Vivek Sood, Pratik Acharya
/// @brief Driver: Vivek Sood Navigator: Pratik Acharya
/// @date   2021-10-02


#include <iostream>
#include <pid.hpp>


/// @brief main function
/// @return  0
int main() {
    PIDController pid;
    std::cout << pid.computeNewVelocity(0) << std::endl;
    return 0;
}
