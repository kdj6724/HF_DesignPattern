// creator.cpp
// 2018-04-10
// kdj6724@naver.com
#include "creator.h"
Pizza* PizzaStore::OrderPizza(std::string type) {
  pizza_ = CreatePizza(type);
  pizza_->Prepare();
  pizza_->Bake();
  pizza_->Cut();
  pizza_->Box();
  return pizza_.get();
}
std::unique_ptr<Pizza> NYPizzaStore::CreatePizza(std::string type) {
  if (type == "cheese") {
    return std::unique_ptr<Pizza> (new NYStyleCheesePizza());
  } else if (type == "veggie") {
    return std::unique_ptr<Pizza> (new NYStyleVegiePizza());
  } else if (type == "clam") {
    return std::unique_ptr<Pizza> (new NYStyleClamPizza());
  } else if (type == "pepperoni") {
    return std::unique_ptr<Pizza> (new NYStylePepperoniPizza());
  } else {
    return NULL;
  }
}
std::unique_ptr<Pizza> ChicagoPizzaStore::CreatePizza(std::string type) {
  if (type == "cheese") {
    return std::unique_ptr<Pizza> (new ChicagoStyleCheesePizza());
  } else if (type == "veggie") {
    return std::unique_ptr<Pizza> (new ChicagoStyleVegiePizza());
  } else if (type == "clam") {
    return std::unique_ptr<Pizza> (new ChicagoStyleClamPizza());
  } else if (type == "pepperoni") {
    return std::unique_ptr<Pizza> (new ChicagoStylePepperoniPizza());
  } else {
    return NULL;
  }
}

