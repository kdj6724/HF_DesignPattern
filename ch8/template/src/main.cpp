// main.cpp
// 2018-04-17
// kdj6724@naver.com
#include <memory>
#include "beverage.h"
int main() {
  std::unique_ptr<CaffeineBeverage> coffee(new Coffee());
  std::unique_ptr<CaffeineBeverage> tea(new Tea());

  coffee->PrepareRecipe();
  tea->PrepareRecipe();

  return 0;
}
