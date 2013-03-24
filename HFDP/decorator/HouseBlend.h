#ifndef _HOUSEBLEND_H_
#define _HOUSEBLEND_H_

#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    virtual ~HouseBlend_t ();
    
    virtual double cost()
    {
        return 0.89;
    }
};

#endif
