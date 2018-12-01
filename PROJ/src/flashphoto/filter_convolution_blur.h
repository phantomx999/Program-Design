/*
	filter_convolution_blur.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CONVOLUTION_BLUR_H_
#define FLASHPHOTO_FILTER_CONVOLUTION_BLUR_H_

#include "flashphoto/filter_convolution.h"
#include <mingfx.h>
#include <math.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"

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
#endif  // FLASHPHOTO_FILTER_CONVOLUTION_BLUR_H_