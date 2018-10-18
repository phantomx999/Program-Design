### Assessment for Homework 04

#### Total score: _95.75_ / _100_

Run on October 17, 20:05:15 PM.


#### System Files and HW Directory Structure

+ Pass: Switch to correct commit.

    Complete.



+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/_hw_materials" exists.

+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/_hw_materials/googletest" exists.

+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/dtorban/grading-scripts/_hw_materials/HW04" exists.

+ Pass: Check that directory "HW" exists.

+ Pass: Check that directory "HW/HW04" exists.

+ Pass: Make directory "HW04_Testing".

+ Pass: Change into directory "HW04_Testing".


#### Set up Google Test framework

+ Pass: Copy directory "Google Tests".




#### Essential Files Exist

+ Pass: Check that file "../HW/HW04/date_unittest.cc" exists.


### Testing correct implementation

+ Pass: Copy directory "HW04 files.".



+ Pass: Copy directory "Files for correct version".



+ Pass: Change into directory "correct".

+ Pass: Check that make compiles.



+ Pass: Check that file "date_unittest" exists.

+ Pass: Get all google tests.
    9 tests found.




#### Results

+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.GetDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.GetUSDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTests.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintDateTestsWithoutNewline.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintUSDateTestsWithoutNewline.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.PrintUSDateTestsNEWLINE.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.OperatorAdditionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.OperatorSubtractionTest.



+ Pass: Check that a GoogleTest test passes.
    passes the test: DateTest.DaysBetweenTests.



+  _50_ / _50_ : Pass: All tests passed.


### Testing Mutants


#### Testing Mutant 1 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - Dates constructed with epoch are about 70 years in the future


#### Testing Mutant 2 for failure

+ Pass: At least one test failed for Mutant 2


#### Testing Mutant 3 for failure

+ Pass: At least one test failed for Mutant 3


#### Testing Mutant 4 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - Today's date month off by one


#### Testing Mutant 5 for failure

+ Pass: At least one test failed for Mutant 5


#### Testing Mutant 6 for failure

+ Pass: At least one test failed for Mutant 6


#### Testing Mutant 7 for failure

+ Pass: At least one test failed for Mutant 7


#### Testing Mutant 8 for failure

+ Pass: At least one test failed for Mutant 8


#### Testing Mutant 9 for failure

+ Pass: At least one test failed for Mutant 9


#### Testing Mutant 10 for failure

+ Pass: At least one test failed for Mutant 10


#### Testing Mutant 11 for failure

+ Pass: At least one test failed for Mutant 11


#### Testing Mutant 12 for failure

+ Pass: At least one test failed for Mutant 12


#### Testing Mutant 13 for failure

+ Pass: At least one test failed for Mutant 13


#### Testing Mutant 14 for failure

+ Fail: There is no test case for this mutant (since all tests pass).
   - Reason - Date which should be Jan 1, 2000 is actually Jan 1, 100.


#### Testing Mutant 15 for failure

+ Pass: At least one test failed for Mutant 15


#### Testing Mutant 16 for failure

+ Pass: At least one test failed for Mutant 16


#### Testing Mutant 17 for failure

+ Pass: At least one test failed for Mutant 17


#### Results

+  _45.75_ / _50_ : Fail: 82.35% of the tests passed, but the target is 90.0%.

#### Total score: _95.75_ / _100_

