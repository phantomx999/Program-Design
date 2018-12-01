/*
	filter_convolution_edge.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_CONVOLUTION_EDGE_H_
#define IMAGETOOLS_FILTER_CONVOLUTION_EDGE_H_

#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "imagetools/color_data.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/float_matrix.h"
#include "imagetools/filter_convolution.h"


namespace image_tools {

class ConvolutionFilterEdge : public ConvolutionFilter {
 public:
    ConvolutionFilterEdge();
    virtual ~ConvolutionFilterEdge();
    void CreateKernel() override;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_CONVOLUTION_EDGE_H_
