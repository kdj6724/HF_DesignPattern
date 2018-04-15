// remote_control.h
// 2018-04-12
// kdj6724@naver.com
#ifndef COMMAND_REMOTE_CONTROL_H_
#define COMMAND_REMOTE_CONTROL_H_
#include "command.h"

class RemoteControl {
private:
  Command* on_command_[7];
  Command* off_command_[7];
  Command* undo_command_;
  std::unique_ptr<Command> nocommand_;
  static int total_func_;
public:
  RemoteControl();
  void SetCommand(int slot, Command* onCommand, Command* offCommand);
  void OnButtonWasPushed(int slot);
  void OffButtonWasPushed(int slot);
  void UndoButtonWasPushed();
};
#endif
