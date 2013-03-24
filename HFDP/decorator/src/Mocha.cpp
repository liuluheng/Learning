#include "Mocha.h"

Mocha::Mocha(Beverage* bv)
    : d_beverage(bv)
{

}

Mocha::~Mocha()
{

}

std::string
Mocha::getDescription()
{
    return d_beverage->getDescription() + ", Mocha";
}

double
Mocha::cost()
{
    return 0.20 + d_beverage->cost();
}

