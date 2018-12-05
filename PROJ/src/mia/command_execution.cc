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
}


void CommandExecution::SetCommand(int index, ImageEditorCommand* command) {
  m_commands_[index] = command;
}

void CommandExecution::ExecuteSingleCommand(int index){
  m_commands_[index]->Execute();
}

void CommandExecution::ExecuteAllCommands(int number_commands) {
  for(int i=0; i<number_commands; i++){
    m_commands_[i]->Execute();
  }
}

int CommandExecution::GetNumberOfCommands() {
  return num_commands_;
}

}  // namespace image_tools













