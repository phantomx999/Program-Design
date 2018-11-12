/*
	filter_saturate.cc
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
#include "flashphoto/image_tools_math.h"
#include "flashphoto/filter_saturate.h"

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
    ColorData data = buffer->pixel(x, y);
    float sat = data.Luminance();
    ColorData gray_scale(sat, sat, sat);
    ColorData final_value = ImageToolsMath::Lerp(gray_scale, data, saturate_);
    buffer->set_pixel(x, y, final_value);
    return final_value;
  }

}  // namespace image_tools
