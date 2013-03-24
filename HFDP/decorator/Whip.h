#ifndef _WHIP_H_
#define _WHIP_H_

#include "CondimentDecorator.h"
#include "Beverage.h"
#include <string>

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage* bv);
    virtual ~Whip();

    virtual std::string getDescription();
    virtual double cost();

private:
    Beverage*       d_beverage;
};

#endif
