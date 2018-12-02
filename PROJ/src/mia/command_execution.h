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
    CommandExecution();
    ~CommandExecution();
    void NumberOfCommands(int num_commands);
    void SetCommand(int index, ImageEditorCommand* command);
    void CommandExecuted(int index);
  private:
    int num_commands_;
    ImageEditorCommand** m_commands_;
};

}  // namespace image_tools

#endif  // MIA_COMMAND_EXECUTION_H_
