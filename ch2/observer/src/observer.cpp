// observer.cpp
// 2018-04-04
// kdj6724@naver.com
#include <iostream>
#include "observer.h"
CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData) {
  weatherData_ = weatherData;
  weatherData_->RegisterObserver(this);
}
void CurrentConditionsDisplay::Update(float temp, float humedity, float pressure) {
  temperature_ = temp;
  humidity_ = humedity;
  Display();
}
void CurrentConditionsDisplay::Display() {
  std::cout << " >> current condition << " << std::endl;
  std::cout << " temperature : " << temperature_ << std::endl;
  std::cout << " humidity : " << humidity_ << std::endl;
}

StatisticsDisplay::StatisticsDisplay(Subject* weatherData) {
  weatherData_ = weatherData;
  weatherData->RegisterObserver(this);
}
void StatisticsDisplay::Update(float temp, float humedity, float pressure) {
  temperature_ = temp;
  humidity_ = humedity;
  Display();
}
void StatisticsDisplay::Display() {
  std::cout << " >> current condition << " << std::endl;
  std::cout << " temperature : " << temperature_ << std::endl;
  std::cout << " humidity : " << humidity_ << std::endl;
}

ForecastDisplay::ForecastDisplay(Subject* weatherData) {
  weatherData_ = weatherData;
  weatherData->RegisterObserver(this);
}
void ForecastDisplay::Update(float temp, float humedity, float pressure) {
  temperature_ = temp;
  humidity_ = humedity;
  Display();
}
void ForecastDisplay::Display() {
  std::cout << " >> current condition << " << std::endl;
  std::cout << " temperature : " << temperature_ << std::endl;
  std::cout << " humidity : " << humidity_ << std::endl;
}
