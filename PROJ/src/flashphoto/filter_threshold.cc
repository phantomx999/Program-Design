/*
	filter_threshold.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/filter_threshold.h"

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
    ColorData data = buffer->pixel(x, y);  // get color of pixel
    float numerator = data.red() + data.blue() + data.green();
    float average_intensity = (numerator/3.0);
    float temp = threshold_;
    if (average_intensity > temp) {
      ColorData white(1.0, 1.0, 1.0);
      buffer->set_pixel(x, y, white);
      return white;
    } else {
        ColorData black(0.0, 0.0, 0.0);
        buffer->set_pixel(x, y, black);
        return black;
    }
  }

}  // namespace image_tools
