### Feedback for Project Iteration 01

Run on November 01, 15:23:03 PM.


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
color_data.cc:60:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.cc:66:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.cc:70:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:111:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:112:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:117:  An else should appear on the same line as the preceding }  [whitespace/newline] [4]
pixel_buffer.cc:117:  If an else has a brace on one side, it should have it on both  [readability/braces] [5]
pixel_buffer.cc:121:  Missing space after ,  [whitespace/comma] [3]
color_data.h:60:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
color_data.h:63:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
mask_factory.h:34:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
Done processing color_data.cc
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
Total errors found: 11
Makefile:155: recipe for target 'check-style' failed
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
    passes the test: InstructorToolSprayCanTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.CanSpray.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.ContinuesToSprayOnDrag.



+ Pass: Check that a GoogleTest test passes.
    passes the test: InstructorToolSprayCanTest.ContinuesToSprayStationary.



