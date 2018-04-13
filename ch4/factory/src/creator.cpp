// creator.cpp
// 2018-04-10
// kdj6724@naver.com
#include "creator.h"
Pizza* PizzaStore::OrderPizza(std::string type) {
  CreatePizza(type);
  pizza_->Prepare();
  pizza_->Bake();
  pizza_->Cut();
  pizza_->Box();
  return pizza_.get();
}
Pizza* NYPizzaStore::CreatePizza(std::string type) {
  if (type == "cheese") {
    pizza_.reset(new NYStyleCheesePizza());
  } else if (type == "veggie") {
    pizza_.reset(new NYStyleVegiePizza());
  } else if (type == "clam") {
    pizza_.reset(new NYStyleClamPizza());
  } else if (type == "pepperoni") {
    pizza_.reset(new NYStylePepperoniPizza());
  } else {
    return nullptr;
  }
  return pizza_.get();
}
Pizza* ChicagoPizzaStore::CreatePizza(std::string type) {
  if (type == "cheese") {
    pizza_.reset(new ChicagoStyleCheesePizza());
  } else if (type == "veggie") {
    pizza_.reset(new ChicagoStyleVegiePizza());
  } else if (type == "clam") {
    pizza_.reset(new ChicagoStyleClamPizza());
  } else if (type == "pepperoni") {
    pizza_.reset(new ChicagoStylePepperoniPizza());
  } else {
    return nullptr;
  }
  return pizza_.get();
}

