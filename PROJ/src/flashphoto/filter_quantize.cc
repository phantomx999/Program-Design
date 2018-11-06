/*
	filter_quantize.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

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
#include "flashphoto/image_tools_math.h"
#include "flashphoto/filter_quantize.h"

namespace image_tools{
  FilterQuantize::FilterQuantize(){
    bin_count_ = 1;
  }
  
  FilterQuantize::FilterQuantize(int bin_count){
    bin_count_ = bin_count;
  }
  
  FilterQuantize::~FilterQuantize() {}
  
  void FilterQuantize::setBinCount(int bin_count){
    bin_count_ = bin_count;
  }
  
  int FilterQuantize::getBinCount(){
    return bin_count_;
  }
  
  ColorData FilterQuantize::CalculateFilteredPixel(PixelBuffer* buffer, int x, int y){
    ColorData data = buffer->pixel(x, y);
    int bins = getBinCount();
    int num_steps = bins - 1;
    float red = (round(data.red() * num_steps)/num_steps);
    float green = (round(data.green() * num_steps)/num_steps);
    float blue = (round(data.blue() * num_steps)/num_steps);
    ColorData final_value(red, green, blue);
    buffer->set_pixel(x, y, final_value);
    return final_value;
  }
}
