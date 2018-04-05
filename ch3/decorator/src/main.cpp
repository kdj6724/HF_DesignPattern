// main.cpp
// 2018-04-05
// kdj6724@naver.com
#include <memory>
#include <iostream>
#include "beverage.h"
#include "condiment.h"
int main(void) {
  std::unique_ptr<Beverage> beverage(new Espresso);
  std::cout << beverage->GetDescription() << " $" << beverage->Cost() << std::endl;

  Beverage* beverage2 = new DarkRoast;
  beverage2 = new Mocha(beverage2);
  beverage2 = new Mocha(beverage2);
  beverage2 = new Whip(beverage2);
  std::cout << beverage2->GetDescription() << " $" << beverage2->Cost() << std::endl;

#if 0 // help
  std::unique_ptr<Beverage> beverage2(new DarkRoast);
  beverage2 = std::unique_ptr<Beverage> (new Mocha(beverage2.get()));
  beverage2 = beverage2.reset(new Mocha(beverage2.get()));
  beverage2.reset(new Mocha(beverage2.get()));
  beverage2.reset(new Whip(beverage2.get()));
  std::cout << beverage2->GetDescription() << " $" << beverage2->Cost() << std::endl;
#endif
  return 0;
}
