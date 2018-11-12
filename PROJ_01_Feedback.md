### Feedback for Project Iteration 01

Run on November 11, 19:03:57 PM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_proj_materials" exists.

+ Pass: Check that directory "PROJ" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up MinGfx

+ Pass: Copy directory "Copy Project Files".



+ Pass: Copy directory "Copy Dependencies".




#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Setup grading environment.



+ Pass: Copy directory "Copy Tests".



+ Fail: Ensuring code follows style guide.

<pre>cd src/flashphoto; make check-style
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-stein936/PROJ/src/flashphoto'
==== Checking style is correct ====
/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-stein936/cpplint/cpplint.py --root=.. *.cc *.h
filter.cc:8:  Found C system header after C++ system header. Should be: filter.h, c system, c++ system, other.  [build/include_order] [4]
filter_channels.cc:7:  Found C system header after C++ system header. Should be: filter_channels.h, c system, c++ system, other.  [build/include_order] [4]
filter_channels.cc:61:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_convolution_blur.cc:7:  Found C system header after C++ system header. Should be: filter_convolution_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_blur.cc:12:  Found C system header after C++ system header. Should be: filter_convolution_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution.cc:7:  Found C system header after C++ system header. Should be: filter_convolution.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution.cc:43:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_convolution.cc:48:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_convolution.cc:49:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_convolution.cc:50:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_convolution_edge.cc:7:  Found C system header after C++ system header. Should be: filter_convolution_edge.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_edge.cc:19:  Missing space before {  [whitespace/braces] [5]
filter_convolution_edge.cc:25:  Missing space before {  [whitespace/braces] [5]
filter_convolution_edge.cc:35:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_convolution_motion_blur.cc:7:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.cc:12:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.cc:20:  Do not use namespace using-directives.  Use using-declarations instead.  [build/namespaces] [5]
filter_convolution_motion_blur.cc:22:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:24:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:29:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_convolution_motion_blur.cc:29:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:36:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:40:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:44:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:48:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:52:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:59:  Missing space before ( in if(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:59:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:60:  Missing space before ( in for(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:60:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:64:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
filter_convolution_motion_blur.cc:64:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
filter_convolution_motion_blur.cc:64:  Missing space before ( in if(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:64:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:65:  Missing space before ( in for(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:65:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:69:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
filter_convolution_motion_blur.cc:69:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
filter_convolution_motion_blur.cc:69:  Missing space before ( in if(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:69:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:70:  Missing space before ( in for(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:70:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:71:  Missing space before ( in for(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:71:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:72:  Missing space before ( in if(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:72:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:78:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
filter_convolution_motion_blur.cc:78:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
filter_convolution_motion_blur.cc:78:  Missing space before ( in if(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:78:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:80:  Missing space before ( in for(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:80:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:81:  Missing space before ( in for(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:81:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:82:  Missing space before ( in if(  [whitespace/parens] [5]
filter_convolution_motion_blur.cc:82:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:88:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
filter_convolution_motion_blur.cc:88:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
filter_convolution_motion_blur.cc:88:  Missing space before {  [whitespace/braces] [5]
filter_convolution_motion_blur.cc:93:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_convolution_sharpen.cc:7:  Found C system header after C++ system header. Should be: filter_convolution_sharpen.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_sharpen.cc:19:  Missing space before {  [whitespace/braces] [5]
filter_convolution_sharpen.cc:21:  Missing space before {  [whitespace/braces] [5]
filter_convolution_sharpen.cc:25:  Missing space before {  [whitespace/braces] [5]
filter_convolution_sharpen.cc:31:  Missing space before {  [whitespace/braces] [5]
filter_convolution_sharpen.cc:35:  Missing space before {  [whitespace/braces] [5]
filter_convolution_sharpen.cc:39:  Missing space before {  [whitespace/braces] [5]
filter_convolution_sharpen.cc:43:  Using C-style cast.  Use static_cast<int>(...) instead  [readability/casting] [4]
filter_convolution_sharpen.cc:47:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_quantize.cc:7:  Found C system header after C++ system header. Should be: filter_quantize.h, c system, c++ system, other.  [build/include_order] [4]
filter_quantize.cc:12:  Found C system header after C++ system header. Should be: filter_quantize.h, c system, c++ system, other.  [build/include_order] [4]
filter_quantize.cc:20:  Missing space before {  [whitespace/braces] [5]
filter_quantize.cc:21:  Missing space before {  [whitespace/braces] [5]
filter_quantize.cc:24:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_quantize.cc:25:  Missing space before {  [whitespace/braces] [5]
filter_quantize.cc:28:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_quantize.cc:30:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_quantize.cc:31:  Missing space before {  [whitespace/braces] [5]
filter_quantize.cc:34:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_quantize.cc:35:  Missing space before {  [whitespace/braces] [5]
filter_quantize.cc:38:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_quantize.cc:39:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_quantize.cc:39:  Missing space before {  [whitespace/braces] [5]
filter_quantize.cc:50:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_saturate.cc:7:  Found C system header after C++ system header. Should be: filter_saturate.h, c system, c++ system, other.  [build/include_order] [4]
filter_saturate.cc:19:  Missing space before {  [whitespace/braces] [5]
filter_saturate.cc:21:  Missing space before {  [whitespace/braces] [5]
filter_saturate.cc:25:  Missing space before {  [whitespace/braces] [5]
filter_saturate.cc:29:  Missing space before {  [whitespace/braces] [5]
filter_saturate.cc:31:  Missing space before {  [whitespace/braces] [5]
filter_saturate.cc:35:  Missing space before {  [whitespace/braces] [5]
filter_saturate.cc:36:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_saturate.cc:39:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_saturate.cc:39:  Missing space before {  [whitespace/braces] [5]
filter_saturate.cc:40:  Missing space after ,  [whitespace/comma] [3]
filter_saturate.cc:46:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_saturate.cc:48:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_threshold.cc:7:  Found C system header after C++ system header. Should be: filter_threshold.h, c system, c++ system, other.  [build/include_order] [4]
filter_threshold.cc:18:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:20:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:24:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:28:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:30:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:34:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:35:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_threshold.cc:38:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_threshold.cc:38:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:43:  Missing space before ( in if(  [whitespace/parens] [5]
filter_threshold.cc:43:  Missing space before {  [whitespace/braces] [5]
filter_threshold.cc:44:  Tab found; better to use spaces  [whitespace/tab] [1]
filter_threshold.cc:44:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_threshold.cc:45:  Tab found; better to use spaces  [whitespace/tab] [1]
filter_threshold.cc:46:  Tab found; better to use spaces  [whitespace/tab] [1]
filter_threshold.cc:46:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_threshold.cc:48:  Tab found; better to use spaces  [whitespace/tab] [1]
filter_threshold.cc:52:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_threshold.cc:54:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
flashphoto_app.cc:628:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:628:  Missing space before {  [whitespace/braces] [5]
flashphoto_app.cc:637:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
flashphoto_app.cc:639:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:639:  Missing space before {  [whitespace/braces] [5]
flashphoto_app.cc:650:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:650:  Missing space before {  [whitespace/braces] [5]
flashphoto_app.cc:657:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
flashphoto_app.cc:660:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:660:  Missing space before {  [whitespace/braces] [5]
flashphoto_app.cc:661:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
flashphoto_app.cc:668:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:668:  Missing space before {  [whitespace/braces] [5]
flashphoto_app.cc:676:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:676:  Missing space before {  [whitespace/braces] [5]
flashphoto_app.cc:686:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:686:  Missing space before {  [whitespace/braces] [5]
flashphoto_app.cc:697:  Missing space before ( in if(  [whitespace/parens] [5]
flashphoto_app.cc:697:  Missing space before {  [whitespace/braces] [5]
tool_blur.cc:25:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
tool_blur.cc:45:  Too many spaces before TODO  [whitespace/todo] [2]
tool_blur.cc:46:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_channels.h:44:  #endif line should be "#endif  // FLASHPHOTO_FILTER_CHANNELS_H_"  [build/header_guard] [5]
filter_channels.h:10:  Found C system header after C++ system header. Should be: filter_channels.h, c system, c++ system, other.  [build/include_order] [4]
filter_channels.h:25:  public: should be indented +1 space inside class FilterChannels  [whitespace/indent] [3]
filter_channels.h:35:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_channels.h:36:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_channels.h:37:  private: should be indented +1 space inside class FilterChannels  [whitespace/indent] [3]
filter_channels.h:43:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_convolution_blur.h:39:  #endif line should be "#endif  // FLASHPHOTO_FILTER_CONVOLUTION_BLUR_H_"  [build/header_guard] [5]
filter_convolution_blur.h:10:  Found C system header after C++ system header. Should be: filter_convolution_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_blur.h:15:  Found C system header after C++ system header. Should be: filter_convolution_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_blur.h:26:  public: should be indented +1 space inside class ConvolutionFilterBlur  [whitespace/indent] [3]
filter_convolution_blur.h:28:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
filter_convolution_blur.h:34:  protected: should be indented +1 space inside class ConvolutionFilterBlur  [whitespace/indent] [3]
filter_convolution_blur.h:38:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_convolution_edge.h:32:  #endif line should be "#endif  // FLASHPHOTO_FILTER_CONVOLUTION_EDGE_H_"  [build/header_guard] [5]
filter_convolution_edge.h:10:  Found C system header after C++ system header. Should be: filter_convolution_edge.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_edge.h:25:  public: should be indented +1 space inside class ConvolutionFilterEdge  [whitespace/indent] [3]
filter_convolution.h:39:  #endif line should be "#endif  // FLASHPHOTO_FILTER_CONVOLUTION_H_"  [build/header_guard] [5]
filter_convolution.h:10:  Found C system header after C++ system header. Should be: filter_convolution.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution.h:25:  public: should be indented +1 space inside class ConvolutionFilter  [whitespace/indent] [3]
filter_convolution.h:27:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
filter_convolution.h:33:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_convolution.h:34:  protected: should be indented +1 space inside class ConvolutionFilter  [whitespace/indent] [3]
filter_convolution.h:38:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_convolution_motion_blur.h:42:  #endif line should be "#endif  // FLASHPHOTO_FILTER_CONVOLUTION_MOTION_BLUR_H_"  [build/header_guard] [5]
filter_convolution_motion_blur.h:10:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.h:15:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.h:22:  Do not use namespace using-directives.  Use using-declarations instead.  [build/namespaces] [5]
filter_convolution_motion_blur.h:27:  public: should be indented +1 space inside class ConvolutionFilterMotionBlur  [whitespace/indent] [3]
filter_convolution_motion_blur.h:36:  protected: should be indented +1 space inside class ConvolutionFilterMotionBlur  [whitespace/indent] [3]
filter_convolution_motion_blur.h:41:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_convolution_sharpen.h:37:  #endif line should be "#endif  // FLASHPHOTO_FILTER_CONVOLUTION_SHARPEN_H_"  [build/header_guard] [5]
filter_convolution_sharpen.h:10:  Found C system header after C++ system header. Should be: filter_convolution_sharpen.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_sharpen.h:25:  public: should be indented +1 space inside class ConvolutionFilterSharpen  [whitespace/indent] [3]
filter_convolution_sharpen.h:27:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
filter_convolution_sharpen.h:32:  protected: should be indented +1 space inside class ConvolutionFilterSharpen  [whitespace/indent] [3]
filter_convolution_sharpen.h:36:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter.h:42:  #endif line should be "#endif  // FLASHPHOTO_FILTER_H_"  [build/header_guard] [5]
filter.h:10:  Found C system header after C++ system header. Should be: filter.h, c system, c++ system, other.  [build/include_order] [4]
filter.h:23:  public: should be indented +1 space inside class Filter  [whitespace/indent] [3]
filter.h:28:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter.h:31:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter.h:36:  protected: should be indented +1 space inside class Filter  [whitespace/indent] [3]
filter.h:38:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter.h:38:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
filter.h:41:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_quantize.h:37:  #endif line should be "#endif  // FLASHPHOTO_FILTER_QUANTIZE_H_"  [build/header_guard] [5]
filter_quantize.h:10:  Found C system header after C++ system header. Should be: filter_quantize.h, c system, c++ system, other.  [build/include_order] [4]
filter_quantize.h:25:  public: should be indented +1 space inside class FilterQuantize  [whitespace/indent] [3]
filter_quantize.h:27:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
filter_quantize.h:31:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_quantize.h:32:  private: should be indented +1 space inside class FilterQuantize  [whitespace/indent] [3]
filter_quantize.h:36:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_saturate.h:40:  #endif line should be "#endif  // FLASHPHOTO_FILTER_SATURATE_H_"  [build/header_guard] [5]
filter_saturate.h:10:  Found C system header after C++ system header. Should be: filter_saturate.h, c system, c++ system, other.  [build/include_order] [4]
filter_saturate.h:25:  public: should be indented +1 space inside class FilterSaturate  [whitespace/indent] [3]
filter_saturate.h:27:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
filter_saturate.h:32:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_saturate.h:34:  private: should be indented +1 space inside class FilterSaturate  [whitespace/indent] [3]
filter_saturate.h:36:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_saturate.h:36:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
filter_saturate.h:39:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
filter_threshold.h:39:  #endif line should be "#endif  // FLASHPHOTO_FILTER_THRESHOLD_H_"  [build/header_guard] [5]
filter_threshold.h:10:  Found C system header after C++ system header. Should be: filter_threshold.h, c system, c++ system, other.  [build/include_order] [4]
filter_threshold.h:25:  public: should be indented +1 space inside class FilterThreshold  [whitespace/indent] [3]
filter_threshold.h:26:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
filter_threshold.h:32:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
filter_threshold.h:33:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
filter_threshold.h:34:  protected: should be indented +1 space inside class FilterThreshold  [whitespace/indent] [3]
filter_threshold.h:38:  Namespace should be terminated with "// namespace image_tools"  [readability/namespace] [5]
Done processing color_data.cc
Done processing filter.cc
Done processing filter_channels.cc
Done processing filter_convolution_blur.cc
Done processing filter_convolution.cc
Done processing filter_convolution_edge.cc
Done processing filter_convolution_motion_blur.cc
Done processing filter_convolution_sharpen.cc
Done processing filter_quantize.cc
Done processing filter_saturate.cc
Done processing filter_threshold.cc
Done processing flashphoto_app.cc
Done processing float_matrix.cc
Done processing main.cc
Done processing mask_factory.cc
Done processing pixel_buffer.cc
Done processing tool_blur.cc
Done processing tool_calligraphy_pen.cc
Done processing tool.cc
Done processing tool_chalk.cc
Done processing tool_eraser.cc
Done processing tool_highlighter.cc
Done processing tool_pen.cc
Done processing tool_spray_can.cc
Done processing color_data.h
Done processing filter_channels.h
Done processing filter_convolution_blur.h
Done processing filter_convolution_edge.h
Done processing filter_convolution.h
Done processing filter_convolution_motion_blur.h
Done processing filter_convolution_sharpen.h
Done processing filter.h
Done processing filter_quantize.h
Done processing filter_saturate.h
Done processing filter_threshold.h
Done processing flashphoto_app.h
Done processing float_matrix.h
Done processing image_tools_math.h
Done processing mask_factory.h
Done processing pixel_buffer.h
Done processing tool_blur.h
Done processing tool_calligraphy_pen.h
Done processing tool_chalk.h
Done processing tool_eraser.h
Done processing tool.h
Done processing tool_highlighter.h
Done processing tool_pen.h
Done processing tool_spray_can.h
Total errors found: 209
Makefile:156: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_01_Feedback/repo-stein936/PROJ/src/flashphoto'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+ Pass: Check that make compiles.




#### Run Student Tests

+ Pass: Running Student Tests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FlashPhotoAppTest.GetToolTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolPenTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolChalkTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolEraserTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolEraserTest.HasCorrectMask.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolEraserTest.TestStartStroke.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.CanSpray.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.ContinuesToSprayOnDrag.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.ContinuesToSprayStationary.



