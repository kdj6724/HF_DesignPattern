// main.cpp
// 2018-04-03
// kdj6724@naver.com
#include "child_duck.h"
int main() {
  std::shared_ptr<Duck> mallard(new MallardDuck);
  std::shared_ptr<FlyBehavior> rocket(new FlyRocketPowered);
  mallard->PerformQuack();
  mallard->PerformFly();
  mallard->SetFlyBehavior(rocket);
  mallard->PerformFly();

  return 0;
}
