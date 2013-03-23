#ifndef _STATISTICSDISPLAY_H_
#define _STATISTICSDISPLAY_H_

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"

class StatisticsDisplay : public Observer, public DisplayElement
{
public:
    StatisticsDisplay(Subject* subject);
    virtual ~StatisticsDisplay();

    virtual void update(double temp, double hum, double p);
    virtual void display();
    
private:
	double      d_maxTemp;
	double      d_minTemp;
	double      d_tempSum;
	int         d_numReadings;
	Subject*    d_subject;
};

#endif
