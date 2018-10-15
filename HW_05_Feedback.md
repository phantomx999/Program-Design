### Feedback for Homework 05

Run on October 15, 16:41:25 PM.


#### System Files and HW Directory Structure

+ Pass: Check that directory "/lhome/gitbot/umn-csci-3081-F18/grading-scripts/_hw_materials" exists.

+ Pass: Check that directory "HW" exists.

+ Pass: Check that directory "HW/HW01" exists.

+ Pass: Check that directory "HW/HW02" exists.

+ Pass: Check that directory "HW/HW03" exists.

+ Pass: Check that directory "HW/HW04" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Testing style: HW01

+ Pass: Change into directory "HW/HW01".

+ Pass: Check that file "main.cpp" exists.

+ Pass: Check that file "point2.h" exists.

+ Pass: Check that file "point2.cc" exists.

+ Pass: Check Style for main.cpp.

    Complete.



+ Fail: Check Style for point2.h.

<pre>point2.h:22:  #endif line should be "#endif  // HW01_POINT2_H_"  [build/header_guard] [5]
Done processing point2.h
Total errors found: 1
</pre>



+ Pass: Check Style for point2.cc.

    Complete.




#### Testing style: HW02

+ Pass: Change into directory "../HW02".

+ Pass: Check that file "DecoyDuck.h" exists.

+ Pass: Check that file "MallardDuck.h" exists.

+ Pass: Check that file "QuackBehavior.h" exists.

+ Pass: Check that file "RubberDuck.h" exists.

+ Pass: Check that file "Duck.h" exists.

+ Pass: Check that file "MuteQuack.h" exists.

+ Pass: Check that file "Quack.h" exists.

+ Pass: Check that file "Squeak.h" exists.

+ Pass: Check that file "DecoyDuck.cpp" exists.

+ Pass: Check that file "main.cpp" exists.

+ Pass: Check that file "MuteQuack.cpp" exists.

+ Pass: Check that file "Quack.cpp" exists.

+ Pass: Check that file "Squeak.cpp" exists.

+ Pass: Check that file "Duck.cpp" exists.

+ Pass: Check that file "MallardDuck.cpp" exists.

+ Pass: Check that file "QuackBehavior.cpp" exists.

+ Pass: Check that file "RubberDuck.cpp" exists.

+ Pass: Check Style for DecoyDuck.h.

    Complete.



+ Pass: Check Style for MallardDuck.h.

    Complete.



+ Pass: Check Style for QuackBehavior.h.

    Complete.



+ Pass: Check Style for RubberDuck.h.

    Complete.



+ Pass: Check Style for Duck.h.

    Complete.



+ Pass: Check Style for MuteQuack.h.

    Complete.



+ Pass: Check Style for Quack.h.

    Complete.



+ Pass: Check Style for Squeak.h.

    Complete.



+ Pass: Check Style for DecoyDuck.cpp.

    Complete.



+ Pass: Check Style for main.cpp.

    Complete.



+ Pass: Check Style for MuteQuack.cpp.

    Complete.



+ Pass: Check Style for Quack.cpp.

    Complete.



+ Pass: Check Style for Squeak.cpp.

    Complete.



+ Pass: Check Style for Duck.cpp.

    Complete.



+ Pass: Check Style for MallardDuck.cpp.

    Complete.



+ Pass: Check Style for QuackBehavior.cpp.

    Complete.



+ Pass: Check Style for RubberDuck.cpp.

    Complete.




#### Testing style: HW03

+ Pass: Change into directory "../HW03".

+ Pass: Check that file "Date.h" exists.

+ Pass: Check that file "Debug.h" exists.

+ Pass: Check that file "Exceptions.h" exists.

+ Pass: Check that file "Date.cc" exists.

+ Pass: Check that file "Exceptions.cc" exists.

+ Pass: Check that file "main.cc" exists.

+ Fail: Check Style for Date.h.

<pre>Date.h:10:  Found C++ system header after other header. Should be: Date.h, c system, c++ system, other.  [build/include_order] [4]
Date.h:32:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Done processing Date.h
Total errors found: 2
</pre>



+ Fail: Check Style for Debug.h.

<pre>Debug.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
Done processing Debug.h
Total errors found: 1
</pre>



+ Fail: Check Style for Exceptions.h.

<pre>Exceptions.h:16:  Extra space before ( in function call  [whitespace/parens] [4]
Exceptions.h:16:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
Exceptions.h:17:  Extra space before ( in function call  [whitespace/parens] [4]
Exceptions.h:21:  private: should be indented +1 space inside class InvalidData  [whitespace/indent] [3]
Exceptions.h:25:  At least two spaces is best between code and comments  [whitespace/comments] [2]
Done processing Exceptions.h
Total errors found: 5
</pre>



+ Fail: Check Style for Date.cc.

<pre>Date.cc:10:  Found C++ system header after other header. Should be: Date.h, c system, c++ system, other.  [build/include_order] [4]
Date.cc:11:  Found C++ system header after other header. Should be: Date.h, c system, c++ system, other.  [build/include_order] [4]
Date.cc:12:  Found C++ system header after other header. Should be: Date.h, c system, c++ system, other.  [build/include_order] [4]
Date.cc:26:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
Done processing Date.cc
Total errors found: 4
</pre>



+ Pass: Check Style for Exceptions.cc.

    Complete.



+ Fail: Check Style for main.cc.

<pre>main.cc:36:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
main.cc:45:  Should have a space between // and comment  [whitespace/comments] [4]
main.cc:47:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
Done processing main.cc
Total errors found: 3
</pre>




#### Testing style: HW04

+ Pass: Change into directory "../HW04".

+ Pass: Check that file "main.cc" exists.

+ Pass: Check that file "date.h" exists.

+ Pass: Check that file "date.cc" exists.

+ Fail: Check Style for main.cc.

<pre>main.cc:31:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:37:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:43:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:49:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:52:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:63:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:79:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:82:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
Done processing main.cc
Total errors found: 8
</pre>



+ Fail: Check Style for date.h.

<pre>date.h:7:  #ifndef header guard has wrong style, please use: HW04_DATE_H_  [build/header_guard] [5]
date.h:32:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
date.h:65:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:71:  "private:" should be preceded by a blank line  [whitespace/blank_line] [3]
date.h:74:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:60:  Add #include <string> for string  [build/include_what_you_use] [4]
Done processing date.h
Total errors found: 6
</pre>



+ Fail: Check Style for date.cc.

<pre>date.cc:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
date.cc:16:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:18:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:20:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:37:  Extra space after ( in function call  [whitespace/parens] [4]
date.cc:37:  Extra space before )  [whitespace/parens] [2]
date.cc:38:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:40:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:42:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:64:  Missing space before {  [whitespace/braces] [5]
date.cc:88:  At least two spaces is best between code and comments  [whitespace/comments] [2]
date.cc:88:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:90:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:94:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:98:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:108:  At least two spaces is best between code and comments  [whitespace/comments] [2]
date.cc:112:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:116:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:118:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:128:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
date.cc:138:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
date.cc:154:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
date.cc:154:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.cc:155:  Missing space before {  [whitespace/braces] [5]
date.cc:157:  Extra space after (  [whitespace/parens] [2]
date.cc:157:  Extra space before )  [whitespace/parens] [2]
date.cc:158:  Extra space after (  [whitespace/parens] [2]
date.cc:158:  Extra space before )  [whitespace/parens] [2]
date.cc:162:  Missing space before {  [whitespace/braces] [5]
date.cc:165:  Extra space after (  [whitespace/parens] [2]
date.cc:165:  Extra space before )  [whitespace/parens] [2]
date.cc:166:  Extra space after (  [whitespace/parens] [2]
date.cc:166:  Extra space before )  [whitespace/parens] [2]
date.cc:167:  Extra space after (  [whitespace/parens] [2]
date.cc:167:  Extra space before )  [whitespace/parens] [2]
date.cc:168:  Extra space after (  [whitespace/parens] [2]
date.cc:168:  Extra space before )  [whitespace/parens] [2]
date.cc:169:  Extra space after (  [whitespace/parens] [2]
date.cc:169:  Extra space before )  [whitespace/parens] [2]
date.cc:170:  Extra space after (  [whitespace/parens] [2]
date.cc:170:  Extra space before )  [whitespace/parens] [2]
date.cc:172:  Extra space after (  [whitespace/parens] [2]
date.cc:172:  Extra space before )  [whitespace/parens] [2]
date.cc:173:  Extra space after (  [whitespace/parens] [2]
date.cc:173:  Extra space before )  [whitespace/parens] [2]
Done processing date.cc
Total errors found: 45
</pre>



