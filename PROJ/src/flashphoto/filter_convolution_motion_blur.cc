/*
	filter_convolution_motion_blur.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "flashphoto/filter_convolution_motion_blur.h"
#include <mingfx.h>
#include <math.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/image_tools_math.h"

//  using namespace std;

namespace image_tools {

ConvolutionFilterMotionBlur::ConvolutionFilterMotionBlur() {
  radius_ = 1.0;
  direction_ = "East/West";
}

ConvolutionFilterMotionBlur::ConvolutionFilterMotionBlur(
                             float rad, std::string direction) {
  radius_ = rad;
  direction_ = direction;
}

ConvolutionFilterMotionBlur::~ConvolutionFilterMotionBlur() {}

void ConvolutionFilterMotionBlur::setRadius(float rad) {
  radius_ = rad;
}

float ConvolutionFilterMotionBlur::getRadius() {
  return radius_;
}

void ConvolutionFilterMotionBlur::setDirection(std::string direction) {
  direction_ = direction;
}

std::string ConvolutionFilterMotionBlur::getDirection() {
  return direction_;
}

void ConvolutionFilterMotionBlur::CreateKernel() {
  int rad = radius_;
  kernel_ = new FloatMatrix(rad);
  kernel_->Scale(0.0);
  int length = 2*rad + 1;
  float element = 1.0/length;
  // std::cout << direction_ << std::endl;
  if (direction_ == "East/West") {
    for (int column = 0; column < kernel_->width(); column++) {
      kernel_->set_value(column, rad, element);
    }
  } else if (direction_ == "North/South") {
    for (int row = 0; row < kernel_->height(); row++) {
      kernel_->set_value(rad, row, element);
    }
  } else if (direction_ == "Northwest/Southeast") {
    for (int row = 0; row < kernel_->height(); row++) {
      for (int column = 0; column < kernel_->width(); column++) {
        if (row == column) {
          kernel_->set_value(column, row, element);
        }
      }
    }
  } else if (direction_ == "Northeast/Southwest") {
    int double_rad = 2*rad;
    for (int row = 0; row < kernel_->height(); row++) {
      for (int column = 0; column < kernel_->width(); column++) {
        if ((row + column == double_rad) && (row != column)) {
          kernel_->set_value(column, row, element);
        }
      }
    }
  } else {
    std::cout << "Error, incorrect direction" << std::endl;
  }
}

}  // namespace image_tools
