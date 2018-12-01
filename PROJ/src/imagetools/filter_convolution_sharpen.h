/*
	filter_convolution_sharpen.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_CONVOLUTION_SHARPEN_H_
#define IMAGETOOLS_FILTER_CONVOLUTION_SHARPEN_H_

#include "imagetools/filter_convolution.h"
#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "imagetools/color_data.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/float_matrix.h"


namespace image_tools {

class ConvolutionFilterSharpen : public ConvolutionFilter {
 public:
    ConvolutionFilterSharpen();
    explicit ConvolutionFilterSharpen(float rad);
    virtual ~ConvolutionFilterSharpen();
    float getRadius();
    void setRadius(float rad);
    void CreateKernel() override;
 protected:
    // rad size matrix
    float radius_;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_CONVOLUTION_SHARPEN_H_
