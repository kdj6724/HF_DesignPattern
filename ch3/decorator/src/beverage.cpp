// beverage.cpp
// 2018-04-05
// kdj6724@naver.com
#include "beverage.h"
std::string Beverage::GetDescription() { 
  return description_; 
}
Espresso::Espresso() {
  description_ = "Espresso";
}
double Espresso::Cost() {
  return 1.99;
}
HouseBlend::HouseBlend() {
  description_ = "HouseBlend";
}
double HouseBlend::Cost() {
  return 0.89;
}
DarkRoast::DarkRoast() {
  description_ = "DarkRoast";
}
double DarkRoast::Cost() {
  return 0.99;
}
Decaf::Decaf() {
  description_ = "Decaf";
}
double Decaf::Cost() {
  return 1.05;
}
