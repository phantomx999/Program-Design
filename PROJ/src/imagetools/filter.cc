/*
	filter.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include "imagetools/filter.h"
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

    Filter::Filter() {
       copy_buffer_ = NULL;
    }

    Filter::~Filter() {}

    void Filter::ApplyToBuffer(PixelBuffer* buffer) {
      // check for convolution filters only
      if (!can_copy_in_place()) {
        copy_buffer_ = new PixelBuffer(*buffer);
      }
      //  SetupFilter();
      //  go through buffer, change pixels by filter type
      for (int row = 0; row < buffer->height(); row++) {
        for (int column = 0; column < buffer->width(); column++) {
          CalculateFilteredPixel(buffer, column, row);
        }
      }
      //  for(int row = 0; row < buffer->width(); row++){
      //  for(int column = 0; column < buffer->height(); column++){
      //  CalculateFilteredPixel(buffer, row, column);
      //  }
      //  }
      this->CleanupFilter();
    }
    //  void SetupFilter();
    //  void Filter::CleanupFilter()

    void Filter::CleanupFilter() {
      delete this;  // remove filter
    }

    bool Filter::can_copy_in_place() {
      return true;
    }




}  // namespace image_tools
