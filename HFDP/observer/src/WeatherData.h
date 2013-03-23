#ifndef _WEATHERDATA_H_
#define _WEATHERDATA_H_

#include "Subject.h"
#include <vector>

class Observer;

class WeatherData : public Subject
{
public:
    typedef std::vector<Observer*>   ObsVec;
public:
    WeatherData();
    virtual ~WeatherData();

	virtual void registerObserver(Observer* obs);
	virtual void removeObserver(Observer o);
	virtual void notifyObservers();

	void measurementsChanged();
	void setMeasurements(double temperature, 
                         double humidity, 
                         double pressure);

    double getTemperature() 
    {
        return d_temperature;
    }

    double getHumidity() 
    {
        return d_humidity;
    }

    double getPressure() 
    {
        return d_pressure;
    }


private:
    ObsVec      d_observers;
    // use vector to record the observer since this case is small
    // we can consider list if observers get large
    double      d_temperature;
    double      d_humidity;
    double      d_pressure;
};

#endif
