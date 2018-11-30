/*
	filter_convolution_edge.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "flashphoto/filter_convolution_edge.h"
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

ConvolutionFilterEdge::ConvolutionFilterEdge() {}

ConvolutionFilterEdge::~ConvolutionFilterEdge() {}

void  ConvolutionFilterEdge::CreateKernel() {
  int rad = 1;
  float neg = -1.0;
  float length = 2.0*rad + 1.0;  // length of kernel matrix
  kernel_ = new FloatMatrix(rad);  // create kernel size radius
  kernel_->Scale(neg);  // make all kernel elements -1
  // change center (rad, rad) kernel value
  kernel_->set_value(rad, rad, ((length*length) - 1.0));
  //  center value in matrix is length of matrix squared - 1
}

}  // namespace image_tools