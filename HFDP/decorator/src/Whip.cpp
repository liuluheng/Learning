#include "Whip.h"


Whip::Whip(Beverage* bv)
    : d_beverage(bv)
{

}

Whip::~Whip()
{

}

std::string
Whip::getDescription()
{
    return d_beverage->getDescription() + ", Whip";
}

double
Whip::cost()
{
    return 0.10 + d_beverage->cost();
}
