#include "Whip.h"


Whip::Whip(Beverage* bv)
    : d_beverage(bv)
{

}

Whip::~Whip()
{

}

Whip::getDescription()
{
    return d_beverage->getDescription() + ", Whip";
}

Whip::cost()
{
    return 0.10 + d_beverage->cost();
}
