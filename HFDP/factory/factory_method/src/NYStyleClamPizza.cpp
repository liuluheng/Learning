#include "Pizza.h"
#include <stdio.h>
#include <string>

NYStyleClamPizza::NYStyleClamPizza()
{
    d_name = "NY Style Clam Pizza";
    d_dough = "Thin Crust Dough";
    d_sauce = "Marinara Sauce";

    d_toppings.push_back("Grated Reggiano Cheese");
    d_toppings.push_back("Fresh Clams from Long Island Sound");
}

NYStyleClamPizza::~NYStyleClamPizza()
{

}


