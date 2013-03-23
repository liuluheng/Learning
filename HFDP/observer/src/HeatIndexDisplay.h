#ifndef _HEATINDEXDISPLAY_H_
#define _HEATINDEXDISPLAY_H_

#include "Observer.h"
#include "DisplayElement.h"

class Subject;

class HeatIndexDisplay : public Observer, public DisplayElement
{
public:
    HeatIndexDisplay();
    virtual ~HeatIndexDisplay();

    virtual update(double t, double rh, double pressure);
    virtual display();

private:
    double computeHeatIndex(double t, double rh);
private:
    const static    d_headIndex;
    Subject*        d_subject;
}

#endif
