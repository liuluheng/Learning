#include "ChocolateBoiler.h"
#include <stdio.h>
 
// static member initialization
ChocolateBoiler* ChocolateBoiler::d_instance = 0;
  
ChocolateBoiler::ChocolateBoiler() 
    : d_empty(true)
    , d_boiled(false)
{

}

ChocolateBoiler::~ChocolateBoiler() 
{
    if (d_instance) 
    {
        delete d_instance;
        d_instance = 0;
    }
}
  
ChocolateBoiler* 
ChocolateBoiler::getInstance()
{
    if ( d_instance == NULL)
    {
        printf("Creating unique instance of Chocolate Boiler\n");
        d_instance = new ChocolateBoiler();
    }
    printf("Returning instance of Chocolate Boiler\n");
    return d_instance;
}

void
ChocolateBoiler::delInstance()
{
    if (d_instance) 
    {
        delete d_instance;
        d_instance = 0;
    }
}

void
ChocolateBoiler::fill() 
{
    if (isEmpty())
    {
        d_empty = false;
        d_boiled = false;
        // fill the boiler with a milk/chocolate mixture
    }
}

void 
ChocolateBoiler::drain() 
{
    if (!isEmpty() && isBoiled())
    {
        // drain the boiled milk and chocolate
        d_empty = true;
    }
}

void 
ChocolateBoiler::boil()
{
    if (!isEmpty() && !isBoiled())
    {
        // bring the contents to a boil
        d_boiled = true;
    }
}

bool
ChocolateBoiler::isEmpty() const
{
    return d_empty;
}

bool
ChocolateBoiler::isBoiled() const
{
    return d_boiled;
}
