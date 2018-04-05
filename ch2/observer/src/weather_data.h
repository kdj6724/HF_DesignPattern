// weather_data.h
// 2018-04-04
// kdj6724@naver.com
#ifndef CH2_WEATHER_DATA_H_
#define CH2_WEATHER_DATA_H_
#include <vector>
#include <memory>
#include "observer.h"
class WeatherData : public Subject {
private:
  std::vector<Observer*> observers_;
  float temperature_;
  float humidity_;
  float pressure_;
public:
  virtual void RegisterObserver(Observer* o);
  virtual void RemoveObserver(Observer* o);
  virtual void NotifyObserver();
  void MeasurementsChanged();
  void SetMeasurements(float temperature, float humidity, float pressure);
};
#endif
