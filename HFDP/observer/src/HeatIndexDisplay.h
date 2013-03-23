#ifndef _HEATINDEXDISPLAY_H_
#define _HEATINDEXDISPLAY_H_

#include "Subject.h"
#include "Observer.h"
#include "DisplayElement.h"


class HeatIndexDisplay : public Observer, public DisplayElement
{
public:
    HeatIndexDisplay(Subject* subject);
    virtual ~HeatIndexDisplay();

    virtual void update(double t, double rh, double pressure);
    virtual void display();

private:
    double computeHeatIndex(double t, double rh);

private:
    double                  d_heatIndex;
    Subject*                d_subject;
};

#endif
