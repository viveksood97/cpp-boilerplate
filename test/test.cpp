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



