#ifndef _DARKROAST_H_
#define _DARKROAST_H_

#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast();
    virtual ~DarkRoast();

    virtual double cost()
    {
        return 0.99;
    }
};

#endif
