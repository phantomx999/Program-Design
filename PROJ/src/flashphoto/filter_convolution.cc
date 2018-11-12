/*
	filter_convolution.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "flashphoto/filter_convolution.h"
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

ConvolutionFilter::ConvolutionFilter() {
  kernel_ = NULL;
}

ConvolutionFilter::ConvolutionFilter(FloatMatrix* kernel) {
  kernel_ = kernel;
}

ConvolutionFilter::~ConvolutionFilter() {}

void ConvolutionFilter::setKernel(FloatMatrix* kernel) {
  kernel_ = kernel;
}

FloatMatrix* ConvolutionFilter::getKernel() {
  return kernel_;
}

bool ConvolutionFilter::can_copy_in_place() {
  return false;
}

ColorData ConvolutionFilter::CalculateFilteredPixel(PixelBuffer* buffer,
                                                    int x, int y) {
  ColorData sum(0.0, 0.0, 0.0);  // sum all color vals
  // go through kernel, calculate imageX and Y 
  // using equation from "http://lodev.org/cgtutor/filtering.html" 
  for (int row = 0; row < kernel_->height(); row++) {
    for (int column = 0; column < kernel_->width(); column++) {
      int imageX = (x - kernel_->width()/2 + column + buffer->width())
                     % buffer->width();
      int imageY = (y - kernel_->height()/2 + row + buffer->height())
                     % buffer->height();
      // use copy buffer x, y  multiplied by kernel x, y 
      ColorData temp = copy_buffer_->pixel(imageX, imageY)
                        * kernel_->value(column, row);
      sum = sum + temp;  // sum up vals
    }
  }
  sum.Clamp();  // set sum between 0.0 and 1.0
  buffer->set_pixel(x, y, sum);  // change pix color
  return sum;
}

}  // namespace image_tools
