/*
	filter_convolution_motion_blur.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CONVOLUTION_MOTION_BLUR_H_
#define FLASHPHOTO_FILTER_CONVOLUTION_MOTION_BLUR_H_

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

//  using namespace std;

namespace image_tools {

class ConvolutionFilterMotionBlur : public ConvolutionFilter {
 public:
    ConvolutionFilterMotionBlur();
    ConvolutionFilterMotionBlur(float rad, std::string direction);
    virtual ~ConvolutionFilterMotionBlur();
    float getRadius();
    void setRadius(float rad);
    std::string getDirection();
    void setDirection(std::string direction);
    void CreateKernel() override;
 protected:
    float radius_;  // radius of matrix user input
    std::string direction_;  // direction of blur user input
};

}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_CONVOLUTION_MOTION_BLUR_H_
