/*
	filter_convolution_edge.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CONVOLUTION_EDGE_H_
#define FLASHPHOTO_FILTER_CONVOLUTION_EDGE_H_

#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/filter_convolution.h"


namespace image_tools {

class ConvolutionFilterEdge : public ConvolutionFilter {
 public:
    ConvolutionFilterEdge();
    virtual ~ConvolutionFilterEdge();
    void CreateKernel() override;
};

}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_CONVOLUTION_EDGE_H_
