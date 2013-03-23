#include "HeatIndexDisplay.h"

static d_headIndex = 0;

HeatIndexDisplay::HeatIndexDisplay(Subject* subject)
{
    d_subject = subject;
}

HeatIndexDisplay::~HeatIndexDisplay
{
    
}

void
HeatIndexDisplay::update(double t, double rh, double pressure)
{
    d_headIndex = computeHeatIndex(t, rh); 
    display();
}

double
HeatIndexDisplay::computeHeatIndex(double t, double rh)
{
    double index = (double)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) 
                + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) 
                + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
                (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 * 
                    (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) + 
                (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
                0.000000000843296 * (t * t * rh * rh * rh)) -
            (0.0000000000481975 * (t * t * t * rh * rh * rh)));
    return index;
}

void HeatIndexDisplay::display()
{
    printf("Heat index is " + d_heatIndex);
}