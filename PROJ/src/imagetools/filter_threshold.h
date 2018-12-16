/*
	filter_threshold.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_THRESHOLD_H_
#define IMAGETOOLS_FILTER_THRESHOLD_H_

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

/** @brief Rounds Red, Green, Blue color channels to 
  1.0 or 0.0 based on pixel's value relative to user GLUI input,
  make image appear black and white */
class FilterThreshold : public Filter {
 public:
    explicit FilterThreshold(float threshold);
    FilterThreshold();
    virtual ~FilterThreshold();
    float getThreshold();
    void setThreshold(float threshold);

    /** @brief finds average intensity of pixel, compares with user
      input threshold, rounds pixel to white or black color accordingly */
    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 protected:
    //  threshold number user inputs
    float threshold_;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_THRESHOLD_H_
