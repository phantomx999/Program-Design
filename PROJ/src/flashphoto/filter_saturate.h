/*
	filter_saturate.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_SATURATE_H_
#define FLASHPHOTO_FILTER_SATURATE_H_

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/filter.h"


namespace image_tools {

class FilterSaturate : public Filter {
  public:
    FilterSaturate();
    FilterSaturate(float saturate);
    virtual ~FilterSaturate();
    float getSaturate();
    void setSaturate(float saturate);

    ColorData CalculateFilteredPixel(PixelBuffer* buffer, int x, int y) override;

  private:
    float saturate_;
    
};

}
#endif
