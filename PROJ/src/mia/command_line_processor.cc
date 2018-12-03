/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#include "mia/command_line_processor.h"

namespace image_tools {

  CommandLineProcessor::CommandLineProcessor() {
    ColorData white(1, 1, 1);
    PixelBuffer *tmp = new PixelBuffer(1280, 720, white); 
    number_commands_ = 0;
    editor_ = new ImageEditor(tmp);
    delete tmp;
  }

  CommandLineProcessor::~CommandLineProcessor() {}

  void CommandLineProcessor::ProcessCommandLine(int argc, char** argv) {
    try {
      if(strcmp(argv[0], "./build/bin/mia") != 0 || argc == 2 || strcmp(argv[1], "-h") == 0) {
        throw 1;
        return;
      }
    }
    catch (int e) {
        std::cerr << "error message: " << e << std::endl;
        this->PrintHelpMessage();
        return;
    }
    if(argc == 3){
      try {
        execution_ = new CommandExecution(2);
        // execution_.NumberOfCommands(2);
        editor LoadCommand command0(image_editor_, argv[1]);
        execution_.m_commands_->setCommand(0, command0);
        SaveCommand command1(image_editor_, argv[2]);
        execution_.SetCommand(0, execution_.m_commands
        std::string file_in = command0;
        std::string file_out 
        
      }
      catch {
        this->PrintHelpMessage();
        return;
      }
    }
/*  
    arg_array_ = new char*[num_args];
    for(int i = 0; i<num_args; i++) {
      arg_array[i] = new char;
    }
*/

    
  }

  void CommandLineProcessor::PrintHelpMessage() {
    std::endl;
    std::cerr << "usage: mia infile.png [image processing commands ...] outfile.png" << std::endl << std::endl;
    std::cerr << "infile.png:\t\tinput image file in png format" << std::endl;
    std::cerr << "outfile.png:\t\tfilename to use for saving the result" << std::endl << std::endl;
    std::cerr << "image processing commands:" << std::endl;
    std::cerr << "-blur r:\t\tapply a gaussian blur of radius r" << std::endl;
    std::cerr << "-edgedetect:\t\tapply an edge detection filter" << std::endl;
    std::cerr << "-sharpen r:\t\tapply a sharpening filter of radius r" << std::endl;
    std::cerr << "-red s:\t\tscale the red channel by factor s" << std::endl;
    std::cerr << "-green s:\t\t scale the green channel by factor s" << std::endl;
    std::cerr << "-blue s:\t\tscale the blue channel by factor s" << std::endl;
    std::cerr << "-quantize n:\t\tquantize each color channel into n bins" << std::endl;
    std::cerr << "-saturate s:\t\tsaturate colors by scale factor s" << std::endl;
    std::cerr << "-threshold c:\t\tthreshold using cutoff value c" << std::endl;
    std::cerr << "-motionblur-n-s r:\t\tnorth-south motion blur with kernel radius r" << std::endl;
    std::cerr << "-motionblur-e-w r:\t\teast-west motion blur with kernel radius r" << std::endl;
    std::cerr << "-motionblur-ne-sw r: ne-sw motion blur with kernel radius r" << std::endl;
    std::cerr << "-motionblur-nw-se r: nw-se motion blur with kernel radius r" << std::endl;
    std:endl;
  }

}  // namespace image_tools

