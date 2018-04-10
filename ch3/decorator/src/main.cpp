// main.cpp
// 2018-04-05
// kdj6724@naver.com
#include <memory>
#include <iostream>
#include "beverage.h"
#include "condiment.h"
int main(void) {
#if 1
  std::unique_ptr<Beverage> beverage2(new DarkRoast);
  std::unique_ptr<Beverage> beverage3(new Mocha(beverage2.get()));
  std::unique_ptr<Beverage> beverage4(new Mocha(beverage3.get()));
  std::unique_ptr<Beverage> beverage5(new Whip(beverage4.get()));
  std::cout << beverage5->GetDescription() << " $" << beverage5->Cost() << std::endl;
#else
  //Beverage* beverage2 = new DarkRoast;
  std::unique_ptr<Beverage> beverage2;
  beverage2.reset(new DarkRoast);
  beverage2 = std::unique_ptr<Beverage> (new Mocha(beverage2.get()));
  beverage2 = std::unique_ptr<Beverage> (new Mocha(beverage2.get()));
  beverage2 = std::unique_ptr<Beverage> (new Whip(beverage2.get()));
  std::cout << beverage2->GetDescription() << " $" << beverage2->Cost() << std::endl;
#endif
  return 0;
}
