// weather_data.cpp
// 2018-04-04
// kdj6724@naver.com
#include "weather_data.h"

void WeatherData::RegisterObserver(Observer* o) {
  observers_.push_back(o);
}
void WeatherData::RemoveObserver(Observer* o) {
  observers_.erase(std::remove(observers_.begin(), observers_.end(), o));
}
void WeatherData::NotifyObserver() {
  for(std::vector<Observer*>::const_iterator iter = observers_.begin();
      iter != observers_.end(); ++iter) {
    if (*iter != 0)
      (*iter)->Update(temperature_, humidity_, pressure_);
  }
}
void WeatherData::MeasurementsChanged() {
  NotifyObserver();
}
void WeatherData::SetMeasurements(float temperature, float humidity, float pressure) {
  temperature_ = temperature;
  humidity_ = humidity;
  pressure_ = pressure;
  MeasurementsChanged();
}
