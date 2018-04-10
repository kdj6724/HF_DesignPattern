// product.h
// 2018-04-10
// kdj6724@naver.com
#ifndef FACTORY_PRODUCT_H
#define FACTORY_PRODUCT_H
#include <string>
#include <vector>
class Pizza {
public:
  std::string name_;
  std::string dough_;
  std::string souce_;
  virtual std::string get_name() { return name_; }
  virtual void Prepare();
  virtual void Bake();
  virtual void Cut();
  virtual void Box();
};
class NYStyleCheesePizza : public Pizza {
public:
  NYStyleCheesePizza();
};
class NYStyleVegiePizza : public Pizza {
public:
  NYStyleVegiePizza();
};
class NYStyleClamPizza : public Pizza {
public:
  NYStyleClamPizza();
};
class NYStylePepperoniPizza : public Pizza {
public:
  NYStylePepperoniPizza();
};

class ChicagoStyleCheesePizza : public Pizza {
public:
  ChicagoStyleCheesePizza();
};
class ChicagoStyleVegiePizza : public Pizza {
public:
  ChicagoStyleVegiePizza();
};
class ChicagoStyleClamPizza : public Pizza {
public:
  ChicagoStyleClamPizza();
};
class ChicagoStylePepperoniPizza : public Pizza {
public:
  ChicagoStylePepperoniPizza();
  virtual void Cut();
};
#endif
