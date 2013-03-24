#ifndef _DECAF_H_
#define _DECAF_H_

#include "Beverage.h"

class Decaf : public Beverage
{
public:
    Decaf();
    virtual ~Decaf();

    virtual double cost()
    {
        return 1.05;
    }

};
#endif
