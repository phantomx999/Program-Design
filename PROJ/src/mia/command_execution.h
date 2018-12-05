/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#ifndef MIA_COMMAND_EXECUTION_H_
#define MIA_COMMAND_EXECUTION_H_

#include "mia/mia_app.h"
#include "mia/image_editor_commands.h"

namespace image_tools {

class CommandExecution {
  public:
    CommandExecution(int commands);
    CommandExecution();
    ~CommandExecution();
    void SetNumberOfCommands(int num_commands);
    void SetCommand(int index, ImageEditorCommand* command);
    void ExecuteSingleCommand(int index);
    void ExecuteAllCommands(int number_commands);
    int GetNumberOfCommands();
    //ImageEditorCommand** GetCommands();
  private:
    ImageEditorCommand** m_commands_;
    int num_commands_;
};

}  // namespace image_tools

#endif  // MIA_COMMAND_EXECUTION_H_















