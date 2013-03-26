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
    printf("Tossing dough...\n");
    printf("Adding sauce...\n");
    printf("Adding topping...\n");
    for (int i = 0; i < d_toppings.size(); i++)
        printf("    %s\n", d_toppings[i].c_str());
}

void 
Pizza::bake()
{
    printf("Bake %s for 25 minutes at 350\n", d_name.c_str());
}

void 
Pizza::cut()
{
    printf("Cutting %s into diagonal slices\n", d_name.c_str());
}

void 
Pizza::box()
{
    printf("Boxing %s in official PizzaStore box\n", d_name.c_str());
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

