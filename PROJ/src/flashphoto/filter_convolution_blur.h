/*
	filter_convolution_blur.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CONVOLUTION_BLUR_H_
#define FLASHPHOTO_FILTER_CONVOLUTION_BLUR_H_

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>
#include <math.h>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/filter_convolution.h"


namespace image_tools {

class ConvolutionFilterBlur : public ConvolutionFilter {
  public:
    ConvolutionFilterBlur();
    ConvolutionFilterBlur(float rad);
    virtual ~ConvolutionFilterBlur();
    float getRadius();
    void setRadius(float rad);
    void CreateKernel() override;
    void setCopyBuffer(PixelBuffer* buffer);
  protected:
    float radius_;
};

}
#endif
