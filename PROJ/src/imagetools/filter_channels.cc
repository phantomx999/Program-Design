/*
	filter_channels.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "imagetools/filter_channels.h"
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
  FilterChannels::FilterChannels() {
    setRed(1.0);
    setBlue(1.0);
    setGreen(1.0);
  }

  FilterChannels::FilterChannels(float red, float green, float blue) {
    red_ = red;
    blue_ = blue;
    green_ = green;
  }

  FilterChannels::~FilterChannels() {}

  void FilterChannels::setRed(float red) {
    red_ = red;
  }

  void FilterChannels::setBlue(float blue) {
    blue_ = blue;
  }

  void FilterChannels::setGreen(float green) {
    green_ = green;
  }

  float FilterChannels::getRed() {
    return red_;
  }

  float FilterChannels::getBlue() {
    return blue_;
  }

  float FilterChannels::getGreen() {
    return green_;
  }

  ColorData FilterChannels::CalculateFilteredPixel(PixelBuffer* buffer,
                                                   int x, int y) {
    ColorData data = buffer->pixel(x, y);  // get pix color
    // multiply color by RGB scale factors
    ColorData final_value(data.red()*red_,
                          data.green()*green_, data.blue()*blue_);
    final_value.Clamp();
    buffer->set_pixel(x, y, final_value);  // change pix color
    return final_value;
  }
}  // namespace image_tools
