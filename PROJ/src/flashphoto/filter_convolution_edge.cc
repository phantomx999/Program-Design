/*
	filter_convolution_edge.cc
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
#include "flashphoto/filter_convolution_edge.h"

namespace image_tools {

ConvolutionFilterEdge::ConvolutionFilterEdge() {}

ConvolutionFilterEdge::~ConvolutionFilterEdge() {}

void  ConvolutionFilterEdge::CreateKernel() {
  int rad = 1;
  float neg = -1.0;
  kernel_ = new FloatMatrix(rad);
  kernel_->Scale(neg);
  float length = 2.0*rad + 1.0;
  kernel_->set_value(rad, rad, ((length*length) - 1.0));
  //  *kernel_ = kernel;
}

}  // namespace image_tools
