#include "Soy.h"

Soy::Soy(Beverage* bv)
    : d_beverage(bv)
{

}

Soy::~Soy()
{

}

std::string 
Soy::getDescription()
{
    return d_beverage->getDescription() + ", Soy";
}

double
Soy::cost()
{
    return 0.15 + d_beverage->cost();
}


