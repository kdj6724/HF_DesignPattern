// condiment.h
// 2018-04-05
// kdj6724@naver.com
#ifndef DECORATOR_CONDIMENT_H_
#define DECORATOR_CONDIMENT_H_
#include <string>
#include "beverage.h"
class CondimentDecorator : public Beverage {
public:
  virtual std::string GetDescription() = 0;
};
class Mocha : public CondimentDecorator {
private:
  Beverage* beverage_;
public:
  Mocha(Beverage* beverage);
  virtual std::string GetDescription();
  virtual double Cost();
};
class Milk : public CondimentDecorator {
private:
  Beverage* beverage_;
public:
  Milk(Beverage* beverage);
  virtual std::string GetDescription();
  virtual double Cost();
};
class Soy : public CondimentDecorator {
private:
  Beverage* beverage_;
public:
  Soy(Beverage* beverage);
  virtual std::string GetDescription();
  virtual double Cost();
};
class Whip : public CondimentDecorator {
private:
  Beverage* beverage_;
public:
  Whip(Beverage* beverage);
  virtual std::string GetDescription();
  virtual double Cost();
};
#endif
