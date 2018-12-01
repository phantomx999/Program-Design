/*
	filter_saturate.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "imagetools/filter_saturate.h"
#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "imagetools/color_data.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/float_matrix.h"
#include "imagetools/image_tools_math.h"

namespace image_tools {

  FilterSaturate::FilterSaturate(float saturate) {
    saturate_ = saturate;
  }

  FilterSaturate::FilterSaturate() {
    saturate_ = 0.0;
  }

  FilterSaturate::~FilterSaturate() {}

  float FilterSaturate::getSaturate() {
    return saturate_;
  }

  void FilterSaturate::setSaturate(float saturate) {
    saturate_ = saturate;
  }

  ColorData FilterSaturate::CalculateFilteredPixel(PixelBuffer* buffer,
                                                   int x, int y) {
    ColorData data = buffer->pixel(x, y);  // get pixel color
    float sat = data.Luminance();          // get luminance val
    ColorData gray_scale(sat, sat, sat);   // create grayscale obj
    // linearly interpolate from grayscale vs. color
    ColorData final_value = ImageToolsMath::Lerp(gray_scale, data, saturate_);
    buffer->set_pixel(x, y, final_value);  // change pixel color
    return final_value;
  }

}  // namespace image_tools
