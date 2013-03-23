
#include "ForecastDisplay.h"
#include <stdio.h>

ForecastDisplay::ForecastDisplay(Subject* subject)
{
    d_subject = subject; 
	d_subject->registerObserver(this);
}


void
ForecastDisplay::update(double temperature, 
                        double humidity, 
                        double pressure);
{
    d_lastPressure = d_currentPressure;
    d_currentPressure = pressure;
    display();
}
void 
ForecastDisplay::display()
{
    printf("Forecast: \n");
    if (currentPressure > lastPressure) 
    {
        printf("Improving weather on the way!\n");
    } 
    else if (currentPressure < lastPressure) 
    {
        printf("Watch out for cooler, rainy weather\n");
    }
    else 
    {
        printf("More of the same\n");
    }
}

