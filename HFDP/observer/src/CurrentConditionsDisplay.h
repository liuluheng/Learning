
#ifndef _CURRENTCONDITIONSDISPLAY_H_
#define _CURRENTCONDITIONSDISPLAY_H_

#include "Observer.h"
#include "DisplayElement.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
    CurrentConditionsDisplay(Subject* subject);
    virtual ~CurrentConditionsDisplay(){}

    virtual void update(double temperature, 
                        double humidity, 
                        double pressure);

    virtual void display();

    
private:
    double      d_temperature;
    double      d_humidity;
    Subject*    d_subject;
};

#endif
