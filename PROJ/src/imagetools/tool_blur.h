/**
This file is part of the CSCI-3081W Project Support Code, which was developed
at the University of Minnesota.

This code is to be used for student coursework.  It is not an open source
project.
Copyright (c) 2015-2018 Daniel Keefe, TAs, & Regents of the University of
Minnesota.

Original Author(s) of this File:
  Seth Johnson, 4/4/2015, University of Minnesota

Author(s) of Significant Updates/Modifications to the File:
  ...
*/

#ifndef IMAGETOOLS_TOOL_BLUR_H_
#define IMAGETOOLS_TOOL_BLUR_H_

#include <stdio.h>
#include <string>
#include "imagetools/tool.h"
#include "imagetools/filter_convolution_blur.h"

namespace image_tools {

/** @brief This tool serves as a mobile version of the blur filter, functions
  much like the spray can, except with blurring neighboring pixels rather than
  coloring them (linear falloff). */
class ToolBlur : public Tool {
 public:
  ToolBlur();
  virtual ~ToolBlur();

  static const std::string name() { return "Blur"; }

  FloatMatrix* CreateMask(float radius) override;

  /** @brief uses kernel and convolution blur filter to blur selected pixels
     in image */
  ColorData LookupPaintColor(int x, int y) override;

 private:
  /* Copy assignment/construction is disallowed */
  ToolBlur(const ToolBlur& rhs) = delete;
  ToolBlur& operator=(const ToolBlur& rhs) = delete;

  // blur filter to use with blur tool
  ConvolutionFilterBlur *blur_;
};

}  // namespace image_tools

#endif  // IMAGETOOLS_TOOL_BLUR_H_
