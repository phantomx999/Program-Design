## Lab 5 - Google Style Guide Compliance

### Google Style Compliance: Linting

https://google.github.io/styleguide/cppguide.html

A style guide sets guidelines for how files, classes, functions, and variables
should be named. It also sets guidelines for white space, line lengths, and
commenting within the code. By standardizing naming conventions and layout, it
is easier to integrate code from various programmers in a cohesive way that
is readable and understandable by everyone. Going forward, all code submitted
for this course must be compliant with the Google Style Guide. As stated before,
not everyone is going to agree on every style rule aesthetically, but it is 
important to have a standard that everyone programs to.

The code we have provided you in prior labs is _somewhat_ style-compliant. There 
are still a few compliance errors in the various files for you to find and fix.

Specifically, we would like you to ensure *at a minimum* style compliance for
the following files:

 * HW01
   - main.cpp
   - point2.h
   - point2.cc/.cpp (whatever you called it)
 * HW02
   - *.h
   - *.cpp
 * HW03
   - *.h
   - *.cc
 * HW04
   - main.cc
   - date.h
   - date.cc (this should be the 'correct' version)

To fix the errors, you will first need to identify them with _cpplint_. The
_cpplint.py_ file is available on CSE labs machines. To run the linter on your
code, navigate to the each HW (e.g., HW/HW01/) directory and do the following:

```
cpplint.py main.cpp
cpplint.py point2.cc
cpplint.py --root=.. point2.h
```

OR

```
cpplint.py --root=.. *.h
cpplint.py *.cc
```

Invoking the linter on the headers and source files separately is not required,
but when you first start, if there are a lot of errors then you won't have to
scroll back up through screenfulls of text to see where they are. For all-in-one
do:

```
cpplint.py --root=. *.h *.cc
```

**_What does "--root=." mean?_** Header guards must always be in place for header 
files. During compilation, particularly when you have circular references in your 
code, a header file might be included multiple times from multiple header files. 
If you have already included the header during compilation, you don't want the 
compiler to include it again, thus you are _guarding_ against including it multiple 
times (possibly infinite if circular references exist). Google Style states that 
header guards should use the full path to that file 
(e.g. `HOME_WENDT_3081_F18_REPO_HW_HW01_POINT2_H_`), but for this class we are 
going to include only from the point of the _HW_ directory. The _--root_ flag 
allows us to specify where in the path to start, thus the header guard for _point2.h_ 
should be `HW01_POINT2_H`.

When you run the linter, you should get a report of each error that includes the
file, line number, and a short description of the problem. If you need guidance
in what is expected, you can consult the Style Guide:
https://google.github.io/styleguide/cppguide.html. Notice that the errors range
from the placement of braces to the use of the keyword `explicit` to commenting.

If you want to run the linter on your local copy on your personal machine, you
will need to download cpplint from the repository:
https://github.com/google/styleguide. Note that this will not be supported by
the instructional staff, nor is it sufficient. Your code must pass the linter on 
a CSELabs machine. If you are working on your own machine, it
is recommended that you install with the python installation tool _pip3_, which
might need to be installed (but probably not if you have python3 -- type `pip3
--version` to verify), then install cpplint with `pip3 install cpplint`.

As part of assessment, all files LISTED ABOVE will be run through cpplint. Make 
sure your code has 0 errors when you submit.
