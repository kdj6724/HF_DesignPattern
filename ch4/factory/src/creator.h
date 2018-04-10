// creator.h
// 2018-04-10
// kdj6724@naver.com
#ifndef FACTORY_PIZZASTORE_
#define FACTORY_PIZZASTORE_
#include <memory>
#include "product.h"
class PizzaStore {
public:
  Pizza* OrderPizza(std::string type);
  virtual std::unique_ptr<Pizza> CreatePizza(std::string type) = 0;
protected:
  std::unique_ptr<Pizza> pizza_;
};
class NYPizzaStore : public PizzaStore {
  virtual std::unique_ptr<Pizza> CreatePizza(std::string type);
};
class ChicagoPizzaStore : public PizzaStore {
  virtual std::unique_ptr<Pizza> CreatePizza(std::string type);
};
#endif

