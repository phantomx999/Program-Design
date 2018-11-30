### Feedback for Project Iteration 02

Run on November 29, 22:36:54 PM.


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

<pre>cd src/flashphoto; make check-style
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/flashphoto'
==== Checking style is correct ====
/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/cpplint/cpplint.py --root=.. *.cc *.h
flashphoto_app.cc:96:  Should have a space between // and comment  [whitespace/comments] [4]
Done processing flashphoto_app.cc
Done processing main.cc
Done processing flashphoto_app.h
Total errors found: 1
Makefile:156: recipe for target 'check-style' failed
make[1]: *** [check-style] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/flashphoto'
Makefile:4: recipe for target 'check-style' failed
make: *** [check-style] Error 2
</pre>



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src/flashphoto; make -j
make[1]: Entering directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/flashphoto'
==== Auto-Generating Dependencies for main.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/main.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/main.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 SRCDIR/imagetools main.cc
==== Auto-Generating Dependencies for flashphoto_app.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/flashphoto_app.d -MP -MT /class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/flashphoto_app.o -W -Werror -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++14 -c -I.. -I. -I./.. -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/external/MinGfx/build/install/include -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/external/MinGfx/build/install/include/nanovg -isystem/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/external/MinGfx/build/install/include/MinGfx-1.0 SRCDIR/imagetools flashphoto_app.cc
[01m[Kg++:[m[K [01;31m[Kerror: [m[KSRCDIR/imagetools: No such file or directory
[01m[Kg++:[m[K [01;31m[Kerror: [m[KSRCDIR/imagetools: No such file or directory
Makefile:109: recipe for target '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/main.o' failed
make[1]: *** [/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/main.o] Error 1
make[1]: *** Waiting for unfinished jobs....
Makefile:109: recipe for target '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/flashphoto_app.o' failed
make[1]: *** [/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/build/obj/flashphoto/flashphoto_app.o] Error 1
make[1]: Leaving directory '/class/grades/Fall-2018/csci3081/student-repos/PROJ_02_Feedback/repo-stein936/PROJ/src/flashphoto'
Makefile:10: recipe for target 'flashphoto' failed
make: *** [flashphoto] Error 2
</pre>



+ Skip: Check that file "./build/lib/libimagetools.a" exists.

  This test was not run because of an earlier failing test.

+ Skip: Check that file "./build/bin/flashphoto" exists.

  This test was not run because of an earlier failing test.

+ Skip: Check that file "./build/bin/mia" exists.

  This test was not run because of an earlier failing test.


#### Run Student Tests

+ Skip: Check that file "./build/test/gtests" exists.

  This test was not run because of an earlier failing test.

+ Skip: Running Student Tests.

  This test was not run because of an earlier failing test.

