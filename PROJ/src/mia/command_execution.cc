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

void CommandExecution::SetNumberOfCommands(int num_commands) {
  num_commands_ = num_commands;
/*
  m_commands_ = new ImageEditorCommands*[num_commands_];
  for(int i = 0; i < num_commands_; i++) {
    m_commands_[i] = new ImageEditorCommand;
  }
*/
}


void CommandExecution::SetCommand(int index, ImageEditorCommand* command) {
  m_commands_[index] = command;
}

void CommandExecution::ExecuteSingleCommand(int index){
  m_commands_[index]->Execute();
}

void CommandExecution::ExecuteAllCommands(int number_commands) {
  for(int i=0; i<number_commands; i++){
    // std::cerr << "made it heresdfbadfgsgvfsdzsbf" << std::endl; 
    m_commands_[i]->Execute();
    // std::cerr << "did i make it here????" << std::endl; 
  }
}

int CommandExecution::GetNumberOfCommands() {
  return num_commands_;
}

}  // namespace image_tools













