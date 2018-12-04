/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#include "mia/command_execution.h"

namespace image_tools {

CommandExecution::CommandExecution(int commands) {
  m_commands_ = new ImageEditorCommand*[commands];
  num_commands_ = 0;
}

CommandExecution::CommandExecution() {
  num_commands_ = 0;
}

CommandExecution::~CommandExecution() {}

CommandExecution::NumberOfCommands(int num_commands) {
  num_commands_ = num_commands;
/*
  m_commands_ = new ImageEditorCommands*[num_commands_];
  for(int i = 0; i < num_commands_; i++) {
    m_commands_[i] = new ImageEditorCommand;
  }
*/
}


CommandExecution::SetCommand(int index, ImageEditorCommand* command) {
  m_commands[index] = command;
}

CommandExecution::ExecuteSingleCommand(int index){
  m_commands_[index]->Execute;
}

CommandExecution::ExecuteAllCommands(int number_commands) {
  for(int i=0; i<number_commands; i++){
    m_commands_[number_commands]->Execute():
  }
}

}  // namespace image_tools













