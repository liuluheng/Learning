#ifndef _FORECASTDISPLAY_H_
#define _FORECASTDISPLAY_H_

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class ForecastDisplay : public Observer, public DisplayElement
{
public:
    ForecastDisplay(Subject* subject);
    virtual ~ForecastDisplay(){}

    virtual void update(double temperature, 
                        double humidity, 
                        double pressure);

    virtual void display();

private:
    double      d_currentPressure;
    double      d_lastPressure;
    Subject*    d_subject;
};

#endif
