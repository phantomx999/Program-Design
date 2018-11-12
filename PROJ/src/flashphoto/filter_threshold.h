/*
	filter_threshold.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_THRESHOLD_H_
#define FLASHPHOTO_FILTER_THRESHOLD_H_

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

class FilterThreshold : public Filter {
 public:
    explicit FilterThreshold(float threshold);
    FilterThreshold();
    virtual ~FilterThreshold();
    float getThreshold();
    void setThreshold(float threshold);

    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 protected:
    //  threshold number user inputs
    float threshold_;
};

}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_THRESHOLD_H_
