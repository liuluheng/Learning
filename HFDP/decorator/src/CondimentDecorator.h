#ifndef _CONDIMENTDECORATOR_H_
#define _CONDIMENTDECORATOR_H_

#include "Beverage.h"
#include <string>

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator();
    virtual ~CondimentDecorator();

    virtual std::string getDescription() = 0;
};

#endif
