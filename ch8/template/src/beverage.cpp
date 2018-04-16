// beverage.cpp
// 2018-04-17
// kdj6724@naver.com
#include <iostream>
#include "beverage.h"
void CaffeineBeverage::PrepareRecipe() {
  BoilWater();
  Brew();
  PourInCup();
  if (CoustomerWants() == true)
    AddCondiment();
}
void CaffeineBeverage::BoilWater() {
  std::cout << "boil water" << std::endl;
}
void CaffeineBeverage::PourInCup() {
  std::cout << "pour in cup" << std::endl;
}
bool CaffeineBeverage::CoustomerWants() {
  return true;
}

void Coffee::Brew() {
  std::cout << "brew coffee" << std::endl;
}
void Coffee::AddCondiment() {
  std::cout << "add coffee" << std::endl;
}
bool Coffee::CoustomerWants() {
  return false;
}

void Tea::Brew() {
  std::cout << "brew tea" << std::endl;
}
void Tea::AddCondiment() {
  std::cout << "add tea" << std::endl;
}
bool Tea::CoustomerWants() {
  return true;
}
