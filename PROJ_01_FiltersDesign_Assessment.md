### Assessment for Project Iteration 01 - FiltersDesign (Graded By: Libby Ferland)

#### Total score: _10_ / _15_

Run on November 22, 22:46:19 PM.

+ Pass: Switch to correct commit.




#### System Files and PROJ Directory Structure

+ Pass: Check that directory "/classes/grades/Fall-2018/csci3081/ferla006/csci3081-test-env/grading-scripts/_proj_materials" exists.

+ Pass: Check that directory "PROJ" exists.


#### Set up cpplint

+ Pass: Copy directory "cpplint".



+ Pass: Check that directory "cpplint" exists.


#### Set up Project

+ Pass: Change into directory "PROJ".

+ Pass: Copy directory "Copy Project Files".



+ Pass: Starting with clean project.



+ Pass: Copy directory "Copy Project Files".



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Copy directory "Copy Dependencies".



+ Pass: Setup grading environment.



+ Pass: Copy directory "Copy Tests".



+ Pass: Check that make compiles.




#### Filters Design

+  _2_ / _3_ : Pass: Inheritance and abstraction for filter classes is handled appropriately, including: 
      - Using design patterns.  
    - Virtual functions and delegating implementation to child classes.

    SetupFilter() and CleanupFilter() aren't used appropriately - no convolution filters are being applied in filter.cc.

+  _1_ / _2_ : Pass: Convolution filter inheritance is handled correctly, including: 
    - Managing filters that can be calculated in place vs. filters that need a buffer copy). 
    - Virtual functions to handle child class-dependent steps in applying filters to the buffer.

    Pixel buffer copy is created, but never deleted.


#### Basic Filters

+  _4_ / _5_ : Pass: Basic filters are implemented correctly, including: 
    - Applying filters to pixel buffer. 
    - Math for calculating new pixel values for each filter type.

    What happens when you apply quantize with one bin?


#### Convolution Filters

+  _3_ / _5_ : Pass: Convolution filters are implemented correctly, including: 
    - Kernel calculation, including dynamic sizing and calculated values. 
    - Memory management for kernel matrices. 
    - Applying kernels to pixel buffer and handling edge cases. 
    - Implementation of blur tool.

    Kernels are created but never deleted.  You should not be creating a new kernel every time you call the LookupPaintColor for your blur tool.

#### Total score: _10_ / _15_

