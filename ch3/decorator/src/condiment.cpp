// condiment.cpp
// 2018-04-05
// kdj6724@naver.com
#include "condiment.h"
Mocha::Mocha(Beverage* beverage) {
  beverage_ = beverage;
}
std::string Mocha::GetDescription() {
  return beverage_->GetDescription() + " Mocha";
}
double Mocha::Cost() {
  printf("[kdj6724] %s %d\n", __FUNCTION__, __LINE__);
  return 0.20 + beverage_->Cost();
}

Milk::Milk(Beverage* beverage) {
  beverage_ = beverage;
}
std::string Milk::GetDescription() {
  return beverage_->GetDescription() + " Milk";
}
double Milk::Cost() {
  return 0.10 + beverage_->Cost();
}

Soy::Soy(Beverage* beverage) {
  beverage_ = beverage;
}
std::string Soy::GetDescription() {
  return beverage_->GetDescription() + " Soy";
}
double Soy::Cost() {
  return 0.15 + beverage_->Cost();
}

Whip::Whip(Beverage* beverage) {
  beverage_ = beverage;
}
std::string Whip::GetDescription() {
  return beverage_->GetDescription() + " Whip";
}
double Whip::Cost() {
  return 0.10 + beverage_->Cost();
}
