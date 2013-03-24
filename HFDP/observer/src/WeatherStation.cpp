
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"
#include "HeatIndexDisplay.h"
#include <stdio.h>


int main(int argc, const char *argv[])
{
    WeatherData* weatherData = new WeatherData();

    ForecastDisplay* forecastDisplay = new ForecastDisplay(weatherData);
    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay* statisticsDisplay = new StatisticsDisplay(weatherData);
    HeatIndexDisplay* heatIndexDisplay = new HeatIndexDisplay(weatherData);

    printf("\n");
    weatherData->setMeasurements(80, 65, 30.4f);
    printf("\n");
    weatherData->setMeasurements(82, 70, 29.2f);
    printf("\n");
    weatherData->setMeasurements(78, 90, 29.2f);
    printf("\n");

    if ( weatherData )
        delete weatherData;
}
