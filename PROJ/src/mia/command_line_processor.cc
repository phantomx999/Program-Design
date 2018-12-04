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
        std::string load_file = argv[1];
        std::string save_file = argv[2];
        LoadCommand command0(editor_, load_file);
        execution_.SetCommand(0, command0);
        SaveCommand command1(editor_, save_file);
        execution_.SetCommand(1, command1);
        execution_.NumberOfCommands(2);  
        execution_.ExecuteAllCommands(execution_.num_commands_);
        delete;
        return;
      } catch {
          std::cerr << "error message 2.  Load and/or save did not work, or invalid user input" << std::endl; 
          this->PrintHelpMessage();
          return;
      }
    }
    try{
      int count_commands;
      std::string load_file = argv[1];
     // std::string save_file = argv[argc - 1];
      LoadCommand command0(editor_, load_file);
      execution_.SetCommand(count_commands, command0);
     }
     catch {
       std::cerr << "error message 3.  Load did not work, or invalid user input" << std::endl;
       this->PrintHelpMessage();
       return;
     }
     try {
      float next_argF = 0.0;
      int next_argI = 0;
      for(index = 2; index < argc - 1; index++){
        if(strcmp(argv[index], "-blur") == 0) {
          if(next_argF = std::stof(argv[index+1], NULL)) {
           
          } else {
              throw 4;
              return;
          }
        } else if(strcmp(argv[index], "-sharpen") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-red") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            } 
        } else if(strcmp(argv[index, "-green") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-blue") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-quantize") == 0) {
            if(next_argI = std::stoi(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-saturate") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-threshold") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-motionblur-n-s") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-motionblur-e-w") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-motionblur-ne-sw") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-motionblur-nw-se") == 0) {
            if(next_argF = std::stof(argv[index+1], NULL)) {

            } else {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index], "-edgedetect") == 0) {
           
        } else if(next_argF == std::stof(argv[index], NULL) || next_argI == std::stof(argv[index], NULL)) {
            if(strcmp(argv[index-1], "-blur") == 0 || strcmp(argv[index-1], "-sharpen") == 0 || 
               strcmp(argv[index-1], "-red") == 0) || strcmp(argv[index-1], "-red") == 0 || 
               strcmp(argv[index-1], "-green") == 0 || strcmp(argv[index-1], "-blue") == 0 ||
               strcmp(argv[index-1], "-quantize") == 0 || strcmp(argv[index-1], "-saturate") == 0
               || strcmp(argv[index-1], "-threshold") == 0 || strcmp(argv[index-1], "-motionblur-n-s") == 0
               || strcmp(argv[index-1], "-motionblur-e-w") == 0 || strcmp(argv[index-1], "-motionblur-ne-sw") == 0
               || strcmp(argv[index-1], "-motionblur-nw-se") == 0) {

            } else {
                throw 5;
                return;
            }
        } else {
            throw 5;
            return;
        }
      }
    }
    catch (int x){
      if(x == 3) {
        std::cerr << "Error Message 3.  Could not convert arg to float value, or incorrect user input" << std::endl;
      }
      this->PrintHelpMessage();
      return;
    }
    try {
      std::string save_file = argv[argc - 1];
      SaveCommand command1(editor_, save_file);
      execution_.SetCommand(count_commands, command1);
      execution_.NumberOfCommand(execution_.num_commands);  
      execution_.ExecuteAllCommands(execution_.num_commands_);
      delete;
      return;      
    }
    catch {

    }
    
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

