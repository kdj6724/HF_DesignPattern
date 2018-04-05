// main.cpp
// 2018-04-05
// kdj6724@naver.com
#include "observer.h"
#include "weather_data.h"

int main(void) {
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);
  std::unique_ptr<WeatherData> weatherData(new WeatherData);
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);
  std::unique_ptr<CurrentConditionsDisplay> 
      current(new CurrentConditionsDisplay(weatherData.get()));
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);
  std::unique_ptr<StatisticsDisplay> 
      statics(new StatisticsDisplay(weatherData.get()));
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);
  std::unique_ptr<ForecastDisplay> 
      forcast(new ForecastDisplay(weatherData.get()));
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);

  weatherData->SetMeasurements(10, 20, 3);
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);
  weatherData->SetMeasurements(11, 22, 4);
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);
  weatherData->SetMeasurements(12, 29, 5);
  printf("[kdj6724] %s (%d)\n", __FUNCTION__, __LINE__);
  return 0;
}
