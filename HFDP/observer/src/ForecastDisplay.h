#ifndef _FORECASTDISPLAY_H_
#define _FORECASTDISPLAY_H_

#include "DisplayElement.h"
#include "Observer.h"

class Subject;

class ForecastDisplay : public Observer, public DisplayElement
{
public:
    ForecastDisplay();
    virtual ~ForecastDisplay(){}

    virtual void update(double temperature, 
                        double humidity, 
                        double pressure);

    virtual void display();

private:
    double      d_currentPressure;
    double      d_lastPressure;
    Subject*    d_weatherData;
}
#endif
