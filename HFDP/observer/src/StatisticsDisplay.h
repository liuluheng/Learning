#ifndef _STATISTICSDISPLAY_H_
#define _STATISTICSDISPLAY_H_

class StatisticsDisplay : public Observer, public DisplayElement
{
public:
    StatisticsDisplay();
    virtual ~StatisticsDisplay();

    virtual void update(double temp, double hum, double p);
    virtual void display();
    
private:
	double      d_maxTemp = 0.0f;
	double      d_minTemp = 200;
	double      d_tempSum= 0.0f;
	int         d_numReadings;
	Subject*    d_subject;
};

#endif
