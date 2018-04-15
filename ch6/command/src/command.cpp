// command.cpp
// 2018-04-11
// kdj6724@naver.com
#include <iostream>
#include "command.h"
void NoCommand::Execute() {
  std::cout << "No command" << std::endl;
}
void NoCommand::Undo() {
  std::cout << "No command" << std::endl;
}
LightOnCommand::LightOnCommand(Light* light) {
  light_ = light;
}
void LightOnCommand::Execute() {
  light_->On();
}
void LightOnCommand::Undo() {
  light_->Off();
}
LightOffCommand::LightOffCommand(Light* light) {
  light_ = light;
}
void LightOffCommand::Execute() {
  light_->Off();
}
void LightOffCommand::Undo() {
  light_->On();
}
GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* door) {
  door_ = door;
}
void GarageDoorOpenCommand::Execute() {
  door_->Up();
  door_->LightOn();
}
void GarageDoorOpenCommand::Undo() {
  door_->Down();
  door_->LightOff();
}
GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor* door) {
  door_ = door;
}
void GarageDoorCloseCommand::Execute() {
  door_->Down();
  door_->LightOff();
}
void GarageDoorCloseCommand::Undo() {
  door_->Up();
  door_->LightOn();
}
StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* stereo) {
  stereo_ = stereo;
}
void StereoOnWithCDCommand::Execute() {
  stereo_->On();
  stereo_->SetCd();
  stereo_->SetVolume();
}
void StereoOnWithCDCommand::Undo() {
  stereo_->Off();
}
StereoOffWithCDCommand::StereoOffWithCDCommand(Stereo* stereo) {
  stereo_ = stereo;
}
void StereoOffWithCDCommand::Execute() {
  stereo_->Off();
}
void StereoOffWithCDCommand::Undo() {
  stereo_->On();
}
void SimpleRemoteControl::SetCommand(Command* command) {
  slot_ = command;
}
void SimpleRemoteControl::ButtonWasPressed() {
  slot_->Execute();
}
void SimpleRemoteControl::UndoButtonWasPressed() {
  slot_->Undo();
}

void Light::On() {
  std::cout << "Light on" << std::endl;
}
void Light::Off() {
  std::cout << "Light off" << std::endl;
}
void GarageDoor::Up() {
  std::cout << "GarageDoor Up" << std::endl;
}
void GarageDoor::Down() {
  std::cout << "GarageDoor Down" << std::endl;
}
void GarageDoor::Stop() {
  std::cout << "GarageDoor Stop" << std::endl;
}
void GarageDoor::LightOn() {
  std::cout << "GarageDoor Light on" << std::endl;
}
void GarageDoor::LightOff() {
  std::cout << "GarageDoor Light off" << std::endl;
}
void Stereo::On() {
  std::cout << "Stereo on" << std::endl;
}
void Stereo::Off() {
  std::cout << "Stereo off" << std::endl;
}
void Stereo::SetCd() {
  std::cout << "Stereo set CD" << std::endl;
}
void Stereo::SetDvd() {
  std::cout << "Stereo set DVD" << std::endl;
}
void Stereo::SetRadio() {
  std::cout << "Stereo set Radio" << std::endl;
}
void Stereo::SetVolume() {
  std::cout << "Stereo set volume" << std::endl;
}
