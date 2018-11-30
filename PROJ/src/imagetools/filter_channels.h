/*
	filter_channels.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CHANNELS_H_
#define FLASHPHOTO_FILTER_CHANNELS_H_

#include <mingfx.h>
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/filter.h"


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
#endif  // FLASHPHOTO_FILTER_CHANNELS_H_
