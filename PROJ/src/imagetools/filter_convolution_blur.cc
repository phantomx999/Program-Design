/*
	filter_convolution_blur.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "flashphoto/filter_convolution_blur.h"
#include <math.h>
#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/image_tools_math.h"

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
  int rad = static_cast<int>(radius_);  // cast radius to int
  kernel_ = new FloatMatrix(rad);       // create kernel size radius
  float dist = 0.0;                // distance formula value
  float delta_x = 0.0;             // change in x position
  float delta_y = 0.0;             // change in y position
  float Gaus = 0.0;                // gaussian value from function
  int length = rad*2 + 1;          // length of kernel matrix
  // center of (x, y) = (rad, rad)

  // go through matrix
  for (int row = 0; row < length; row++) {
    for (int column = 0; column < length; column++) {
      delta_x = column - radius_;
      delta_y = row - radius_;
      // find distance from kernel x y val to
      // center of matrix (radius, radius)
      dist = sqrt((delta_x * delta_x) + (delta_y * delta_y));
      // use calculated distance and radius with
      // Gaussian function to get Gaus val
      Gaus = ImageToolsMath::Gaussian(dist, radius_);
      kernel_->set_value(column, row, Gaus);  // set this new Gaus in kernel
    }
  }
  kernel_->Normalize();  // divide each kernel element by sum
}

// used for blur tool blur filter, acquire copy buffer
void ConvolutionFilterBlur::setCopyBuffer(PixelBuffer* buffer) {
  copy_buffer_ = new PixelBuffer(*buffer);
}

}  // namespace image_tools
