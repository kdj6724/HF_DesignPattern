// main.cpp
// 2018-04-11
// kdj6724@naver.com
#include <memory>
#include "command.h"
#include "remote_control.h"

int main() {
  std::unique_ptr<RemoteControl> remote;
  remote.reset(new RemoteControl);
  //std::unique_ptr<SimpleRemoteControl> remote; 
  //remote.reset(new SimpleRemoteControl());

  std::unique_ptr<Light> livingRoomLight;
  livingRoomLight.reset(new Light());
  std::unique_ptr<LightOnCommand> livingRoomlightOn;
  livingRoomlightOn.reset(new LightOnCommand(livingRoomLight.get()));
  std::unique_ptr<LightOffCommand> livingRoomlightOff;
  livingRoomlightOff.reset(new LightOffCommand(livingRoomLight.get()));

  std::unique_ptr<Light> myRoomLight;
  myRoomLight.reset(new Light());
  std::unique_ptr<LightOnCommand> myRoomlightOn;
  myRoomlightOn.reset(new LightOnCommand(myRoomLight.get()));
  std::unique_ptr<LightOffCommand> myRoomlightOff;
  myRoomlightOff.reset(new LightOffCommand(myRoomLight.get()));

  std::unique_ptr<GarageDoor> door;
  door.reset(new GarageDoor());
  std::unique_ptr<GarageDoorOpenCommand> doorOpen;
  doorOpen.reset(new GarageDoorOpenCommand(door.get()));
  std::unique_ptr<GarageDoorCloseCommand> doorClose;
  doorClose.reset(new GarageDoorCloseCommand(door.get()));

  remote->SetCommand(0, myRoomlightOn.get(), myRoomlightOff.get());
  remote->SetCommand(1, livingRoomlightOn.get(), livingRoomlightOff.get());
  remote->SetCommand(2, doorOpen.get(), doorClose.get());
  remote->OnButtonWasPushed(0);
  remote->OffButtonWasPushed(0);
  remote->OnButtonWasPushed(1);
  remote->OffButtonWasPushed(1);
  remote->OnButtonWasPushed(2);
  remote->OffButtonWasPushed(2);
  remote->OnButtonWasPushed(3);
  remote->OffButtonWasPushed(3);
  remote->OnButtonWasPushed(4);
  remote->OffButtonWasPushed(5);
  return 0;
}
