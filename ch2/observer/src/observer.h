// observer.h
// 2018-04-04
// kdj6724@naver.com
#ifndef CH2_OBSERVER_H_
#define CH2_OBSERVER_H_
#include <memory>
#include "subject.h"
class Observer {
public:
  virtual void Update(float temp, float humedity, float pressure) = 0;
};
class DisplayElement {
public:
  virtual void Display() = 0;
};

class CurrentConditionsDisplay : public Observer, DisplayElement {
private:
  float temperature_;
  float humidity_;
  Subject* weatherData_;
public:
  CurrentConditionsDisplay(Subject* weatherData);
  virtual void Update(float temp, float humedity, float pressure);
  virtual void Display();
};

class StatisticsDisplay : public Observer, DisplayElement {
private:
  float temperature_;
  float humidity_;
  Subject* weatherData_;
public:
  StatisticsDisplay(Subject* weatherData);
  virtual void Update(float temp, float humedity, float pressure);
  virtual void Display();
};

class ForecastDisplay : public Observer, DisplayElement {
private:
  float temperature_;
  float humidity_;
  Subject* weatherData_;
public:
  ForecastDisplay(Subject* weatherData);
  virtual void Update(float temp, float humedity, float pressure);
  virtual void Display();
};
#endif
