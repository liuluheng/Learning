
#include "StatisticsDisplay.h"
#include <stdio.h>

StatisticsDisplay::StatisticsDisplay(Subject* subject)
    : d_subject(subject)
{
    d_subject.registerObserver(this);
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

    if (temp < d_minTemp) {
        d_minTemp = temp;
    }

    display();
}

void 
StatisticsDisplay::display() 
{
    printf("Avg/Max/Min temperature = %.1f/%.1f/%.1f\n", 
            (tempSum / numReadings), 
            maxTemp,
            minTemp);
}
