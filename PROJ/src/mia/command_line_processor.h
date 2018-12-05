/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#ifndef MIA_COMMAND_LINE_PROCESSOR_H_
#define MIA_COMMAND_LINE_PROCESSOR_H_

#include "mia/mia_app.h"
#include "mia/image_editor_commands.h"
#include "mia/command_execution.h"

namespace image_tools {

//  parses Command Line, prints error message
//  or stores commands in execution_ and then
//  executes all commands if successful
class CommandLineProcessor {
  public:
    CommandLineProcessor();
    ~CommandLineProcessor();
    void ProcessCommandLine(int argc, std::vector<std::string> argv);
    void PrintHelpMessage();
    //  used only for non gtest purposes, otherwise default to PrintHelpMessage()
    void ErrorMessage(int error);
  private:
    //  passed for each specific image editor command
    ImageEditor* editor_;
    //  stores commands and executes commans if successful input
    CommandExecution* execution_;
};

}  // namespace image_tools

#endif  //  MIA_COMMAND_LINE_PROCESSOR_H_
