/*
	filter_convolution.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_CONVOLUTION_H_
#define IMAGETOOLS_FILTER_CONVOLUTION_H_

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
#endif  // IMAGETOOLS_FILTER_CONVOLUTION_H_
