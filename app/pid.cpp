// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


#include <iostream>
#include <pid.hpp>



int main()
{
    PIDController pid;
    std::cout << pid.computeNewVelocity(0) << std::endl;
    return 0;
}
