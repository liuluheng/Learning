#ifndef _MOCHA_H_
#define _MOCHA_H_

#include "Beverage.h"
#include <string>

class Mocha
{
public:
    Mocha();
    virtual ~Mocha();

    virtual std::string getDescription();
    virtual double cost();

private:
    Beverage  d_beverage;
};

#endif
