/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#include <iostream>
#include <string>
#include <cmath>
#include "mia/image_editor_commands.h"
#include "mia/command_line_processor.h"
#include "mia/command_execution.h"
#include <imageio/image.h>
#include <imageio/image_manager.h>
#include "imagetools/image_editor.h"
#include "imagetools/color_data.h"
#include "imagetools/pixel_buffer.cc"
//#include "gtest/gtests.h"

using imagetools;

class FilterMotionBlurNSTest : public ::testing::Test {
    void Setup() override {
      ColorData white(1, 1, 1);
      ColorData white2(1, 1, 1);
      PixelBuffer* tmp = new PixelBuffer(1280, 720, white);
      edit_ = new ImageEditor(tmp);
      PixelBuffer* tmp2 = new PixelBuffer(1280, 720, white2);
      expect_ = new ImageEditor(tmp2);
    }
    void TearDown() override {
      delete expect_;
      delete edit_;
    }
  protected:
    ImageEditor* edit_;
    ImageEditor* expect_;
};

TEST_F(FilterMotionBlurNSTest, FilterMotionBlurNS) {
  
} 
