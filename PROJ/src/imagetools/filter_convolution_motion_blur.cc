/*
	filter_convolution_motion_blur.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "imagetools/filter_convolution_motion_blur.h"
#include <mingfx.h>
#include <math.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "imagetools/color_data.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/float_matrix.h"
#include "imagetools/image_tools_math.h"

//  using namespace std;

namespace image_tools {

ConvolutionFilterMotionBlur::ConvolutionFilterMotionBlur() {
  radius_ = 1.0;             // default radius
  direction_ = "East/West";  // default direction
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
  int rad = radius_;  // radius to int
  kernel_ = new FloatMatrix(rad);  // kernel with size radius
  int length = 2*rad + 1;          // length n of matrix
  kernel_->Scale(0.0);             // all kernel values = 0.0
  float element = 1.0/length;      // direction kernel element values
  // 1/n for all non zero elements in matrix
  // set 1/n for direction elements, 0 for all other elements
  if (direction_ == "East/West") {  // middle row of matrix, left to right
    for (int column = 0; column < kernel_->width(); column++) {
      kernel_->set_value(column, rad, element);
    }
    // middle column of matrix, up and down
  } else if (direction_ == "North/South") {
    for (int row = 0; row < kernel_->height(); row++) {
      kernel_->set_value(rad, row, element);
    }
    // left upper corner to bottom lower corner
  } else if (direction_ == "Northwest/Southeast") {
    for (int row = 0; row < kernel_->height(); row++) {
      for (int column = 0; column < kernel_->width(); column++) {
        if (row == column) {
          kernel_->set_value(column, row, element);
        }
      }
    }
    // right upper corner to bottom lower corner
  } else if (direction_ == "Northeast/Southwest") {
    int double_rad = 2*rad;
    for (int row = 0; row < kernel_->height(); row++) {
      for (int column = 0; column < kernel_->width(); column++) {
        if ((row + column == double_rad) && (row != column)) {
          kernel_->set_value(column, row, element);
        }
      }
    }
  } else {  // error
    std::cout << "Error, incorrect direction" << std::endl;
  }
}

}  // namespace image_tools
