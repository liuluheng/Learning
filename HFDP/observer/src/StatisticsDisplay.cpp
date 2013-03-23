
#include "StatisticsDisplay.h"
#include <stdio.h>

StatisticsDisplay::StatisticsDisplay(Subject* subject)
    : d_maxTemp(0.0)
    , d_minTemp(200)
    , d_tempSum(0.0)
    , d_numReadings(0)
    , d_subject(subject)
{
    d_subject->registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay()
{

}

void 
StatisticsDisplay::update(double temp, double humidity, double pressure) 
{
    d_tempSum += temp;
    d_numReadings++;

    if (temp > d_maxTemp) 
    {
        d_maxTemp = temp;
    }

    if (temp < d_minTemp) 
    {
        d_minTemp = temp;
    }

    display();
}

void 
StatisticsDisplay::display() 
{
    printf("Avg/Max/Min temperature = %.1f/%.1f/%.1f\n", 
            (d_tempSum / d_numReadings), 
            d_maxTemp,
            d_minTemp);
}
