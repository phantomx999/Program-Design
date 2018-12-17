Coding Style  {#coding_style_dev}
===========

Google Style was used in this project as the conventional coding style as described below:

####Header Guards

Headers guards are defined in the directory they are located in and are uppercase.  
They also have a comment indicating the directory at the endif section of the header guard.

Examples:
 
 \#ifndef IMAGETOOLS_IMAGE_TOOLS_MATH_H_
 
 \#ifndef IMAGETOOLS_FILTER_CONVOLUTION_BLUR_H_
 
 \#endif  // MIA_COMMAND_EXECUTION_H_

####Include statements

  Include preprocessing directives with their directory location as well
 
 Examples:
 
  \#include "imagetools/float_matrix.h"
  
  \#include "mia/image_editor_commands.h"

#####Namespace
  
  The entire project, including all code, is under the image_tools namespace
  
######Classes, Constructors, Destructors

  These all use uppercase at the beginning of all words, and had no spaces
  or underscores
  
  Examples:
  
  CommandExecution  //  Class
  
  ConvolutionFilterBlur();  // Constructor
  
######Variables, Data Members
  These are all lowercase and have underscores between words.  Only private data members
  have an underscore as the last character in the name, and sometimes private data members
  use m_ to signify private.  
  
  Examples:
  
  num_commands_  // private data member
  
  m_commands_  // private data member
  
  number_commands  // public of local variable
  
#####Comments

Comments above classes and methods describe the "intent" of the class and methods
describing what they do.  These comments are usually found in .h files.  
More specific comments describing the functionality and details of algorithms 
are found in .cc files, which are usually used for more complicated sections of code.  

#####Documentation

Files are named in lowercase syntax with underscores.  An exception to this are 
makefiles, which are capitalized for first letter.  

  Examples:
  
  tool_spray_can.cc
  
  pixel_buffer.h
  
  Makefile
  
#####Miscellaneous

Note:  For header .h file, simply create prototypes and definitions.  For .cc files, apply
implementation for class methods.  There are exceptions to this
(i.e. using inline for getters and setters, using constructors, and implementing simple
functions in h files).
  

  
  