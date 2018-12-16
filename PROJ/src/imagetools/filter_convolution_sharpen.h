/*
	filter_convolution_sharpen.h
	Copyright November 2018 by Andrew Steinbrueck
*/

#ifndef IMAGETOOLS_FILTER_CONVOLUTION_SHARPEN_H_
#define IMAGETOOLS_FILTER_CONVOLUTION_SHARPEN_H_

#include "imagetools/filter_convolution.h"
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

/** @brief Filter accentuates edges of shapes in image using kernel */
class ConvolutionFilterSharpen : public ConvolutionFilter {
 public:
    ConvolutionFilterSharpen();
    explicit ConvolutionFilterSharpen(float rad);
    virtual ~ConvolutionFilterSharpen();
    float getRadius();
    void setRadius(float rad);

    /** @brief kernel matrix has all -1 vals
    except for center val which is n*n (n is matrix length) */
    void CreateKernel() override;

 protected:
    // rad size matrix
    float radius_;
};

}  // namespace image_tools
#endif  // IMAGETOOLS_FILTER_CONVOLUTION_SHARPEN_H_
