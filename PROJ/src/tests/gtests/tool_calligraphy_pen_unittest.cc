#include <math.h>
#include <iostream>
#include "gtest/gtest.h"
#include "imagetools/tool_calligraphy_pen.h"

using image_tools::ToolCalligraphyPen;

class ToolCalligraphyPenTest : public ::testing::Test {
  void SetUp() override {}

 protected:
  ToolCalligraphyPen pen_;
};

TEST_F(ToolCalligraphyPenTest, HasCorrectName) {
  EXPECT_EQ(pen_.name(), "Caligraphy Pen");
}

TEST_F(ToolCalligraphyPenTest, HasCorrectMask) {
  // Get Mask from pen and compare with
  // what it is supposed to be.
  // EXPECT_EQ(pen_.CreateMask(), MaskFactory::CreateOvalMask(radius, 70.0, 0.333));
}
