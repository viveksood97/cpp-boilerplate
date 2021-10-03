// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.

/// @file   test.cpp
/// @authors Vivek Sood, Pratik Acharya
/// @brief Driver: Vivek Sood Navigator: Pratik Acharya
/// @date   2021-10-02

#include <gtest/gtest.h>
#include <pid.hpp>

/// @brief Creating a test class
class PIDTESTS : public ::testing::Test {
public:
  PIDController testPID;
};

/// @brief Test from PIDTESTS test cases. Checks the output
TEST_F(PIDTESTS, outputTest) {
  EXPECT_NE(testPID.computeNewVelocity(1.1), -1);
}

/// @brief Test from PIDTESTS test cases. Convergence test
/// i.e., tests whether the error is within certain threshold
TEST_F(PIDTESTS, controllerTest) {
  double currentVelocity = 0;
  double newVelocity = 0;
  testPID.setTargetVelocity(20);

  for (int i = 0; i <= 20; i++) {
    newVelocity = testPID.computeNewVelocity(currentVelocity);
    currentVelocity = newVelocity;
  }

  EXPECT_NEAR(20, newVelocity, 0.01);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
