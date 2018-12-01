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

class FilterQuantize : public Filter {
 public:
    FilterQuantize();
    explicit FilterQuantize(int bin_count);
    virtual ~FilterQuantize();
    void setBinCount(int bin_count);
    int getBinCount();
    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 private:
    int bin_count_;  // number of "binned colors"
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_QUANTIZE_H_
