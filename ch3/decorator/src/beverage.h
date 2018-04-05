// beverage.h
// 2018-04-05
// kdj6724@naver.com
#ifndef DECORATOR_BEVERAGE_H_
#define DECORATOR_BEVERAGE_H_
#include <string>
class Beverage {
protected:
  std::string description_;
public:
  virtual double Cost() = 0;
  virtual std::string GetDescription();
};
class Espresso : public Beverage {
public:
  Espresso();
  virtual double Cost();
};
class HouseBlend : public Beverage {
public:
  HouseBlend();
  virtual double Cost();
};
class DarkRoast : public Beverage {
public:
  DarkRoast();
  virtual double Cost();
};
class Decaf : public Beverage {
public:
  Decaf();
  virtual double Cost();
};
#endif
