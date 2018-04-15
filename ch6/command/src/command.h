// command.h
// 2018-04-11
// kdj6724@naver.com
#ifndef COMMAND_COMMAND_H_
#define COMMAND_COMMAND_H_
class Light;
class GarageDoor;
class Stereo;
// command
class Command {
public:
  virtual void Execute() = 0;
  virtual void Undo() = 0;
};
// concrete command
class NoCommand : public Command {
public:
  virtual void Execute();
  virtual void Undo();
};

class LightOnCommand : public Command {
public:
  LightOnCommand(Light* light);
  virtual void Execute();
  virtual void Undo();
private:
  Light* light_;
};
class LightOffCommand : public Command {
public:
  LightOffCommand(Light* light);
  virtual void Execute();
  virtual void Undo();
private:
  Light* light_;
};
class GarageDoorOpenCommand : public Command {
public:
  GarageDoorOpenCommand(GarageDoor* door);
  virtual void Execute();
  virtual void Undo();
private:
  GarageDoor* door_;
};
class GarageDoorCloseCommand : public Command {
public:
  GarageDoorCloseCommand(GarageDoor* door);
  virtual void Execute();
  virtual void Undo();
private:
  GarageDoor* door_;
};
class StereoOnWithCDCommand : public Command {
public:
  StereoOnWithCDCommand(Stereo* stereo);
  virtual void Execute();
  virtual void Undo();
private:
  Stereo* stereo_;
};
class StereoOffWithCDCommand : public Command {
public:
  StereoOffWithCDCommand(Stereo* stereo);
  virtual void Execute();
  virtual void Undo();
private:
  Stereo* stereo_;
};
// invoker
class SimpleRemoteControl {
private:
  Command* slot_;
public:
  void SetCommand(Command* command);
  void ButtonWasPressed();
  void UndoButtonWasPressed();
};
// receiver
class Light {
public:
  void On();
  void Off();
};
class GarageDoor {
public:
  void Up();
  void Down();
  void Stop();
  void LightOn();
  void LightOff();
};
class Stereo {
public:
  void On();
  void Off();
  void SetCd();
  void SetDvd();
  void SetRadio();
  void SetVolume();
};
#endif
