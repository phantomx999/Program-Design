/*
	filter_threshold.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "imagetools/filter_threshold.h"
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

  FilterThreshold::FilterThreshold(float threshold) {
    threshold_ = threshold;
  }

  FilterThreshold::FilterThreshold() {
    threshold_ = 0.0;
  }

  FilterThreshold::~FilterThreshold() {}

  float FilterThreshold::getThreshold() {
    return threshold_;
  }

  void FilterThreshold::setThreshold(float threshold) {
    threshold_ = threshold;
  }

  ColorData FilterThreshold::CalculateFilteredPixel(PixelBuffer* buffer,
                                                    int x, int y) {
    //  get color of pixel
    ColorData data = buffer->pixel(x, y);
    //  numerator value for RGB
    float numerator = data.red() + data.blue() + data.green();
    //  get average value of RGB
    float average_intensity = (numerator/3.0);
    float temp = threshold_;
    if (average_intensity > temp) {    // average RGB val > user input val
      ColorData white(1.0, 1.0, 1.0);  // set to white
      buffer->set_pixel(x, y, white);
      return white;
    } else {                             // average RGV < user input
        ColorData black(0.0, 0.0, 0.0);  // set to black
        buffer->set_pixel(x, y, black);
        return black;
    }
  }

}  // namespace image_tools
