/*
	filter_saturate.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_SATURATE_H_
#define IMAGETOOLS_FILTER_SATURATE_H_

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

class FilterSaturate : public Filter {
 public:
    FilterSaturate();
    explicit FilterSaturate(float saturate);
    virtual ~FilterSaturate();
    float getSaturate();
    void setSaturate(float saturate);

    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 private:
    float saturate_;   //  user input saturate value
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_SATURATE_H_
