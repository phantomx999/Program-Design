/*
	filter_convolution_motion_blur.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CONVOLUTION_MOTION_BLUR_H_
#define FLASHPHOTO_FILTER_CONVOLUTION_MOTION_BLUR_H_

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

using namespace std;

namespace image_tools {

class ConvolutionFilterMotionBlur : public ConvolutionFilter {
 public:
    ConvolutionFilterMotionBlur();
    ConvolutionFilterMotionBlur(float rad, string direction);
    virtual ~ConvolutionFilterMotionBlur();
    float getRadius();
    void setRadius(float rad);
    string getDirection();
    void setDirection(string direction);
    void CreateKernel() override;
 protected:
    float radius_;
    string direction_;
};

}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_CONVOLUTION_MOTION_BLUR_H_
