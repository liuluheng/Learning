#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class Observer 
{
public:

    Observer(){}
    virtual ~Observer(){}

    virtual void update(double temp, double humidity, double pressure){}
};

#endif
