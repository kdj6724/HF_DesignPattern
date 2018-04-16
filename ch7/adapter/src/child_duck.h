// child_duck.h
// 2018-04-03
// kdj6724@naver.com
#ifndef DUCK_CHILD_DUCK_H_
#define DUCK_CHILD_DUCK_H_
#include <iostream>
#include "duck.h"
class FlyWithWings : public FlyBehavior {
public:
  virtual void Fly() {
    std::cout << "fly with wings" << std::endl;
  }
};
class FlyNoWay : public FlyBehavior {
public:
  virtual void Fly() {
    std::cout << "can not fly" << std::endl;
  }
};
class FlyRocketPowered : public FlyBehavior {
public:
  virtual void Fly() {
    std::cout << "rocked power" << std::endl; 
  }
};
class Sqack : public QuackBehavior {
public:
  virtual void Quack() {
    std::cout << "sqack" << std::endl;
  }
};
class MuteQuack : public QuackBehavior {
public:
  virtual void Quack() {
    std::cout << "mute" << std::endl;
  }
};
class MallardDuck : public Duck {
public:
  MallardDuck();
  virtual void Display();
};
#endif
