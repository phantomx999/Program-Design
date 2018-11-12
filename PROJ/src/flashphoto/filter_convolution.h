/*
	filter_convolution.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef FLASHPHOTO_FILTER_CONVOLUTION_H_
#define FLASHPHOTO_FILTER_CONVOLUTION_H_

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

class ConvolutionFilter : public Filter {
 public:
    ConvolutionFilter();
    explicit ConvolutionFilter(FloatMatrix* kernel);
    virtual ~ConvolutionFilter();
    virtual void CreateKernel() = 0;
    void setKernel(FloatMatrix* kernel);
    FloatMatrix* getKernel();
    bool can_copy_in_place() override;
    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 protected:
    FloatMatrix* kernel_;
};

}  // namespace image_tools
#endif  // FLASHPHOTO_FILTER_CONVOLUTION_H_
