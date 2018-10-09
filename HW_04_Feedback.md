### Feedback for Homework 04

Run on October 08, 18:32:55 PM.


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
./date_unittest.cc:31: Failure
      Expected: date4.GetDate()
      Which is: "1-01-01"
To be equal to: "0000-00-00"
date4 GetDate() failure
./date_unittest.cc:32: Failure
      Expected: date5.GetDate()
      Which is: "1-01-01"
To be equal to: "9999-99-99"
date5 GetDate() failure</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.GetUSDateTests.
<pre>
[ RUN      ] DateTest.GetUSDateTests
./date_unittest.cc:51: Failure
      Expected: date4.GetUsDate()
      Which is: "01-01-1"
To be equal to: "00-00-0000"
date4 GetUsDate() failure
./date_unittest.cc:52: Failure
      Expected: date5.GetUsDate()
      Which is: "01-01-1"
To be equal to: "99-99-9999"
date5 GetUsDate() failure</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintDateTests.
<pre>
[ RUN      ] DateTest.PrintDateTests
./date_unittest.cc:136: Failure
      Expected: output4
      Which is: "1-01-01\n"
To be equal to: expected_out_4
      Which is: "0000-00-00\n"
failure output4 vs expected_out_4 with PrintDate(true)
./date_unittest.cc:137: Failure
      Expected: output5
      Which is: "1-01-01\n"
To be equal to: expected_out_5
      Which is: "9999-99-99\n"
failure output5 vs expected_out_5 with PrintDate(true)
./date_unittest.cc:143: Failure
      Expected: output11
      Which is: "1000-10-09\n"
To be equal to: expected_out_11
      Which is: "1000-10-9\n"
failure output11 vs expected_out_11 with PrintDate(true)</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintDateTestsWithoutNewline.
<pre>
[ RUN      ] DateTest.PrintDateTestsWithoutNewline
./date_unittest.cc:222: Failure
      Expected: output4
      Which is: "1-01-01"
To be equal to: expected_out_4
      Which is: "0000-00-00"
failure output4 vs expected_out_4 with PrintDate(false)
./date_unittest.cc:223: Failure
      Expected: output5
      Which is: "1-01-01"
To be equal to: expected_out_5
      Which is: "9999-99-99"
failure output5 vs expected_out_5 with PrintDate(false)
./date_unittest.cc:229: Failure
      Expected: output11
      Which is: "1000-10-09"
To be equal to: expected_out_11
      Which is: "1000-10-9"
failure output11 vs expected_out_11 with PrintDate(false)</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintUSDateTestsWithoutNewline.
<pre>
[ RUN      ] DateTest.PrintUSDateTestsWithoutNewline
./date_unittest.cc:307: Failure
      Expected: output4
      Which is: "01-01-1"
To be equal to: expected_out_4
      Which is: "00-00-0000"
failure output4 vs expected_out_4 with PrintUsDate(false)
./date_unittest.cc:308: Failure
      Expected: output5
      Which is: "01-01-1"
To be equal to: expected_out_5
      Which is: "99-99-9999"
failure output5 vs expected_out_5 with PrintUsDate(false)
./date_unittest.cc:314: Failure
      Expected: output11
      Which is: "10-09-1000"
To be equal to: expected_out_11
      Which is: "10-9-1000"
failure output11 vs expected_out_11 with PrintUsDate(false)</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.PrintUSDateTestsNEWLINE.
<pre>
[ RUN      ] DateTest.PrintUSDateTestsNEWLINE
./date_unittest.cc:393: Failure
      Expected: output4
      Which is: "01-01-1\n"
To be equal to: expected_out_4
      Which is: "00-00-0000\n"
failure output4 vs expected_out_4 with PrintUsDate(true)
./date_unittest.cc:394: Failure
      Expected: output5
      Which is: "01-01-1\n"
To be equal to: expected_out_5
      Which is: "99-99-9999\n"
failure output5 vs expected_out_5 with PrintUsDate(true)
./date_unittest.cc:400: Failure
      Expected: output11
      Which is: "10-09-1000\n"
To be equal to: expected_out_11
      Which is: "10-9-1000\n"
failure output11 vs expected_out_11 with PrintUsDate(true)</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.OperatorAdditionTest.
<pre>
[ RUN      ] DateTest.OperatorAdditionTest
./date_unittest.cc:409: Failure
      Expected: (y2k.operator+(0)).GetUsDate()
      Which is: "12-31-1999"
To be equal to: "1999-12-31"
y2k operator+0 fail
./date_unittest.cc:410: Failure
      Expected: (ind_day.operator+(0)).GetUsDate()
      Which is: "07-04-1776"
To be equal to: "1776-07-04"
ind_day operator+0 fail
./date_unittest.cc:411: Failure
      Expected: (best_holiday.operator+(0)).GetUsDate()
      Which is: "10-31-2018"
To be equal to: "2018-10-31"
best_holiday operator+0 fail
./date_unittest.cc:412: Failure
      Expected: (y2k.operator+(0)).GetDate()
      Which is: "1999-12-31"
To be equal to: "12-31-1999"
y2k operator+0 fail 2
./date_unittest.cc:413: Failure
      Expected: (ind_day.operator+(0)).GetDate()
      Which is: "1776-07-04"
To be equal to: "07-04-1776"
ind_day operator+0 fail 2
./date_unittest.cc:414: Failure
      Expected: (best_holiday.operator+(0)).GetDate()
      Which is: "2018-10-31"
To be equal to: "10-31-2018"
best_holiday operator+0 fail 2
./date_unittest.cc:416: Failure
      Expected: (y2k.operator+(1)).GetUsDate()
      Which is: "01-01-2000"
To be equal to: "2000-01-01"
y2k operator+1 fail
./date_unittest.cc:417: Failure
      Expected: (ind_day.operator+(1)).GetUsDate()
      Which is: "07-05-1776"
To be equal to: "1776-07-05"
ind_day operator+1 fail
./date_unittest.cc:418: Failure
      Expected: (best_holiday.operator+(1)).GetUsDate()
      Which is: "11-01-2018"
To be equal to: "2018-11-01"
best_holiday operator+1 fail
./date_unittest.cc:419: Failure
      Expected: (y2k.operator+(1)).GetDate()
      Which is: "2000-01-01"
To be equal to: "01-01-2000"
y2k operator+1 fail 2
./date_unittest.cc:420: Failure
      Expected: (ind_day.operator+(1)).GetDate()
      Which is: "1776-07-05"
To be equal to: "07-05-1776"
ind_day operator+1 fail 2
./date_unittest.cc:421: Failure
      Expected: (best_holiday.operator+(1)).GetDate()
      Which is: "2018-11-01"
To be equal to: "11-01-2018"
best_holiday operator+1 fail 2
./date_unittest.cc:423: Failure
      Expected: (y2k.operator+(-1)).GetUsDate()
      Which is: "12-30-1999"
To be equal to: "1999-12-30"
y2k operator+(-1) fail
./date_unittest.cc:424: Failure
      Expected: (ind_day.operator+(-1)).GetUsDate()
      Which is: "07-03-1776"
To be equal to: "1776-07-03"
ind_day operator+(-1) fail
./date_unittest.cc:425: Failure
      Expected: (best_holiday.operator+(-1)).GetUsDate()
      Which is: "10-30-2018"
To be equal to: "2018-10-30"
best_holiday operator+(-1) fail
./date_unittest.cc:426: Failure
      Expected: (y2k.operator+(-1)).GetDate()
      Which is: "1999-12-30"
To be equal to: "12-30-1999"
y2k operator+(-1) fail 2
./date_unittest.cc:427: Failure
      Expected: (ind_day.operator+(-1)).GetDate()
      Which is: "1776-07-03"
To be equal to: "07-03-1776"
ind_day operator+(-1) fail 2
./date_unittest.cc:428: Failure
      Expected: (best_holiday.operator+(-1)).GetDate()
      Which is: "2018-10-30"
To be equal to: "10-30-2018"
best_holiday operator+(-1) fail 2
./date_unittest.cc:442: Failure
      Expected: (day_test1.operator+(1)).GetUsDate()
      Which is: "05-01-1999"
To be equal to: "1999-05-01"
day_test1 operator+(1) fail
./date_unittest.cc:443: Failure
      Expected: (day_test1.operator+(1)).GetDate()
      Which is: "1999-05-01"
To be equal to: "05-01-1999"
day_test1 operator+(1) fail 2
./date_unittest.cc:444: Failure
      Expected: (day_test1.operator+(-1)).GetUsDate()
      Which is: "04-29-1999"
To be equal to: "1999-04-29"
day_test1 operator+(-1) fail 3
./date_unittest.cc:445: Failure
      Expected: (day_test1.operator+(-1)).GetDate()
      Which is: "1999-04-29"
To be equal to: "04-29-1999"
day_test1 operator+(-1) fail 4
./date_unittest.cc:447: Failure
      Expected: (day_test2.operator+(1)).GetUsDate()
      Which is: "01-02-2000"
To be equal to: "2000-01-02"
day_test2 operator+(1) fail
./date_unittest.cc:448: Failure
      Expected: (day_test2.operator+(1)).GetDate()
      Which is: "2000-01-02"
To be equal to: "01-02-2000"
day_test2 operator+(1) fail 2
./date_unittest.cc:449: Failure
      Expected: (day_test2.operator+(-1)).GetUsDate()
      Which is: "12-31-1999"
To be equal to: "1999-12-31"
day_test2 operator+(-1) fail 3
./date_unittest.cc:450: Failure
      Expected: (day_test2.operator+(-1)).GetDate()
      Which is: "1999-12-31"
To be equal to: "12-31-1999"
day_test2 operator+(-1) fail 4
./date_unittest.cc:452: Failure
      Expected: (day_test3.operator+(1)).GetUsDate()
      Which is: "01-02-1900"
To be equal to: "1900-01-02"
day_test3 operator+(1) fail
./date_unittest.cc:453: Failure
      Expected: (day_test3.operator+(1)).GetDate()
      Which is: "1900-01-02"
To be equal to: "01-02-1900"
day_test3 operator+(1) fail 2
./date_unittest.cc:454: Failure
      Expected: (day_test3.operator+(-1)).GetUsDate()
      Which is: "12-31-1899"
To be equal to: "1899-12-31"
day_test3 operator+(-1) fail 3
./date_unittest.cc:455: Failure
      Expected: (day_test3.operator+(-1)).GetDate()
      Which is: "1899-12-31"
To be equal to: "12-31-1899"
day_test3 operator+(-1) fail 4
./date_unittest.cc:457: Failure
      Expected: (day_test4.operator+(1)).GetUsDate()
      Which is: "01-01-10000"
To be equal to: "0000-01-01"
day_test4 operator+(1) fail
./date_unittest.cc:458: Failure
      Expected: (day_test4.operator+(1)).GetDate()
      Which is: "10000-01-01"
To be equal to: "01-01-0000"
day_test4 operator+(1) fail 2
./date_unittest.cc:459: Failure
      Expected: (day_test4.operator+(-1)).GetUsDate()
      Which is: "12-30-9999"
To be equal to: "9999-12-30"
day_test4 operator+(-1) fail 3
./date_unittest.cc:460: Failure
      Expected: (day_test4.operator+(-1)).GetDate()
      Which is: "9999-12-30"
To be equal to: "12-30-9999"
day_test4 operator+(-1) fail 4
./date_unittest.cc:462: Failure
      Expected: (month_test1.operator+(30)).GetUsDate()
      Which is: "12-01-1776"
To be equal to: "1776-12-01"
month_test1 operator+(30) fail
./date_unittest.cc:463: Failure
      Expected: (month_test1.operator+(30)).GetDate()
      Which is: "1776-12-01"
To be equal to: "12-01-1776"
month_test1 operator+(30) fail 2
./date_unittest.cc:464: Failure
      Expected: (month_test1.operator+(-31)).GetUsDate()
      Which is: "10-01-1776"
To be equal to: "1776-10-01"
month_test1 operator+(-31) fail 3
./date_unittest.cc:465: Failure
      Expected: (month_test1.operator+(-31)).GetDate()
      Which is: "1776-10-01"
To be equal to: "10-01-1776"
month_test1 operator+(-31) fail 4
./date_unittest.cc:467: Failure
      Expected: (month_test2.operator+(31)).GetUsDate()
      Which is: "01-31-2001"
To be equal to: "2001-01-31"
month_test2 operator+(31) fail
./date_unittest.cc:468: Failure
      Expected: (month_test2.operator+(31)).GetDate()
      Which is: "2001-01-31"
To be equal to: "01-31-2001"
month_test2 operator+(31) fail 2
./date_unittest.cc:469: Failure
      Expected: (month_test2.operator+(-31)).GetUsDate()
      Which is: "11-30-2000"
To be equal to: "2000-11-30"
month_test2 operator+(-31) fail 3
./date_unittest.cc:470: Failure
      Expected: (month_test2.operator+(-31)).GetDate()
      Which is: "2000-11-30"
To be equal to: "11-30-2000"
month_test2 operator+(-31) fail 4
./date_unittest.cc:472: Failure
      Expected: (year_test1.operator+(365)).GetUsDate()
      Which is: "01-01-1999"
To be equal to: "1999-01-01"
year_test1 operator+(365) fail
./date_unittest.cc:473: Failure
      Expected: (year_test1.operator+(365)).GetDate()
      Which is: "1999-01-01"
To be equal to: "01-01-1999"
year_test1 operator+(365) fail 2
./date_unittest.cc:474: Failure
      Expected: (year_test1.operator+(-365)).GetUsDate()
      Which is: "01-01-1997"
To be equal to: "1997-01-01"
year_test1 operator+(-365) fail 3
./date_unittest.cc:475: Failure
      Expected: (year_test1.operator+(-365)).GetDate()
      Which is: "1997-01-01"
To be equal to: "01-01-1997"
year_test1 operator+(-365) fail 4
./date_unittest.cc:477: Failure
      Expected: (year_test2.operator+(365)).GetUsDate()
      Which is: "01-01-2000"
To be equal to: "2000-01-01"
year_test2 operator+(365) fail
./date_unittest.cc:478: Failure
      Expected: (year_test2.operator+(365)).GetDate()
      Which is: "2000-01-01"
To be equal to: "01-01-2000"
year_test2 operator+(365) fail 2
./date_unittest.cc:479: Failure
      Expected: (year_test2.operator+(-365)).GetUsDate()
      Which is: "01-01-1998"
To be equal to: "1998-01-01"
year_test2 operator+(-365) fail 3
./date_unittest.cc:480: Failure
      Expected: (year_test2.operator+(-365)).GetDate()
      Which is: "1998-01-01"
To be equal to: "01-01-1998"
year_test2 operator+(-365) fail 4
./date_unittest.cc:482: Failure
      Expected: (year_test3.operator+(365)).GetUsDate()
      Which is: "12-30-2000"
To be equal to: "2000-12-31"
year_test3 operator+(365) fail
./date_unittest.cc:483: Failure
      Expected: (year_test3.operator+(365)).GetDate()
      Which is: "2000-12-30"
To be equal to: "12-31-2000"
year_test3 operator+(365) fail 2
./date_unittest.cc:484: Failure
      Expected: (year_test3.operator+(-365)).GetUsDate()
      Which is: "12-31-1998"
To be equal to: "1998-12-31"
year_test3 operator+(-365) fail 3
./date_unittest.cc:485: Failure
      Expected: (year_test3.operator+(-365)).GetDate()
      Which is: "1998-12-31"
To be equal to: "12-31-1998"
year_test3 operator+(-365) fail 4</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.OperatorSubtractionTest.
<pre>
[ RUN      ] DateTest.OperatorSubtractionTest
./date_unittest.cc:494: Failure
      Expected: (y2k.operator-(0)).GetUsDate()
      Which is: "12-31-1999"
To be equal to: "1999-12-31"
y2k operator-0 fail
./date_unittest.cc:495: Failure
      Expected: (ind_day.operator-(0)).GetUsDate()
      Which is: "07-04-1776"
To be equal to: "1776-07-04"
ind_day operator-0 fail
./date_unittest.cc:496: Failure
      Expected: (best_holiday.operator-(0)).GetUsDate()
      Which is: "10-31-2018"
To be equal to: "2018-10-31"
best_holiday operator-0 fail
./date_unittest.cc:497: Failure
      Expected: (y2k.operator-(0)).GetDate()
      Which is: "1999-12-31"
To be equal to: "12-31-1999"
y2k operator-0 fail 2
./date_unittest.cc:498: Failure
      Expected: (ind_day.operator-(0)).GetDate()
      Which is: "1776-07-04"
To be equal to: "07-04-1776"
ind_day operator-0 fail 2
./date_unittest.cc:499: Failure
      Expected: (best_holiday.operator-(0)).GetDate()
      Which is: "2018-10-31"
To be equal to: "10-31-2018"
best_holiday operator-0 fail 2
./date_unittest.cc:501: Failure
      Expected: (y2k.operator-(-1)).GetUsDate()
      Which is: "01-01-2000"
To be equal to: "2000-01-01"
y2k operator-(-1) fail
./date_unittest.cc:502: Failure
      Expected: (ind_day.operator-(-1)).GetUsDate()
      Which is: "07-05-1776"
To be equal to: "1776-07-05"
ind_day operator-(-1) fail
./date_unittest.cc:503: Failure
      Expected: (best_holiday.operator-(-1)).GetUsDate()
      Which is: "11-01-2018"
To be equal to: "2018-11-01"
best_holiday operator-(-1) fail
./date_unittest.cc:504: Failure
      Expected: (y2k.operator-(-1)).GetDate()
      Which is: "2000-01-01"
To be equal to: "01-01-2000"
y2k operator-(-1) fail 2
./date_unittest.cc:505: Failure
      Expected: (ind_day.operator-(-1)).GetDate()
      Which is: "1776-07-05"
To be equal to: "07-05-1776"
ind_day operator-(-1) fail 2
./date_unittest.cc:506: Failure
      Expected: (best_holiday.operator-(-1)).GetDate()
      Which is: "2018-11-01"
To be equal to: "11-01-2018"
best_holiday operator-(-1) fail 2
./date_unittest.cc:508: Failure
      Expected: (y2k.operator-(1)).GetUsDate()
      Which is: "12-30-1999"
To be equal to: "1999-12-30"
y2k operator-1 fail
./date_unittest.cc:509: Failure
      Expected: (ind_day.operator-(1)).GetUsDate()
      Which is: "07-03-1776"
To be equal to: "1776-07-03"
ind_day operator-1 fail
./date_unittest.cc:510: Failure
      Expected: (best_holiday.operator-(1)).GetUsDate()
      Which is: "10-30-2018"
To be equal to: "2018-10-30"
best_holiday operator-1 fail
./date_unittest.cc:511: Failure
      Expected: (y2k.operator-(1)).GetDate()
      Which is: "1999-12-30"
To be equal to: "12-30-1999"
y2k operator-1 fail 2
./date_unittest.cc:512: Failure
      Expected: (ind_day.operator-(1)).GetDate()
      Which is: "1776-07-03"
To be equal to: "07-03-1776"
ind_day operator-1 fail 2
./date_unittest.cc:513: Failure
      Expected: (best_holiday.operator-(1)).GetDate()
      Which is: "2018-10-30"
To be equal to: "10-30-2018"
best_holiday operator-1 fail 2
./date_unittest.cc:527: Failure
      Expected: (day_test1.operator-(-1)).GetUsDate()
      Which is: "05-01-1999"
To be equal to: "1999-05-01"
day_test1 operator-(-1) fail
./date_unittest.cc:528: Failure
      Expected: (day_test1.operator-(-1)).GetDate()
      Which is: "1999-05-01"
To be equal to: "05-01-1999"
day_test1 operator-(-1) fail 2
./date_unittest.cc:529: Failure
      Expected: (day_test1.operator-(1)).GetUsDate()
      Which is: "04-29-1999"
To be equal to: "1999-04-29"
day_test1 operator-1 fail 3
./date_unittest.cc:530: Failure
      Expected: (day_test1.operator-(1)).GetDate()
      Which is: "1999-04-29"
To be equal to: "04-29-1999"
day_test1 operator-1 fail 4
./date_unittest.cc:532: Failure
      Expected: (day_test2.operator-(-1)).GetUsDate()
      Which is: "01-02-2000"
To be equal to: "2000-01-02"
day_test2 operator-(-1) fail
./date_unittest.cc:533: Failure
      Expected: (day_test2.operator-(-1)).GetDate()
      Which is: "2000-01-02"
To be equal to: "01-02-2000"
day_test2 operator-(-1) fail 2
./date_unittest.cc:534: Failure
      Expected: (day_test2.operator-(1)).GetUsDate()
      Which is: "12-31-1999"
To be equal to: "1999-12-31"
day_test2 operator-(1) fail 3
./date_unittest.cc:535: Failure
      Expected: (day_test2.operator-(1)).GetDate()
      Which is: "1999-12-31"
To be equal to: "12-31-1999"
day_test2 operator-(1) fail 4
./date_unittest.cc:537: Failure
      Expected: (day_test3.operator-(-1)).GetUsDate()
      Which is: "01-02-1900"
To be equal to: "1900-01-02"
day_test3 operator-(-1) fail
./date_unittest.cc:538: Failure
      Expected: (day_test3.operator-(-1)).GetDate()
      Which is: "1900-01-02"
To be equal to: "01-02-1900"
day_test3 operator-(-1) fail 2
./date_unittest.cc:539: Failure
      Expected: (day_test3.operator-(1)).GetUsDate()
      Which is: "12-31-1899"
To be equal to: "1899-12-31"
day_test3 operator-1 fail 3
./date_unittest.cc:540: Failure
      Expected: (day_test3.operator-(1)).GetDate()
      Which is: "1899-12-31"
To be equal to: "12-31-1899"
day_test3 operator-1 fail 4
./date_unittest.cc:542: Failure
      Expected: (day_test4.operator-(-1)).GetUsDate()
      Which is: "01-01-10000"
To be equal to: "0000-01-01"
day_test4 operator-(-1) fail
./date_unittest.cc:543: Failure
      Expected: (day_test4.operator-(-1)).GetDate()
      Which is: "10000-01-01"
To be equal to: "01-01-0000"
day_test4 operator-(-1) fail 2
./date_unittest.cc:544: Failure
      Expected: (day_test4.operator-(1)).GetUsDate()
      Which is: "12-30-9999"
To be equal to: "9999-12-30"
day_test4 operator-1 fail 3
./date_unittest.cc:545: Failure
      Expected: (day_test4.operator-(1)).GetDate()
      Which is: "9999-12-30"
To be equal to: "12-30-9999"
day_test4 operator-1 fail 4
./date_unittest.cc:547: Failure
      Expected: (month_test1.operator-(-30)).GetUsDate()
      Which is: "12-01-1776"
To be equal to: "1776-12-01"
month_test1 operator-(-30) fail
./date_unittest.cc:548: Failure
      Expected: (month_test1.operator-(-30)).GetDate()
      Which is: "1776-12-01"
To be equal to: "12-01-1776"
month_test1 operator-(-30) fail 2
./date_unittest.cc:549: Failure
      Expected: (month_test1.operator-(31)).GetUsDate()
      Which is: "10-01-1776"
To be equal to: "1776-10-01"
month_test1 operator-31 fail 3
./date_unittest.cc:550: Failure
      Expected: (month_test1.operator-(31)).GetDate()
      Which is: "1776-10-01"
To be equal to: "10-01-1776"
month_test1 operator-31 fail 4
./date_unittest.cc:552: Failure
      Expected: (month_test2.operator-(-31)).GetUsDate()
      Which is: "01-31-2001"
To be equal to: "2001-01-31"
month_test2 operator-(-31) fail
./date_unittest.cc:553: Failure
      Expected: (month_test2.operator-(-31)).GetDate()
      Which is: "2001-01-31"
To be equal to: "01-31-2001"
month_test2 operator-(-31) fail 2
./date_unittest.cc:554: Failure
      Expected: (month_test2.operator-(31)).GetUsDate()
      Which is: "11-30-2000"
To be equal to: "2000-11-30"
month_test2 operator-31 fail 3
./date_unittest.cc:555: Failure
      Expected: (month_test2.operator-(31)).GetDate()
      Which is: "2000-11-30"
To be equal to: "11-30-2000"
month_test2 operator-31 fail 4
./date_unittest.cc:557: Failure
      Expected: (year_test1.operator-(-365)).GetUsDate()
      Which is: "01-01-1999"
To be equal to: "1999-01-01"
year_test1 operator-(-365) fail
./date_unittest.cc:558: Failure
      Expected: (year_test1.operator-(-365)).GetDate()
      Which is: "1999-01-01"
To be equal to: "01-01-1999"
year_test1 operator-(-365) fail 2
./date_unittest.cc:559: Failure
      Expected: (year_test1.operator-(365)).GetUsDate()
      Which is: "01-01-1997"
To be equal to: "1997-01-01"
year_test1 operator-365 fail 3
./date_unittest.cc:560: Failure
      Expected: (year_test1.operator-(365)).GetDate()
      Which is: "1997-01-01"
To be equal to: "01-01-1997"
year_test1 operator-365 fail 4
./date_unittest.cc:562: Failure
      Expected: (year_test2.operator-(-365)).GetUsDate()
      Which is: "01-01-2000"
To be equal to: "2000-01-01"
year_test2 operator-(-365) fail
./date_unittest.cc:563: Failure
      Expected: (year_test2.operator-(-365)).GetDate()
      Which is: "2000-01-01"
To be equal to: "01-01-2000"
year_test2 operator-(-365) fail 2
./date_unittest.cc:564: Failure
      Expected: (year_test2.operator-(365)).GetUsDate()
      Which is: "01-01-1998"
To be equal to: "1998-01-01"
year_test2 operator-365 fail 3
./date_unittest.cc:565: Failure
      Expected: (year_test2.operator-(365)).GetDate()
      Which is: "1998-01-01"
To be equal to: "01-01-1998"
year_test2 operator-365 fail 4
./date_unittest.cc:567: Failure
      Expected: (year_test3.operator-(-365)).GetUsDate()
      Which is: "12-30-2000"
To be equal to: "2000-12-31"
year_test3 operator-(-365) fail
./date_unittest.cc:568: Failure
      Expected: (year_test3.operator-(-365)).GetDate()
      Which is: "2000-12-30"
To be equal to: "12-31-2000"
year_test3 operator-(-365) fail 2
./date_unittest.cc:569: Failure
      Expected: (year_test3.operator-(365)).GetUsDate()
      Which is: "12-31-1998"
To be equal to: "1998-12-31"
year_test3 operator-365 fail 3
./date_unittest.cc:570: Failure
      Expected: (year_test3.operator-(365)).GetDate()
      Which is: "1998-12-31"
To be equal to: "12-31-1998"
year_test3 operator-365 fail 4</pre>



+ Fail: Check that a GoogleTest test passes.
    fails the test: DateTest.DaysBetweenTests.
<pre>
[ RUN      ] DateTest.DaysBetweenTests
./date_unittest.cc:593: Failure
      Expected: date1.DaysBetween(date2)
      Which is: 366
To be equal to: 365
date1 to date2 incorrect for DaysBetween()
./date_unittest.cc:594: Failure
      Expected: date2.DaysBetween(date3)
      Which is: 365
To be equal to: 366
date2 to date3 leap year failure in DaysBetween()</pre>



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

