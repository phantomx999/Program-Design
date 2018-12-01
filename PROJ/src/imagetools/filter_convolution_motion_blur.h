/*
	filter_convolution_motion_blur.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_CONVOLUTION_MOTION_BLUR_H_
#define IMAGETOOLS_FILTER_CONVOLUTION_MOTION_BLUR_H_

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
//////////////////////////
  enum BlurDir {
    MBLUR_DIR_N_S,
    MBLUR_DIR_E_W,
    MBLUR_DIR_NE_SW,
    MBLUR_DIR_NW_SE
  };

  static std::string MotionBlurDirectionName(BlurDir dir) {
    return mblur_dir_names_.find(dir)->second;
  }
/////////////////////////
 protected:
    float radius_;  // radius of matrix user input
    std::string direction_;  // direction of blur user input
////////////////////////////////
    BlurDir mblur_dir_;
    static const std::map<BlurDir, std::string> mblur_dir_names_;
////////////////////////////////
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_CONVOLUTION_MOTION_BLUR_H_
