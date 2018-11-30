/*
	filter_convolution_sharpen.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "flashphoto/filter_convolution_sharpen.h"
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

ConvolutionFilterSharpen::ConvolutionFilterSharpen() {
  radius_ = 1.0;
}

ConvolutionFilterSharpen::ConvolutionFilterSharpen(float rad) {
  radius_ = rad;
}

ConvolutionFilterSharpen::~ConvolutionFilterSharpen() {}

void ConvolutionFilterSharpen::setRadius(float rad) {
  radius_ = rad;
}

float ConvolutionFilterSharpen::getRadius() {
  return radius_;
}

void ConvolutionFilterSharpen::CreateKernel() {
  float length = 2.0*radius_ + 1;      // n size length of matrix
  int integer_rad = static_cast<int>(radius_);  // radius to int
  kernel_ = new FloatMatrix(radius_);  // create kernel size radius
  kernel_->Scale(-1.0);                // set all elements to -1
  // for center element, change val to n*n (matrix length)
  kernel_->set_value(integer_rad, integer_rad, length*length);
  //  *kernel_ = kernel;
}

}  // namespace image_tools
