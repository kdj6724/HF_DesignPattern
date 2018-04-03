// duck.cpp
// 2018-04-03
// kdj6724@naver.com
#include <iostream>
#include "duck.h"

void Duck::Swim() {
  std::cout << "swimming" << std::endl;
}
void Duck::PerformQuack() {
  quackBehavior_->Quack();
}
void Duck::PerformFly() {
  flyBehavior_->Fly();
}
void Duck::SetFlyBehavior(std::shared_ptr<FlyBehavior> fb) {
  flyBehavior_ = fb;
}
void Duck::SetQuackBehavior(std::shared_ptr<QuackBehavior> qb) {
  quackBehavior_ = qb;
}
