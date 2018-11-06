/*
	filter_convolution_sharpen.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CONVOLUTION_SHARPEN_H_
#define FLASHPHOTO_FILTER_CONVOLUTION_SHARPEN_H_

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/filter_convolution.h"


namespace image_tools {

class ConvolutionFilterSharpen : public ConvolutionFilter {
  public:
    ConvolutionFilterSharpen();
    ConvolutionFilterSharpen(float rad);
    virtual ~ConvolutionFilterSharpen();
    float getRadius();
    void setRadius(float rad);
    void CreateKernel() override;
  protected:
    float radius_;
};

}
#endif
