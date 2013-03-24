
#include "Milk.h"

Milk::Milk(Beverage* bv)
    : d_beverage(bv)
{

}

Milk::~Milk()
{

}

std::string
Milk::getDescription()
{
    return d_beverage->getDescription() + ", Milk";
}

double
Milk::cost()
{
    return 0.10 + d_beverage->cost();
}

