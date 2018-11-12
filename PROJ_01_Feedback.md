### Feedback for Project Iteration 01

Run on November 11, 20:32:31 PM.


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
filter_convolution_edge.cc:7:  Found C system header after C++ system header. Should be: filter_convolution_edge.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.cc:7:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.cc:12:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.cc:20:  Do not use namespace using-directives.  Use using-declarations instead.  [build/namespaces] [5]
filter_convolution_sharpen.cc:7:  Found C system header after C++ system header. Should be: filter_convolution_sharpen.h, c system, c++ system, other.  [build/include_order] [4]
filter_quantize.cc:7:  Found C system header after C++ system header. Should be: filter_quantize.h, c system, c++ system, other.  [build/include_order] [4]
filter_quantize.cc:12:  Found C system header after C++ system header. Should be: filter_quantize.h, c system, c++ system, other.  [build/include_order] [4]
filter_saturate.cc:7:  Found C system header after C++ system header. Should be: filter_saturate.h, c system, c++ system, other.  [build/include_order] [4]
filter_threshold.cc:7:  Found C system header after C++ system header. Should be: filter_threshold.h, c system, c++ system, other.  [build/include_order] [4]
filter_channels.h:10:  Found C system header after C++ system header. Should be: filter_channels.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_blur.h:10:  Found C system header after C++ system header. Should be: filter_convolution_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_blur.h:15:  Found C system header after C++ system header. Should be: filter_convolution_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_edge.h:10:  Found C system header after C++ system header. Should be: filter_convolution_edge.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution.h:10:  Found C system header after C++ system header. Should be: filter_convolution.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.h:10:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.h:15:  Found C system header after C++ system header. Should be: filter_convolution_motion_blur.h, c system, c++ system, other.  [build/include_order] [4]
filter_convolution_motion_blur.h:22:  Do not use namespace using-directives.  Use using-declarations instead.  [build/namespaces] [5]
filter_convolution_sharpen.h:10:  Found C system header after C++ system header. Should be: filter_convolution_sharpen.h, c system, c++ system, other.  [build/include_order] [4]
filter.h:10:  Found C system header after C++ system header. Should be: filter.h, c system, c++ system, other.  [build/include_order] [4]
filter_quantize.h:10:  Found C system header after C++ system header. Should be: filter_quantize.h, c system, c++ system, other.  [build/include_order] [4]
filter_saturate.h:10:  Found C system header after C++ system header. Should be: filter_saturate.h, c system, c++ system, other.  [build/include_order] [4]
filter_threshold.h:10:  Found C system header after C++ system header. Should be: filter_threshold.h, c system, c++ system, other.  [build/include_order] [4]
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
Total errors found: 28
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



