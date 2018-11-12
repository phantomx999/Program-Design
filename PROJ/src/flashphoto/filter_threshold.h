/*
	filter_threshold.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_THRESHOLD_H_
#define FLASHPHOTO_FILTER_THRESHOLD_H_

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
    float threshold_;
};

}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_THRESHOLD_H_
