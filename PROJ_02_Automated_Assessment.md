### Assessment for Project Iteration 02 - Automated (Graded By: Dan Orban)

#### Total score: _69.05_ / _85_

Run on December 16, 01:00:06 AM.


#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/_proj_materials" exists.

+ Pass: Setup grading environment.



+  _3_ / _3_ : Pass: Check that directory "PROJ" exists.

+  _2_ / _2_ : Pass: Check that directory "PROJ/src/imagetools" exists.

+  _2_ / _2_ : Pass: Check that file "PROJ/src/imagetools/color_data.h" exists.

+  _2_ / _2_ : Pass: Check that file "PROJ/src/imagetools/Makefile" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Setup grading environment.



+  _0_ / _1_ : Fail: Ensuring code follows style guide.

<pre>cd src/imagetools; make check-style
make[1]: Entering directory '/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/grading/PROJ_02_Automated_Assessment/repo-stein936/PROJ/src/imagetools'
==== Checking style is correct ====
/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/grading/PROJ_02_Automated_Assessment/repo-stein936/cpplint/cpplint.py --root=.. *.cc *.h
color_data.cc:59:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:104:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:107:  Do not use variable-length arrays.  Use an appropriately named ('k' followed by CamelCase) compile-time constant for the size.  [runtime/arrays] [1]
pixel_buffer.cc:108:  Almost always, snprintf is better than strcpy  [runtime/printf] [4]
pixel_buffer.cc:111:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:111:  Missing space before {  [whitespace/braces] [5]
pixel_buffer.cc:113:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:117:  Missing space before ( in if(  [whitespace/parens] [5]
pixel_buffer.cc:123:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:126:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:127:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:143:  Do not use variable-length arrays.  Use an appropriately named ('k' followed by CamelCase) compile-time constant for the size.  [runtime/arrays] [1]
pixel_buffer.cc:144:  Almost always, snprintf is better than strcpy  [runtime/printf] [4]
pixel_buffer.cc:147:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:147:  Missing space before {  [whitespace/braces] [5]
pixel_buffer.cc:149:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
pixel_buffer.cc:153:  Missing space before ( in if(  [whitespace/parens] [5]
pixel_buffer.cc:158:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
pixel_buffer.cc:161:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:162:  Missing space before ( in for(  [whitespace/parens] [5]
pixel_buffer.cc:176:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
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
Total errors found: 24
Makefile:81: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/grading/PROJ_02_Automated_Assessment/repo-stein936/PROJ/src/imagetools'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+  _25_ / _25_ : Pass: Check that make compiles.



+  _3_ / _3_ : Pass: Check that file "./build/lib/libimagetools.a" exists.

+  _3_ / _3_ : Pass: Check that file "./build/bin/flashphoto" exists.

+  _3_ / _3_ : Pass: Check that file "./build/bin/mia" exists.

+  _3_ / _3_ : Pass: Check that file "./build/test/gtests" exists.


### Instructor Tests

+ Pass: Change into directory "src/tests/inst_tests".

+ Pass: Check that make compiles.



+ Pass: Change into directory "../../..".

+ Pass: Check that file "./build/test/inst_tests" exists.


#### Testing ImageIO Implementation

+  _2_ / _2_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.ImageLoadingAndSaving.




#### Testing MIA Application

+  _1_ / _1_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.StampToolAdded.



+  _1_ / _1_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.DisplayHelpMessage.



+  _0_ / _2_ : Fail: Check that a GoogleTest test passes.
    fails to run the test executable: Iteration2Test.MiaCommandLineCorrect.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = Iteration2Test.MiaCommandLineCorrect
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from Iteration2Test
[ RUN      ] Iteration2Test.MiaCommandLineCorrect
iter2_test.cc:53: Failure
Value of: mingfx::Platform::FileExists("output.png")
  Actual: false
Expected: true
Output File not saved.
</pre>
return code: -11



+  _2_ / _2_ : Pass: Check that a GoogleTest test passes.
    passes the test: Iteration2Test.MiaCommandLineBadInput.




### Run Student Tests

+ Pass: Check that file "./build/test/gtests" exists.

+ Pass: Get all google tests.
    25 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterQuantizeTest.FilterQuantize.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FlashPhotoAppTest.CanApplyFilters.



+ Fail: Check that a GoogleTest test passes.
    fails the test: FilterChannelsTest.FilterChannels.
<pre>
[ RUN      ] FilterChannelsTest.FilterChannels
filter_channels_regression.cc:43: Failure
      Expected: *(expect_->pixel_buffer())
      Which is: 56-byte object <E8-DD 70-00 00-00 00-00 6D-03 00-00 8E-03 00-00 10-D0 4A-43 79-7F 00-00 70-A7 0D-44 79-7F 00-00 10-D0 4A-44 79-7F 00-00 00-00 80-3F 00-00 80-3F 00-00 80-3F 00-00 80-3F>
To be equal to: *(edit_->pixel_buffer())
      Which is: 56-byte object <E8-DD 70-00 00-00 00-00 6D-03 00-00 8E-03 00-00 10-E0 4A-44 79-7F 00-00 70-B7 0D-45 79-7F 00-00 10-E0 4A-45 79-7F 00-00 00-00 80-3F 00-00 80-3F 00-00 80-3F 00-00 80-3F></pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterMotionBlurEWTest.FilterMotionBlurEW.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolCalligraphyPenTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolCalligraphyPenTest.HasCorrectMask.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterMotionBlurNWSETest.FilterMotionBlurNWSE.



+ Fail: Check that a GoogleTest test passes.
    fails the test: FilterBlurTest.FilterBlur.
<pre>
[ RUN      ] FilterBlurTest.FilterBlur
filter_blur_regression.cc:43: Failure
      Expected: *(expect_->pixel_buffer())
      Which is: 56-byte object <E8-DD 70-00 00-00 00-00 6D-03 00-00 8E-03 00-00 10-B0 11-27 F0-7F 00-00 70-87 D4-27 F0-7F 00-00 10-B0 11-28 F0-7F 00-00 00-00 80-3F 00-00 80-3F 00-00 80-3F 00-00 80-3F>
To be equal to: *(edit_->pixel_buffer())
      Which is: 56-byte object <E8-DD 70-00 00-00 00-00 6D-03 00-00 8E-03 00-00 10-C0 11-28 F0-7F 00-00 70-97 D4-28 F0-7F 00-00 10-C0 11-29 F0-7F 00-00 00-00 80-3F 00-00 80-3F 00-00 80-3F 00-00 80-3F></pre>



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: CommandLineTest.UserLoadSaveInput.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineTest.UserLoadSaveInput
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineTest
[ RUN      ] CommandLineTest.UserLoadSaveInput
command_line_processor_unittest.cc:42: Failure
      Expected: 2
To be equal to: line_->GetExecutor()->GetNumberOfCommands()
      Which is: 28683264
</pre>
return code: -11



+ Pass: Check that a GoogleTest test passes.
    passes the test: CommandLineTest.UserInputHelpArgument.



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: CommandLineTest.UserInputOneFilter.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineTest.UserInputOneFilter
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineTest
[ RUN      ] CommandLineTest.UserInputOneFilter
command_line_processor_unittest.cc:66: Failure
      Expected: 3
To be equal to: line_->GetExecutor()->GetNumberOfCommands()
      Which is: 15137920
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: CommandLineTest.CorrectUserInputCommands.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineTest.CorrectUserInputCommands
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineTest
[ RUN      ] CommandLineTest.CorrectUserInputCommands
command_line_processor_unittest.cc:76: Failure
      Expected: 4
To be equal to: line_->GetExecutor()->GetNumberOfCommands()
      Which is: 28462912
</pre>
return code: -11



+ Fail: Check that a GoogleTest test passes.
    fails to run the test executable: CommandLineTest.CorrectUserLotsOfCommands.
<pre>Running main() from gtest_main.cc
Note: Google Test filter = CommandLineTest.CorrectUserLotsOfCommands
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from CommandLineTest
[ RUN      ] CommandLineTest.CorrectUserLotsOfCommands
</pre>
return code: -11



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterSharpenTest.FilterSharpen.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolPenTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolPenTest.HasCorrectMask.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterThresholdTest.FilterThreshold.



+ Fail: Check that a GoogleTest test passes.
    fails the test: FilterSaturateTest.FilterSaturate.
<pre>
[ RUN      ] FilterSaturateTest.FilterSaturate
filter_saturate_regression.cc:43: Failure
      Expected: *(expect_->pixel_buffer())
      Which is: 56-byte object <E8-DD 70-00 00-00 00-00 6D-03 00-00 8E-03 00-00 10-50 6D-03 6C-7F 00-00 70-27 30-04 6C-7F 00-00 10-50 6D-04 6C-7F 00-00 00-00 80-3F 00-00 80-3F 00-00 80-3F 00-00 80-3F>
To be equal to: *(edit_->pixel_buffer())
      Which is: 56-byte object <E8-DD 70-00 00-00 00-00 6D-03 00-00 8E-03 00-00 10-60 6D-04 6C-7F 00-00 70-37 30-05 6C-7F 00-00 10-60 6D-05 6C-7F 00-00 00-00 80-3F 00-00 80-3F 00-00 80-3F 00-00 80-3F></pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterMotionBlurNESWTest.FilterMotionBlurNESW.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolEraserTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolEraserTest.HasCorrectMask.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolChalkTest.HasCorrectName.



+ Pass: Check that a GoogleTest test passes.
    passes the test: ToolChalkTest.HasCorrectMask.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterEdgeTest.FilterEdge.



+ Pass: Check that a GoogleTest test passes.
    passes the test: FilterMotionBlurNSTest.FilterMotionBlurNS.



+  _10.8_ / _15_ : Fail: 72.0% of the tests passed, but the target is 100%.


### Testing Mutants


#### Testing Pen Tool for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - There is no regression test.


#### Testing Eraser Tool for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - There is no regression test.


#### Testing Stamp Tool for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - The stamp tool does not stamp, it slides.


#### Testing Blur Filter for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - In Mutant: The radius is 2 less than it is supposed to be.


#### Testing Edge Detector Filter for failure

+ Pass: At least one test failed for Edge Detector Filter


#### Testing Image IO Implementaiton for failure

+ Pass: At least one test failed for Image IO Implementaiton


#### Results

+  _6.25_ / _15_ : Fail: 33.33% of the tests passed, but the target is 80.0%.

#### Total score: _69.05_ / _85_

