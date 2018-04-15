// remote_control.cpp
// 2018-04-12
// kdj6724@naver.com
#include <iostream>
#include "remote_control.h"

int RemoteControl::total_func_ = 7;
RemoteControl::RemoteControl() {
  nocommand_.reset(new NoCommand);
  for (int i=0; i<total_func_; i++) {
    SetCommand(i, nocommand_.get(), nocommand_.get());
  }
}
void RemoteControl::SetCommand(int slot, Command* onCommand, Command* offCommand) {
  on_command_[slot] = onCommand;
  off_command_[slot] = offCommand;
}
void RemoteControl::OnButtonWasPushed(int slot) {
  on_command_[slot]->Execute();
  undo_command_ = on_command_[slot];
}
void RemoteControl::OffButtonWasPushed(int slot) {
  off_command_[slot]->Execute();
  undo_command_ = off_command_[slot];
}
void RemoteControl::UndoButtonWasPushed() {
  undo_command_->Undo();
}
