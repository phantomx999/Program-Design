### Feedback for Project Iteration 02

Run on December 01, 21:49:37 PM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_proj_materials" exists.

+ Pass: Check that directory "PROJ" exists.

+ Pass: Check that directory "PROJ/src/imagetools" exists.

+ Pass: Check that file "PROJ/src/imagetools/color_data.h" exists.

+ Pass: Check that file "PROJ/src/imagetools/Makefile" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Copy directory "Copy Project Files".



+ Pass: Starting with clean project.



+ Pass: Copy directory "Copy Project Files".



+ Pass: Setup grading environment.



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Setup grading environment.



+ Pass: Check that file "./src/mia/image_editor_commands.cc" exists.

+ Fail: Ensuring code follows style guide.

<pre>cd src/imagetools; make check-style
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/imagetools'
==== Checking style is correct ====
/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/cpplint/cpplint.py --root=.. *.cc *.h
color_data.cc:59:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
color_data.cc:60:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:104:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:105:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:108:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:109:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:124:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
pixel_buffer.cc:127:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:128:  Missing space before ( in for(  [whitespace/parens] [5]
tool_chalk.cc:49:  Consider using rand_r(...) instead of rand(...) for improved thread safety.  [runtime/threadsafe_fn] [2]
filter_convolution_motion_blur.h:52:  Should have a space between // and comment  [whitespace/comments] [4]
filter_convolution_motion_blur.h:53:  Should have a space between // and comment  [whitespace/comments] [4]
image_editor.h:191:  Add #include <map> for map<>  [build/include_what_you_use] [4]
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
Done processing float_matrix.cc
Done processing image_editor.cc
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
Done processing tool_stamp.cc
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
Done processing float_matrix.h
Done processing image_editor.h
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
Done processing tool_stamp.h
Total errors found: 13
Makefile:79: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/imagetools'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+ Pass: Check that make compiles.



+ Fail: Check that file "./build/lib/libimagetools.a" exists.

     "./build/lib/libimagetools.a" not found.

+ Skip: Check that file "./build/bin/flashphoto" exists.

  This test was not run because of an earlier failing test.

+ Skip: Check that file "./build/bin/mia" exists.

  This test was not run because of an earlier failing test.


#### Run Student Tests

+ Skip: Check that file "./build/test/gtests" exists.

  This test was not run because of an earlier failing test.

+ Skip: Running Student Tests.

  This test was not run because of an earlier failing test.

