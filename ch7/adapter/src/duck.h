// duck.h
// 2018-04-03
// kdj6724@naver.com

#ifndef DUCK_H_
#define DUCK_H_
#include <memory>
#include "turkey.h"
class FlyBehavior {
public:
  virtual void Fly() = 0;
};
class QuackBehavior {
public:
  virtual void Quack() = 0;
};
class Duck {
public:
  virtual void Swim();
  virtual void Display() = 0;
  void PerformQuack();
  void PerformFly();
  void SetFlyBehavior(std::shared_ptr<FlyBehavior> fb);
  void SetQuackBehavior(std::shared_ptr<QuackBehavior> qb);
protected:
  std::shared_ptr<FlyBehavior> flyBehavior_;
  std::shared_ptr<QuackBehavior> quackBehavior_;
};
class TurkeyAdapter : public Duck {
public:
  Turkey* turkey_;
  TurkeyAdapter(Turkey* turkey);
  void Quack();
  void Fly();
};
#endif
