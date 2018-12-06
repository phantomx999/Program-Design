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
#include "imagetools/pixel_buffer.h"
#include "gtest/gtest.h"

using image_tools::ColorData;
using image_tools::PixelBuffer;
using image_tools::ImageEditor;

class FilterQuantizeTest : public ::testing::Test {
    void SetUp() override {
      ColorData white(1, 1, 1);
      ColorData white2(1, 1, 1);
      PixelBuffer* tmp = new PixelBuffer(1280, 720, white);
      edit_ = new ImageEditor(tmp);
      PixelBuffer* tmp2 = new PixelBuffer(1280, 720, white2);
      expect_ = new ImageEditor(tmp2);
    }
/*
    void TearDown() override {
      delete expect_;
      delete edit_;
    } */
  protected:
    ImageEditor* edit_;
    ImageEditor* expect_;
};

TEST_F(FilterQuantizeTest, FilterQuantize) {
  edit_->LoadFromFile("~/3081_F18/repo-stein936/PROJ/resources/pikachu2.png");
  expect_->LoadFromFile("~/3081_F18/repo-stein936/PROJ/resources/pikachu2_quantize6.png");
  expect_->pixel_buffer()->Resize(877, 910);
  edit_->ApplyQuantizeFilter(6);
  edit_->pixel_buffer()->Resize(877, 910);
  EXPECT_EQ(*(expect_->pixel_buffer()), *(edit_->pixel_buffer()));
} 
