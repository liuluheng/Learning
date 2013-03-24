#include "Beverage.h"


Beverage::Beverage()
    : d_description("Unknown Beverage")
{

}

Beverage::~Beverage()
{

}

std::string
Beverage::getDescription()
{
    return d_description;
}

double
Beverage::cost()
{

}
