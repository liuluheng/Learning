#ifndef _SOY_H_
#define _SOY_H_

#include "Beverage.h"
#include "CondimentDecorator.h"


class Soy : public CondimentDecorator
{
public:
    Soy(Beverage* bv);
    virtual ~Soy();

    virtual std::string getDescription();
    virtual double cost();

private:
    Beverage*       d_beverage;
};

#endif
