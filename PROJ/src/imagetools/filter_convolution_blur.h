/*
	filter_convolution_blur.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_CONVOLUTION_BLUR_H_
#define IMAGETOOLS_FILTER_CONVOLUTION_BLUR_H_

#include "imagetools/filter_convolution.h"
#include <mingfx.h>
#include <math.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "imagetools/color_data.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/float_matrix.h"

namespace image_tools {

class ConvolutionFilterBlur : public ConvolutionFilter {
 public:
    ConvolutionFilterBlur();
    explicit ConvolutionFilterBlur(float rad);
    virtual ~ConvolutionFilterBlur();
    float getRadius();
    void setRadius(float rad);
    void CreateKernel() override;
    void setCopyBuffer(PixelBuffer* buffer);  // used for blur tool
 protected:
    // size of matrix
    float radius_;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_CONVOLUTION_BLUR_H_
