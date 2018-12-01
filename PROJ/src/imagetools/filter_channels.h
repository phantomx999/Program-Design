/*
	filter_channels.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_CHANNELS_H_
#define IMAGETOOLS_FILTER_CHANNELS_H_

#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "imagetools/color_data.h"
#include "imagetools/pixel_buffer.h"
#include "imagetools/float_matrix.h"
#include "imagetools/filter.h"


namespace image_tools {

class FilterChannels : public Filter {
 public:
    FilterChannels();
    FilterChannels(float red, float green, float blue);
    virtual ~FilterChannels();
    void setRed(float red);
    void setBlue(float blue);
    void setGreen(float green);
    float getRed();
    float getBlue();
    float getGreen();
    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 private:
    //  scale factors
    float red_;
    float blue_;
    float green_;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_CHANNELS_H_
