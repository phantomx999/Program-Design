/*
	filter_saturate.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_SATURATE_H_
#define FLASHPHOTO_FILTER_SATURATE_H_

#include "flashphoto/filter.h"
#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"


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
#endif  // FLASHPHOTO_FILTER_SATURATE_H_
