// child_duck.cpp
// 2018-04-03
// kdj6724@naver.com
#include "child_duck.h"
MallardDuck::MallardDuck() {
  quackBehavior_ = std::shared_ptr<QuackBehavior> (new Sqack);
  flyBehavior_ = std::shared_ptr<FlyBehavior> (new FlyWithWings);
}
void MallardDuck::Display() {
  std::cout << "MallardDuck" << std::endl;
}
