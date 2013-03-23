#include "CurrentConditionsDisplay.h"
#include <stdio.h>


CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* subject)
    : d_subject(subject)
{
    d_subject.registerObserver(this);
}


void 
CurrentConditionsDisplay::update(double temperature, 
                                 double humidity, 
                                 double pressure)
{
    d_temperature = temperature;
    d_humidity = humidity;
    display();
}

void 
CurrentConditionsDisplay::display()
{
    printf("Current conditions: %.1f F degress and %.1f humidity", 
            d_temperature, d_humidity);
}

