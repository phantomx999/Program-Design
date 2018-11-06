/*
	filter_convolution.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/image_tools_math.h"
#include "flashphoto/filter_convolution.h"

namespace image_tools{

ConvolutionFilter::ConvolutionFilter(){
  kernel_ = NULL;
}

ConvolutionFilter::ConvolutionFilter(FloatMatrix* kernel){
  kernel_ = kernel;
}

ConvolutionFilter::~ConvolutionFilter() {}



void ConvolutionFilter::setKernel(FloatMatrix* kernel){
  kernel_ = kernel;
}

FloatMatrix* ConvolutionFilter::getKernel(){
  return kernel_;
}

bool ConvolutionFilter::can_copy_in_place(){
  return false;
}

ColorData ConvolutionFilter::CalculateFilteredPixel(PixelBuffer* buffer, int x, int y){
  ColorData sum(0.0, 0.0, 0.0);
  for(int row = 0; row < kernel_->height(); row++){
    for(int column = 0; column < kernel_->width(); column++){
      int imageX = (x - kernel_->width()/2 + column + buffer->width()) % buffer->width();
      int imageY = (y - kernel_->height()/2 + row + buffer->height()) % buffer->height();
      ColorData temp = copy_buffer_->pixel(imageX, imageY) * kernel_->value(column, row);
      sum = sum + temp;
    }
  }
  sum.Clamp();
  buffer->set_pixel(x, y, sum);
  return sum;
}

}
