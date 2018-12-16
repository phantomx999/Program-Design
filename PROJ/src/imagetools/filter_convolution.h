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

/** @brief Base class for all Convolution Filters, inherits from Filter.h */
namespace image_tools {

class ConvolutionFilter : public Filter {
 public:
    ConvolutionFilter();
    explicit ConvolutionFilter(FloatMatrix* kernel);
    virtual ~ConvolutionFilter();

    /** @brief 3x3 kernel surrounds and alters current pixel in image and
     all adjacent pixels, used by all convolution filters */
    virtual void CreateKernel() = 0;

    /** @brief kernel surrounds current pixel being altered by specific filter */
    void setKernel(FloatMatrix* kernel);
    FloatMatrix* getKernel();

    /** @brief copies current buffer, used to keep original buffer data
     while new buffer is being altered by kernel */
    bool can_copy_in_place() override;

    /** @brief multiplies calculated kernel image values on copied pixel buffer,
      end result stored in original buffer, used for all convolution filters */
    ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
 protected:
    FloatMatrix* kernel_;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_CONVOLUTION_H_
