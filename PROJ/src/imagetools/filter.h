/*
	filter.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_H_
#define IMAGETOOLS_FILTER_H_

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

class Filter {   //  filter base class
 public:
    Filter();
    virtual ~Filter();

    //  take current buffer and apply to buffer
    void ApplyToBuffer(PixelBuffer* buffer);

    //  virtual void SetupFilter() =0;

    //  abstract method, calculates filter on pixels
    virtual ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                            int x, int y) = 0;

    void CleanupFilter();

    // checks if current buffer can be copied
    virtual bool can_copy_in_place();
 protected:
    // stores current buffer for convolution filters
    PixelBuffer* copy_buffer_;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_H_
