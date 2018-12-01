/*
	filter_quantize.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "imagetools/filter_quantize.h"
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
#include "imagetools/image_tools_math.h"

namespace image_tools {
  FilterQuantize::FilterQuantize() {
    bin_count_ = 1;
  }

  FilterQuantize::FilterQuantize(int bin_count) {
    bin_count_ = bin_count;
  }

  FilterQuantize::~FilterQuantize() {}

  void FilterQuantize::setBinCount(int bin_count) {
    bin_count_ = bin_count;
  }

  int FilterQuantize::getBinCount() {
    return bin_count_;
  }

  ColorData FilterQuantize::CalculateFilteredPixel(PixelBuffer* buffer,
                                                   int x, int y) {
    ColorData data = buffer->pixel(x, y);  // get pixel color
    int bins = getBinCount();              // get number of bins
    int num_steps = bins - 1;              // number of steps is bins-1
    float red = (round(data.red() * num_steps)/num_steps);  //  red binned vals
    float green = (round(data.green() * num_steps)/num_steps);  //  green ...
    float blue = (round(data.blue() * num_steps)/num_steps);    //  blue ...
    ColorData final_value(red, green, blue);  // create final binned color
    buffer->set_pixel(x, y, final_value);     // set pixel color to binned color
    return final_value;
  }
}  // namespace image_tools
