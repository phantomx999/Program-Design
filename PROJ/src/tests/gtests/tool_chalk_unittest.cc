#include <math.h>
#include <iostream>
#include "gtest/gtest.h"
#include "flashphoto/tool_chalk.h"

using image_tools::ToolChalk;

class ToolChalkTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  ToolChalk chalk_;
};

TEST_F(ToolChalkTest, HasCorrectName) {
  EXPECT_EQ(chalk_.name(), "Chalk");
}

TEST_F(ToolChalkTest, HasCorrectMask) {
  // Get Mask from pen and compare with
  // what it is supposed to be.
}