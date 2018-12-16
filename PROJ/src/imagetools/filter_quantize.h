/*
	filter_quantize.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_QUANTIZE_H_
#define IMAGETOOLS_FILTER_QUANTIZE_H_

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

/** @brief Puts Red, Green, Blue color channels 
  into bins of intensity values, reduces overall number
  of colors */
class FilterQuantize : public Filter {
 public:
    FilterQuantize();
    explicit FilterQuantize(int bin_count);
    virtual ~FilterQuantize();
    void setBinCount(int bin_count);
    int getBinCount();

    /** @brief sets pixel buffer pixel color value to binned value
      of R, G, B channels */
    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 private:
    int bin_count_;  // number of "binned colors"
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_QUANTIZE_H_
