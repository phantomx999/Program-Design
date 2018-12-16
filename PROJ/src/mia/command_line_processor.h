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

/** @brief  Parses Command Line, prints error message
  or stores commands in execution_ and then
  executes all commands if successful */
class CommandLineProcessor {
  public:
    CommandLineProcessor();
    ~CommandLineProcessor();

    /** @brief passes number of arguments and argument strings
      from command line to be processed */
    void ProcessCommandLine(int argc, std::vector<std::string> argv);

    /** @brief Used for invalid command line user input */
    void PrintHelpMessage();

    //  used only for non gtest purposes, otherwise default to PrintHelpMessage()
    void ErrorMessage(int error);
    inline CommandExecution* GetExecutor() {return execution_;};
  private:
    /** @brief  passed for each specific image editor command */
    ImageEditor* editor_;
    /** @brief  stores commands and executes commans if successful input */
    CommandExecution* execution_;
};

}  // namespace image_tools

#endif  //  MIA_COMMAND_LINE_PROCESSOR_H_
