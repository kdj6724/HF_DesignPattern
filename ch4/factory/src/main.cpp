// main.cpp
// 2018-04-10
// kdj6724@naver.com
#include <iostream>
#include <memory>
#include "creator.h"

int main(void) {
  std::unique_ptr<PizzaStore> nyStore(new NYPizzaStore());
  std::unique_ptr<PizzaStore> chicagoStore(new ChicagoPizzaStore());

  Pizza* pizza;
  //pizza.reset(nyStore->OrderPizza("cheese"));
  pizza = nyStore->OrderPizza("cheese");
  std::cout << pizza->get_name() << std::endl;
  //pizza.reset(nyStore->OrderPizza("cheese"));
  pizza = nyStore->OrderPizza("cheese");
  std::cout << pizza->get_name() << std::endl;
}
