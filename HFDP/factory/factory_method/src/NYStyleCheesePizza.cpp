#include "Pizza.h"
#include <stdio.h>
#include <string>

NYStyleCheesePizza::NYStyleCheesePizza()
{
    d_name = "NY Style Sauce and Cheese Pizza";
    d_dough = "Thin Crust Dough";
    d_sauce = "Marinara Sauce";

    d_toppings.push_back("Grated Reggiano Cheese");
}

NYStyleCheesePizza::~NYStyleCheesePizza()
{

}
