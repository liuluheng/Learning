#ifndef _MILK_H_
#define _MILK_H_

#include <string>
#include "Beverage.h"
#include "CondimentDecorator.h"

class Milk : public CondimentDecorator
{
public:
    Milk(Beverage* bv);
    virtual ~Milk();

    virtual std::string getDescription();
    virtual double cost();

private:
    Beverage*     d_beverage;
};

#endif

