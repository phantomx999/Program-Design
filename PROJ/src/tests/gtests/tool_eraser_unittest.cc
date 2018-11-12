#include <math.h>
#include <iostream>
#include "gtest/gtest.h"
#include "flashphoto/tool_eraser.h"

using image_tools::ToolEraser;

class ToolEraserTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  ToolEraser eraser_;
};

TEST_F(ToolEraserTest, HasCorrectName) {
  EXPECT_EQ(eraser_.name(), "Eraser");
}

TEST_F(ToolEraserTest, HasCorrectMask) {
  // Get Mask from pen and compare with
  // what it is supposed to be.
}