### Feedback for Homework 05

Run on October 14, 20:50:10 PM.


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

<pre>point2.h:0:  No #ifndef header guard found, suggested CPP variable is: HW01_POINT2_H_  [build/header_guard] [5]
point2.h:17:  Tab found; better to use spaces  [whitespace/tab] [1]
point2.h:17:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
point2.h:20:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
Done processing point2.h
Total errors found: 4
</pre>



+ Fail: Check Style for point2.cc.

<pre>point2.cc:10:  Missing space before {  [whitespace/braces] [5]
point2.cc:15:  Missing space before {  [whitespace/braces] [5]
point2.cc:20:  Missing space before {  [whitespace/braces] [5]
point2.cc:21:  Redundant blank line at the start of a code block should be deleted.  [whitespace/blank_line] [2]
point2.cc:21:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
point2.cc:24:  Missing space before {  [whitespace/braces] [5]
point2.cc:28:  Missing space before {  [whitespace/braces] [5]
point2.cc:32:  Missing space before {  [whitespace/braces] [5]
point2.cc:36:  Missing space before {  [whitespace/braces] [5]
point2.cc:40:  Missing space before {  [whitespace/braces] [5]
point2.cc:43:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
point2.cc:44:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
Done processing point2.cc
Total errors found: 12
</pre>




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



+ Fail: Check Style for Duck.h.

<pre>Duck.h:0:  No #ifndef header guard found, suggested CPP variable is: HW02_DUCK_H_  [build/header_guard] [5]
Duck.h:18:  You don't need a ; after a }  [readability/braces] [4]
Done processing Duck.h
Total errors found: 2
</pre>



+ Fail: Check Style for MuteQuack.h.

<pre>MuteQuack.h:0:  No #ifndef header guard found, suggested CPP variable is: HW02_MUTEQUACK_H_  [build/header_guard] [5]
Done processing MuteQuack.h
Total errors found: 1
</pre>



+ Fail: Check Style for Quack.h.

<pre>Quack.h:14:  You don't need a ; after a }  [readability/braces] [4]
Quack.h:15:  You don't need a ; after a }  [readability/braces] [4]
Done processing Quack.h
Total errors found: 2
</pre>



+ Fail: Check Style for Squeak.h.

<pre>Squeak.h:14:  You don't need a ; after a }  [readability/braces] [4]
Squeak.h:15:  You don't need a ; after a }  [readability/braces] [4]
Done processing Squeak.h
Total errors found: 2
</pre>



+ Pass: Check Style for DecoyDuck.cpp.

    Complete.



+ Fail: Check Style for main.cpp.

<pre>main.cpp:48:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cpp:60:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
main.cpp:60:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cpp:60:  Redundant blank line at the start of a code block should be deleted.  [whitespace/blank_line] [2]
main.cpp:61:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
Done processing main.cpp
Total errors found: 5
</pre>



+ Pass: Check Style for MuteQuack.cpp.

    Complete.



+ Pass: Check Style for Quack.cpp.

    Complete.



+ Pass: Check Style for Squeak.cpp.

    Complete.



+ Fail: Check Style for Duck.cpp.

<pre>Duck.cpp:30:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
Done processing Duck.cpp
Total errors found: 1
</pre>



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

<pre>Date.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
Date.h:1:  #ifndef header guard has wrong style, please use: HW03_DATE_H_  [build/header_guard] [5]
Date.h:51:  #endif line should be "#endif  // HW03_DATE_H_"  [build/header_guard] [5]
Date.h:9:  public: should be indented +1 space inside class Date  [whitespace/indent] [3]
Date.h:10:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:11:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:12:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:14:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:16:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:18:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:20:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:22:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:24:  private: should be indented +1 space inside class Date  [whitespace/indent] [3]
Date.h:25:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:48:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Date.h:49:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Done processing Date.h
Total errors found: 16
</pre>



+ Fail: Check Style for Debug.h.

<pre>Debug.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
Debug.h:1:  #ifndef header guard has wrong style, please use: HW03_DEBUG_H_  [build/header_guard] [5]
Debug.h:14:  #endif line should be "#endif  // HW03_DEBUG_H_"  [build/header_guard] [5]
Debug.h:12:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
Done processing Debug.h
Total errors found: 4
</pre>



+ Fail: Check Style for Exceptions.h.

<pre>Exceptions.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
Exceptions.h:1:  #ifndef header guard has wrong style, please use: HW03_EXCEPTIONS_H_  [build/header_guard] [5]
Exceptions.h:21:  #endif line should be "#endif  // HW03_EXCEPTIONS_H_"  [build/header_guard] [5]
Exceptions.h:11:  public: should be indented +1 space inside class InvalidData  [whitespace/indent] [3]
Exceptions.h:12:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Exceptions.h:12:  Extra space before ( in function call  [whitespace/parens] [4]
Exceptions.h:12:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
Exceptions.h:13:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Exceptions.h:13:  Extra space before ( in function call  [whitespace/parens] [4]
Exceptions.h:15:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Exceptions.h:17:  private: should be indented +1 space inside class InvalidData  [whitespace/indent] [3]
Exceptions.h:18:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Exceptions.h:19:  Extra space before last semicolon. If this should be an empty statement, use {} instead.  [whitespace/semicolon] [5]
Done processing Exceptions.h
Total errors found: 13
</pre>



+ Fail: Check Style for Date.cc.

<pre>Date.cc:14:  Do not use namespace using-directives.  Use using-declarations instead.  [build/namespaces] [5]
Date.cc:10:  HW/HW03/Date.cc should include its header file HW/HW03/Date.h  [build/include] [5]
Done processing Date.cc
Total errors found: 2
</pre>



+ Fail: Check Style for Exceptions.cc.

<pre>Exceptions.cc:15:  Do not use namespace using-directives.  Use using-declarations instead.  [build/namespaces] [5]
Exceptions.cc:13:  HW/HW03/Exceptions.cc should include its header file HW/HW03/Exceptions.h  [build/include] [5]
Done processing Exceptions.cc
Total errors found: 2
</pre>



+ Fail: Check Style for main.cc.

<pre>main.cc:12:  Do not use namespace using-directives.  Use using-declarations instead.  [build/namespaces] [5]
main.cc:45:  Should have a space between // and comment  [whitespace/comments] [4]
Done processing main.cc
Total errors found: 2
</pre>




#### Testing style: HW04

+ Pass: Change into directory "../HW04".

+ Pass: Check that file "main.cc" exists.

+ Pass: Check that file "date.h" exists.

+ Pass: Check that file "date.cc" exists.

+ Fail: Check Style for main.cc.

<pre>main.cc:13:  Include the directory when naming .h files  [build/include] [4]
main.cc:22:  Tab found; better to use spaces  [whitespace/tab] [1]
main.cc:24:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:30:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:34:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:38:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:42:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:46:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:50:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:58:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:62:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:68:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:71:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:72:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:75:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:76:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:79:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:80:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:86:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:97:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:101:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
main.cc:105:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
Done processing main.cc
Total errors found: 22
</pre>



+ Fail: Check Style for date.h.

<pre>date.h:7:  #ifndef header guard has wrong style, please use: HW04_DATE_H_  [build/header_guard] [5]
date.h:87:  #endif line should be "#endif  // HW04_DATE_H_"  [build/header_guard] [5]
date.h:18:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
date.h:18:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:24:  At least two spaces is best between code and comments  [whitespace/comments] [2]
date.h:24:  Should have a space between // and comment  [whitespace/comments] [4]
date.h:33:  Single-parameter constructors should be marked explicit.  [runtime/explicit] [5]
date.h:34:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:48:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:55:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:67:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:73:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:84:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.h:84:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
date.h:66:  Add #include <string> for string  [build/include_what_you_use] [4]
date.h:87:  Could not find a newline character at the end of the file.  [whitespace/ending_newline] [5]
Done processing date.h
Total errors found: 16
</pre>



+ Fail: Check Style for date.cc.

<pre>date.cc:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
date.cc:11:  Include the directory when naming .h files  [build/include] [4]
date.cc:16:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.cc:17:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:19:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:21:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:39:  Extra space after ( in function call  [whitespace/parens] [4]
date.cc:39:  Extra space before )  [whitespace/parens] [2]
date.cc:40:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.cc:41:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:43:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:45:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:57:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:59:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:60:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:69:  Missing space before {  [whitespace/braces] [5]
date.cc:82:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:84:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:93:  At least two spaces is best between code and comments  [whitespace/comments] [2]
date.cc:93:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:95:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:99:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:103:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:113:  At least two spaces is best between code and comments  [whitespace/comments] [2]
date.cc:113:  Should have a space between // and comment  [whitespace/comments] [4]
date.cc:118:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:122:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:124:  Never use sprintf. Use snprintf instead.  [runtime/printf] [5]
date.cc:134:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
date.cc:144:  Lines should be <= 80 characters long  [whitespace/line_length] [2]
date.cc:160:  Weird number of spaces at line-start.  Are you using a 2-space indent?  [whitespace/indent] [3]
date.cc:160:  Line ends in whitespace.  Consider deleting these extra spaces.  [whitespace/end_of_line] [4]
date.cc:161:  Missing space before {  [whitespace/braces] [5]
date.cc:163:  Extra space after (  [whitespace/parens] [2]
date.cc:163:  Extra space before )  [whitespace/parens] [2]
date.cc:164:  Extra space after (  [whitespace/parens] [2]
date.cc:164:  Extra space before )  [whitespace/parens] [2]
date.cc:168:  Missing space before {  [whitespace/braces] [5]
date.cc:171:  Extra space after (  [whitespace/parens] [2]
date.cc:171:  Extra space before )  [whitespace/parens] [2]
date.cc:172:  Extra space after (  [whitespace/parens] [2]
date.cc:172:  Extra space before )  [whitespace/parens] [2]
date.cc:173:  Extra space after (  [whitespace/parens] [2]
date.cc:173:  Extra space before )  [whitespace/parens] [2]
date.cc:174:  Extra space after (  [whitespace/parens] [2]
date.cc:174:  Extra space before )  [whitespace/parens] [2]
date.cc:175:  Extra space after (  [whitespace/parens] [2]
date.cc:175:  Extra space before )  [whitespace/parens] [2]
date.cc:176:  Extra space after (  [whitespace/parens] [2]
date.cc:176:  Extra space before )  [whitespace/parens] [2]
date.cc:178:  Extra space after (  [whitespace/parens] [2]
date.cc:178:  Extra space before )  [whitespace/parens] [2]
date.cc:179:  Extra space after (  [whitespace/parens] [2]
date.cc:179:  Extra space before )  [whitespace/parens] [2]
Done processing date.cc
Total errors found: 54
</pre>



