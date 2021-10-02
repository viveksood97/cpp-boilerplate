// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.

#include <gtest/gtest.h>
#include <pid.hpp>

class TEST : public::testing::Test{
 public:
    PIDController testPID;
};


TEST_F(TEST, should_pass) {
      EXPECT_NE(testPID.computeNewVelocity(1.1), -1);
  }



int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

