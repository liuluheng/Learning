#include "WeatherData.h"

WeatherData::WeatherData()
    : d_observers()
    , d_temperature(0)
    , d_humidity(0)
    , d_pressure(0)
{

}


void
WeatherData::registerObserver(Observer* obs)
{
    d_observers.push_back(obs);
}

void
WeatherData::removeObserver(Observer* obs)
{
    for (ObsVec::iterator it = d_observers.begin();
            it != d_observers.end(); ++it)
    {
        if (*it == obs)
        {            
            d_observers.erase(it);
            break;
        }
    }
}

void 
WeatherData::notifyObservers()
{
    for (ObsVec::iterator it = d_observers.begin();
            it != d_observers.end(); ++it)
    {
        it->update(d_temperature, d_humidity, d_pressure);
    }
}

void
WeatherData::measurementsChanged()
{
    notifyObservers();
}

void 
WeatherData::setMeasurements(double temperature, 
                             double humidity, 
                             double pressure)
{
    d_temperature = temperature; 
    d_humidity = humidity;
    d_pressure = pressure;

    measurementsChanged();
}

