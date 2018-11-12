/*
	filter_convolution_blur.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>
#include <math.h>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/image_tools_math.h"
#include "flashphoto/filter_convolution_blur.h"

namespace image_tools {

ConvolutionFilterBlur::ConvolutionFilterBlur() {
  radius_ = 1.0;
}

ConvolutionFilterBlur::ConvolutionFilterBlur(float rad) {
  radius_ = rad;
}

ConvolutionFilterBlur::~ConvolutionFilterBlur() {}

void ConvolutionFilterBlur::setRadius(float rad) {
  radius_ = rad;
}

float ConvolutionFilterBlur::getRadius() {
  return radius_;
}

void ConvolutionFilterBlur::CreateKernel() {
  //  int rad = (int) radius_;
  int rad = static_cast<int>(radius_);
  kernel_ = new FloatMatrix(rad);
  float dist = 0.0;
  float delta_x = 0.0;
  float delta_y = 0.0;
  float Gaus = 0.0;
  int length = rad*2 + 1;
  // center of (x, y) = (rad, rad)

  for (int row = 0; row < length; row++) {
    for (int column = 0; column < length; column++) {
      delta_x = column - radius_;
      delta_y = row - radius_;
      dist = sqrt((delta_x * delta_x) + (delta_y * delta_y));
      float one_and_half = radius_ + 0.5;
      Gaus = ImageToolsMath::Gaussian(dist, one_and_half);
      kernel_->set_value(column, row, Gaus);
    }
  }
  kernel_->Normalize();
}

void ConvolutionFilterBlur::setCopyBuffer(PixelBuffer* buffer) {
  copy_buffer_ = new PixelBuffer(*buffer);
}

}  // namespace image_tools
