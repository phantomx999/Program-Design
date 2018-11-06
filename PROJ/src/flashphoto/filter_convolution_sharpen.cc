/*
	filter_convolution_sharpen.cc
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
#include "flashphoto/filter_convolution_sharpen.h"

namespace image_tools{

ConvolutionFilterSharpen::ConvolutionFilterSharpen(){
  radius_ = 1.0;
}

ConvolutionFilterSharpen::ConvolutionFilterSharpen(float rad){
  radius_ = rad;
}

ConvolutionFilterSharpen::~ConvolutionFilterSharpen() {}

void ConvolutionFilterSharpen::setRadius(float rad){
  radius_ = rad;
}

float ConvolutionFilterSharpen::getRadius(){
  return radius_;
}

void ConvolutionFilterSharpen::CreateKernel(){
  kernel_ = new FloatMatrix(radius_);
  kernel_->Scale(-1.0);
  float length = 2.0*radius_ + 1;
  kernel_->set_value((int)radius_, (int)radius_, length*length);
  //  *kernel_ = kernel;
}

}
