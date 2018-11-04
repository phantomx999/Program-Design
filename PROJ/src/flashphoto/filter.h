/*
	filter.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_H_
#define FLASHPHOTO_FILTER_H_

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"

namespace image_tools {

class Filter {
  public:
    //  Filter();
    //  virtual ~Filter();

    void ApplyToBuffer(PixelBuffer* buffer);
    
    void SetupFilter();

    virtual ColorData CalculateFilteredPixel(PixelBuffer* buffer, int x, int y) = 0;

    void CleanupFilter();

    bool can_copy_in_place();

    
};

}
#endif
