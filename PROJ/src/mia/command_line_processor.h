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

class CommandLineProcessor {
  public:
    CommandLineProcessor();
    ~CommandLineProcessor();
    void ProcessCommandLine(int argc, char** argv);
    void PrintHelpMessage();
  private:
   // int num_args_;
   // char** arg_array_;
   // std::string arg_str_;
    // bool valid_message_;
    int number_commands_;
    CommandExecution execution_;
};

}  // namespace image_tools

#endif  //  MIA_COMMAND_LINE_PROCESSOR_H_
