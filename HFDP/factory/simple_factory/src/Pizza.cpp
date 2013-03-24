#include "Pizza.h"
#include <stdio.h>

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

std::string
Pizza::getName()
{
    return d_name;
}

void
Pizza::prepare()
{
    printf("Preparing %s\n" , d_name.c_str());
}

void 
Pizza::bake()
{
    printf("Baking %s\n", d_name.c_str());
}

void 
Pizza::cut()
{
    printf("Cutting %s\n", d_name.c_str());
}

void 
Pizza::box()
{
    printf("Boxing %s\n", d_name.c_str());
}

std::string
Pizza::toString()
{
    // code to display pizza name and ingredients
    std::string display("---- " + d_name + " ----\n");
    display += d_dough + "\n";
    display += d_sauce + "\n";
    for (int i = 0; i < d_toppings.size(); i++)
    {
        display += d_toppings[i] + "\n";
    }
    return display;
}

