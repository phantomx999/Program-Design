High-Level Design  {#high_level_design_dev}
===========

The project's main purpose is to process images using various user interface features.
Thus, it essential to summarize the program's design so that makes it easy to add more 
features components in the future, possibly edit other features, 
as well as help with debugging, etc.
 
The overall design of the project consists of 3 different components:

1. Image Tools
2. Flashphoto Application
3. Mia Application

ImageTools:
Imagetools is a library that includes all of the major aspects of features 
and functionality that both Flashphoto and Mia applications use.  Imagetools creates
and implements 8 different tools and 8 different filters.

Tools:
- Pen 
- Calligraphy Pen
- Chalk
- Highlighter
- Spray Can
- Eraser
- Blur Tool
- Stamp 

Filters:
- Blur
- Motion Blur
- Sharpen
- Edge Detect
- Threshold
- Saturate
- Adjust R, G, B (Channels)
- Quantize

Imagetools also includes other classes such as ColorData, PixelBuffer, and
MaskFactory in order to create pixel buffers and masks for implementation of the tools, 
and filters which both Flasphoto and Mia use.  Lastly, Imagetools has a base GUI class 
that Flasphoto and Mia also use for user interface image processing.

Flashphoto:
Flasphoto is an imaging processing app used for Paint applications, Drawing, Artwork,
and other general purposes.   Flashphoto uses the methods of all the ImageTools filters
listed above, 
as well as all the tools except for Stamp.  Flashphoto application also includes GUI methods setup
as well.  

Mia:
Mia is a medical application used for imaging processing and annotation.  It uses the
tool classes Pen and Stamp, as well as the filter classes Blur, Sharpening, Edge Detect, 
Threshold, and Quantize. Mia, like Flasphoto, includes a GUI setup.  However, Mia also
can use a command line processing feature to process images as well.      

Features:

1. Tools
All specific Tool classes in ImageTools inherit from a base Tool class in ImageTools(tool.h).  
All tools also have a mask method (CreateMask()) which gets inherited and overwritten
for each specific tool.


2. Filters
All filter classes in ImageTools inherit from a base Filter class (filter.h).  Each filter
class overrides CalculateFilteredPixel() method for specific class uses.  

Also, 4 of the filters (Blur, MotionBlur, Edge Detect, and Sharpen) are convolution
filters and inherit from a Convolution base class (filter_convolution.h), which
inherits from the base Filter class (filter.h).  All Convolution filter classes override
CreateKernel() (to create a kernel) and SetCopyBuffer() methods in order to create 
correct Convolution type filters (please see diagram below). 

Mia Command Line Processing
