/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#ifndef MIA_COMMAND_EXECUTION_H_
#define MIA_COMMAND_EXECUTION_H_

#include "mia/mia_app.h"
#include "mia/image_editor_commands.h"

namespace image_tools {

// stores all commands from user input and executes
// all commands once command line has been fully parsed
// and there is no bad user input
class CommandExecution {
  public:
    CommandExecution(int commands);
    CommandExecution();
    ~CommandExecution();
    void SetNumberOfCommands(int num_commands);
    //  put commands in execution_ array to execute once parsed
    void SetCommand(int index, ImageEditorCommand* command);
    void ExecuteSingleCommand(int index);
    //  executes all image editor command line commands 
    void ExecuteAllCommands(int number_commands);
    int GetNumberOfCommands();
    inline ImageEditorCommand** GetMCommands() const {return m_commands_;} 
  private:
    //  stores commands from user input
    ImageEditorCommand** m_commands_;
    int num_commands_;
};

}  // namespace image_tools

#endif  // MIA_COMMAND_EXECUTION_H_















