### Feedback for Homework 04

Run on October 08, 19:22:30 PM.


#### System Files and HW Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials" exists.

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials/googletest" exists.

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials/HW04" exists.

+ Pass: Check that directory "HW" exists.

+ Pass: Check that directory "HW/HW04" exists.

+ Pass: Make directory "HW04_Testing".

+ Pass: Change into directory "HW04_Testing".


#### Set up Google Test framework

+ Pass: Copy directory "Google Tests".




#### Essential Files Exist

+ Pass: Check that file "../HW/HW04/date_unittest.cc" exists.


#### Testing correct implementation

+ Pass: Copy directory "HW04 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Pass: Check that make compiles.



+ Pass: Check that file "date_unittest" exists.

+ Pass: Get all google tests.
    9 tests found.



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.GetDateTests.
<pre>
[ RUN      ] DateTest.GetDateTests
./date_unittest.cc:32: Failure
      Expected: date5.GetDate()
      Which is: "1-01-01"
To be equal to: "9999-99-99"
date5 GetDate() failure</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.GetUSDateTests.
<pre>
[ RUN      ] DateTest.GetUSDateTests
./date_unittest.cc:52: Failure
      Expected: date5.GetUsDate()
      Which is: "01-01-1"
To be equal to: "99-99-9999"
date5 GetUsDate() failure</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintDateTests.
<pre>
[ RUN      ] DateTest.PrintDateTests
./date_unittest.cc:137: Failure
      Expected: output5
      Which is: "1-01-01\n"
To be equal to: expected_out_5
      Which is: "9999-99-99\n"
failure output5 vs expected_out_5 with PrintDate(true)</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintDateTestsWithoutNewline.
<pre>
[ RUN      ] DateTest.PrintDateTestsWithoutNewline
./date_unittest.cc:223: Failure
      Expected: output5
      Which is: "1-01-01"
To be equal to: expected_out_5
      Which is: "9999-99-99"
failure output5 vs expected_out_5 with PrintDate(false)</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintUSDateTestsWithoutNewline.
<pre>
[ RUN      ] DateTest.PrintUSDateTestsWithoutNewline
./date_unittest.cc:308: Failure
      Expected: output5
      Which is: "01-01-1"
To be equal to: expected_out_5
      Which is: "99-99-9999"
failure output5 vs expected_out_5 with PrintUsDate(false)</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintUSDateTestsNEWLINE.
<pre>
[ RUN      ] DateTest.PrintUSDateTestsNEWLINE
./date_unittest.cc:394: Failure
      Expected: output5
      Which is: "01-01-1\n"
To be equal to: expected_out_5
      Which is: "99-99-9999\n"
failure output5 vs expected_out_5 with PrintUsDate(true)</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.OperatorAdditionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.OperatorSubtractionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DaysBetweenTests.



+ Fail: At least one test failed.


#### Testing Mutant 1 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 2 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 3 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 4 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 5 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 6 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 7 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 8 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.


#### Testing Mutant 9 for failure

+ Skip: Abstract test class.

  This test was not run because of an earlier failing test.

