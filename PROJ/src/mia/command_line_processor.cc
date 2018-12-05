/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#include "mia/command_line_processor.h"

namespace image_tools {

  CommandLineProcessor::CommandLineProcessor() {
    ColorData white(1, 1, 1);
    PixelBuffer *tmp = new PixelBuffer(1280, 720, white);
    editor_ = new ImageEditor(tmp);
  }

  CommandLineProcessor::~CommandLineProcessor() {}

  void CommandLineProcessor::ProcessCommandLine(int argc, std::vector<std::string> argv) {
    int count_commands = 0;
    // for help message, 2 arg input, or any invalid input
    try {
      if(strcmp(argv[0].c_str(), "build/bin/mia") != 0 || argc == 2 || strcmp(argv[1].c_str(), "-h") == 0) {
        throw 1;
        return;
      }
    }
    catch (int e) {
        std::cerr << "error message " << e << ".  Invalid input" << std::endl;
        this->PrintHelpMessage();
        return;
    }
    //  load/save to file
    if(argc == 3){
      try {
        execution_ = new CommandExecution(2); 
        std::string load_file = argv[1];
        std::string save_file = argv[2];
        //  set load command
        LoadCommand* command0 = new LoadCommand(editor_, load_file);
        execution_->SetCommand(count_commands, command0);
        count_commands++;
        //  set save command
        SaveCommand* command1 = new SaveCommand(editor_, save_file);
        execution_->SetCommand(count_commands, command1);
        execution_->SetNumberOfCommands(count_commands+1);
        //  load file then save to other file  
        execution_->ExecuteAllCommands(execution_->GetNumberOfCommands());
        return;
      } catch (...) {
          std::cerr << "error message 2.  Load and/or save did not work, or invalid user input" << std::endl; 
          this->PrintHelpMessage();
          delete this;
          return;
      }
    }
    // any remaining input > 3 args
    try{
      execution_ = new CommandExecution(argc-3);
      std::string load_file = argv[1];
      //  first command will be load file
      LoadCommand* command0 = new LoadCommand(editor_, load_file);
      execution_->SetCommand(count_commands, command0);
     }
     catch (...) {
       std::cerr << "error message 3.  Load did not work, or invalid user input" << std::endl;
       this->PrintHelpMessage();
       delete this;
       return;
     }
     try {
      float next_argF = 0.0;
      int next_argI = 0;
      //  go through command line and check if valid input
      //  (i.e. filter commands, values, and correct order)
      for(int index = 2; index < (argc - 1); index++) {
        //  compare each string with filters
        if(strcmp(argv[index].c_str(), "-blur") == 0) {
          try {
          next_argF = std::stof(argv[index+1]);
          //  blur command goes into execution_
          BlurFilterCommand* command1 = new BlurFilterCommand(editor_, next_argF);
          count_commands++;
          execution_->SetCommand(count_commands, command1);
          } catch (...) {
              throw 4;
              delete this;
              return;
          }  // repeat for each filter
        } else if(strcmp(argv[index].c_str(), "-sharpen") == 0) {
            try {
              next_argF = std::stof(argv[index+1]);
              SharpenFilterCommand* command2 = new SharpenFilterCommand(editor_, next_argF);
              count_commands++;
              execution_->SetCommand(count_commands, command2);
            } catch (...) {
                throw 5;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-red") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              ChannelsFilterCommand* command3 = new ChannelsFilterCommand(editor_, next_argF, 1.0, 1.0);
              count_commands++;
              execution_->SetCommand(count_commands, command3);
            } catch (...) {
                throw 6;
                return;
            } 
        } else if(strcmp(argv[index].c_str(), "-green") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              ChannelsFilterCommand* command4 = new ChannelsFilterCommand(editor_, 1.0, next_argF, 1.0);
              count_commands++;
              execution_->SetCommand(count_commands, command4);
            } catch (...) {
                throw 7;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-blue") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              ChannelsFilterCommand* command5 = new ChannelsFilterCommand(editor_, 1.0, 1.0, next_argF);
              count_commands++;
              execution_->SetCommand(count_commands, command5);
            } catch (...) {
                throw 8;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-quantize") == 0) {
            try { 
              next_argI = std::stoi(argv[index+1], NULL);
              QuantizeFilterCommand* command6 = new QuantizeFilterCommand(editor_, next_argI);
              count_commands++;
              execution_->SetCommand(count_commands, command6);
            } catch (...) {
                throw 9;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-saturate") == 0) {
            try {
std::cerr << "made it to saturate" << std::endl;
              next_argF = std::stof(argv[index+1], NULL);
              SaturateFilterCommand* command7 = new SaturateFilterCommand(editor_, next_argF);
              count_commands++;
              execution_->SetCommand(count_commands, command7);
            } catch (...) {
                throw 10;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-threshold") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              ThresholdFilterCommand* command8 = new ThresholdFilterCommand(editor_, next_argF);
              count_commands++;
              execution_->SetCommand(count_commands, command8);
            } catch (...) {
                throw 11;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-motionblur-n-s") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              MotionBlurFilterCommand* command9 = new MotionBlurFilterCommand(editor_, next_argF, ImageEditor::MBLUR_DIR_N_S);
              count_commands++;
              execution_->SetCommand(count_commands, command9);
            } catch (...) {
                throw 12;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-motionblur-e-w") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              MotionBlurFilterCommand* command10 = new MotionBlurFilterCommand(editor_, next_argF, ImageEditor::MBLUR_DIR_E_W);
              count_commands++;
              execution_->SetCommand(count_commands, command10);
            } catch (...) {
                throw 13;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-motionblur-ne-sw") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              MotionBlurFilterCommand* command11 = new MotionBlurFilterCommand(editor_, next_argF, ImageEditor::MBLUR_DIR_NE_SW);
              count_commands++;
              execution_->SetCommand(count_commands, command11);
            } catch (...) {
                throw 14;
                return;
            }
        } else if(strcmp(argv[index].c_str(), "-motionblur-nw-se") == 0) {
            try {
              next_argF = std::stof(argv[index+1], NULL);
              MotionBlurFilterCommand* command12 = new MotionBlurFilterCommand(editor_, next_argF, ImageEditor::MBLUR_DIR_NW_SE);
              count_commands++;
              execution_->SetCommand(count_commands, command12);
            } catch (...) {
                throw 15;
                return;
            }  //  edgedetect has no scale values, so must check strings around index
        } else if(strcmp(argv[index].c_str(), "-edgedetect") == 0) {
            if((index != (argc-2)) && (index != 2)) {
               if((strcmp(argv[index+1].c_str(), "-blur") != 0 
                 && strcmp(argv[index+1].c_str(), "-sharpen") != 0 
                 && strcmp(argv[index+1].c_str(), "-red") != 0 
                 && strcmp(argv[index+1].c_str(), "-green") != 0 
                 && strcmp(argv[index+1].c_str(), "-blue") != 0 
                 && strcmp(argv[index+1].c_str(), "-quantize") != 0 
                 && strcmp(argv[index+1].c_str(), "-saturate") != 0 
                 && strcmp(argv[index+1].c_str(), "-threshold") != 0 
                 && strcmp(argv[index+1].c_str(), "-motionblur-n-s") != 0 
                 && strcmp(argv[index+1].c_str(), "-motionblur-e-w") != 0 
                 && strcmp(argv[index+1].c_str(), "-motionblur-ne-sw") != 0
                 && strcmp(argv[index+1].c_str(), "-motionblur-nw-se") != 0  
                 && strcmp(argv[index+1].c_str(), "-edgedetect") != 0)
                 ||
                 (strcmp(argv[index-2].c_str(), "-blur") != 0 
                 && strcmp(argv[index-2].c_str(), "-sharpen") != 0
                 && strcmp(argv[index-2].c_str(), "-red") != 0 
                 && strcmp(argv[index-2].c_str(), "-green") != 0 
                 && strcmp(argv[index-2].c_str(), "-blue") != 0 
                 && strcmp(argv[index-2].c_str(), "-quantize") != 0 
                 && strcmp(argv[index-2].c_str(), "-saturate") != 0
                 && strcmp(argv[index-2].c_str(), "-threshold") != 0 
                 && strcmp(argv[index-2].c_str(), "-motionblur-n-s") != 0
                 && strcmp(argv[index-2].c_str(), "-motionblur-e-w") != 0 
                 && strcmp(argv[index-2].c_str(), "-motionblur-ne-sw") != 0
                 && strcmp(argv[index-2].c_str(), "-motionblur-nw-se") != 0  
                 && strcmp(argv[index-1].c_str(), "-edgedetect") != 0)) {
                 throw 17;
                 return;
               }  
            }
            else {  //  -edgedect matches string, put into execution_
              EdgeFilterCommand* command13 = new EdgeFilterCommand(editor_);
              count_commands++;
              execution_->SetCommand(count_commands, command13);
            } 
        } else {  //  for numbers or invalid chars, check if filter strings next to it
            if(strcmp(argv[index-1].c_str(), "-blur") != 0 
               && strcmp(argv[index-1].c_str(), "-sharpen") != 0 
               && strcmp(argv[index-1].c_str(), "-red") != 0 
               && strcmp(argv[index-1].c_str(), "-green") != 0 
               && strcmp(argv[index-1].c_str(), "-blue") != 0 
               && strcmp(argv[index-1].c_str(), "-quantize") != 0 
               && strcmp(argv[index-1].c_str(), "-saturate") != 0
               && strcmp(argv[index-1].c_str(), "-threshold") != 0 
               && strcmp(argv[index-1].c_str(), "-motionblur-n-s") != 0
               && strcmp(argv[index-1].c_str(), "-motionblur-e-w") != 0 
               && strcmp(argv[index-1].c_str(), "-motionblur-ne-sw") != 0
               && strcmp(argv[index-1].c_str(), "-motionblur-nw-se") != 0) {
                 throw 18;
                 return;
            }
        } 
      }
    }
    catch (int x){
      this->ErrorMessage(x);
      this->PrintHelpMessage();
      delete this;
      return;
    }
    try {
      std::string save_file = argv[argc - 1];
      SaveCommand* command14 = new SaveCommand(editor_, save_file);
      count_commands++;
      //  last arg for arg>3 is always save to file command
      execution_->SetCommand(count_commands, command14);
      execution_->SetNumberOfCommands(count_commands+1);  
      //  parsing successful, execute all commands
      execution_->ExecuteAllCommands(execution_->GetNumberOfCommands());
      return;      
    }
    catch (...) {
      std::cerr << "Error message 19.  Could not save file, or incorrect user input"  << std::endl;
      this->PrintHelpMessage();
      delete this;
      return;
    }   
  }

  //  default error message
  void CommandLineProcessor::PrintHelpMessage() {
    std::cerr << "\nusage: mia infile.png [image processing commands ...] outfile.png" << std::endl << std::endl;
    std::cerr << "infile.png:\t\tinput image file in png format" << std::endl;
    std::cerr << "outfile.png:\t\tfilename to use for saving the result" << std::endl << std::endl;
    std::cerr << "image processing commands:" << std::endl;
    std::cerr << "-blur r:\t\tapply a gaussian blur of radius r" << std::endl;
    std::cerr << "-edgedetect:\t\tapply an edge detection filter" << std::endl;
    std::cerr << "-sharpen r:\t\tapply a sharpening filter of radius r" << std::endl;
    std::cerr << "-red s:\t\t\tscale the red channel by factor s" << std::endl;
    std::cerr << "-green s:\t\tscale the green channel by factor s" << std::endl;
    std::cerr << "-blue s:\t\tscale the blue channel by factor s" << std::endl;
    std::cerr << "-quantize n:\t\tquantize each color channel into n bins" << std::endl;
    std::cerr << "-saturate s:\t\tsaturate colors by scale factor s" << std::endl;
    std::cerr << "-threshold c:\t\tthreshold using cutoff value c" << std::endl;
    std::cerr << "-motionblur-n-s r:\t\tnorth-south motion blur with kernel radius r" << std::endl;
    std::cerr << "-motionblur-e-w r:\t\teast-west motion blur with kernel radius r" << std::endl;
    std::cerr << "-motionblur-ne-sw r:\t\t ne-sw motion blur with kernel radius r" << std::endl;
    std::cerr << "-motionblur-nw-se r:\t\t nw-se motion blur with kernel radius r" << std::endl << std::endl;
  }

  //  more specific error message for certain errors
  void CommandLineProcessor::ErrorMessage(int error) {
    switch (error) {
        case 4:
          std::cerr << "Error Message 4.  Blur filter incorrect input, or... " << std::endl;
          break;
        case 5:
          std::cerr << "Error Message 5.  Sharpen filter incorrect input, or... " << std::endl;
          break;
        case 6:
          std::cerr << "Error Message 6.  Red incorrect input, or... " << std::endl;
          break;
        case 7:
          std::cerr << "Error Message 7.  Green incorrect input, or... " << std::endl;
          break;
        case 8:
          std::cerr << "Error Message 8.  Blue incorrect input, or... " << std::endl;
          break;
        case 9:
          std::cerr << "Error Message 9.  Quantize filter incorrect input, or... " << std::endl;
          break;
        case 10:
          std::cerr << "Error Message 10.  Saturate filter incorrect input, or... " << std::endl;
          break;
        case 11:
          std::cerr << "Error Message 11.  Threshold filter incorrect input, or... " << std::endl;
          break;
        case 12:
          std::cerr << "Error Message 12.  MotionBlur-n-s filter incorrect input, or... " << std::endl;
          break;
        case 13:
          std::cerr << "Error Message 13.  MotionBlur-e-w filter incorrect input, or... " << std::endl;
          break;
        case 14:
          std::cerr << "Error Message 14.  MotionBlur-ne-sw filter incorrect input, or... " << std::endl;
          break;
        case 15:
          std::cerr << "Error Message 15.  MotionBlur-nw-se filter incorrect input, or... " << std::endl;
          break;
        case 16:
          std::cerr << "Error Message 16.  EdgeDetect filter incorrect input, or... " << std::endl;
          break;
        case 17:
        case 18:
          std::cerr << "Could not convert arg to float value, or... " << std::endl;
          break;
        default:
          break;
    }
    std::cerr << "Incorrect user input."  << std::endl;
    return; 
  }
}  // namespace image_tools

