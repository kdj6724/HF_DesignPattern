// product.cpp
// 2018-04-10
// kdj6724@naver.com
#include <iostream>
#include "product.h"

void Pizza::Prepare() {
  std::cout << "prepare" << name_ << std::endl;
}
void Pizza::Bake() {
  std::cout << "Bake" << name_ << std::endl;
}
void Pizza::Cut() {
  std::cout << "cut" << name_ << std::endl;
}
void Pizza::Box() {
  std::cout << "box" << name_ << std::endl;
}
  
NYStyleCheesePizza::NYStyleCheesePizza() {
  name_ =  "NYStyleCheesePizza";
  dough_ = "thin curst dough";
  souce_ = "ny cheese souce";
}
NYStyleVegiePizza::NYStyleVegiePizza() {
  name_ = "NYStyleVegiePizza";
  dough_ = "thin curst dough";
  souce_ = "ny vegie souce";
}
NYStyleClamPizza::NYStyleClamPizza() {
  name_ = "NYStyleClamPizza";
  dough_ = "thin curst dough";
  souce_ = "clam souce";
}
NYStylePepperoniPizza::NYStylePepperoniPizza() {
  name_ = "NYStylePepperoniPizza";
  dough_ = "thin curst dough";
  souce_ = "pepperoni souce";
}

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() {
  name_ = "ChicagoStyleCheesePizza";
  dough_ = "normal dough";
  souce_ = "cheese souce";
}
ChicagoStyleVegiePizza::ChicagoStyleVegiePizza() {
  name_ = "ChicagoStyleVegiePizza";
  dough_ = "normal dough";
  souce_ = "vegie souce";
}
ChicagoStyleClamPizza::ChicagoStyleClamPizza() {
  name_ = "ChicagoStyleClamPizza";
  dough_ = "normal dough";
  souce_ = "clam souce";
}
ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza() {
  name_ = "ChicagoStylePepperoniPizza";
  dough_ = "normal dough";
  souce_ = "pepperoni souce";
}
void ChicagoStylePepperoniPizza::Cut() {
  std::cout << "cut ChicagoStylePepperoniPizza" << std::endl;
}
