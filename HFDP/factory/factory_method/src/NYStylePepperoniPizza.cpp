#include "Pizza.h"
#include <stdio.h>
#include <string>

NYStylePepperoniPizza::NYStylePepperoniPizza()
{
    d_name = "NY Style Pepperoni Pizza";
    d_dough = "Thin Crust Dough";
    d_sauce = "Marinara Sauce";

    d_toppings.push_back("Grated Reggiano Cheese");
    d_toppings.push_back("Sliced Pepperoni");
    d_toppings.push_back("Garlic");
    d_toppings.push_back("Onion");
    d_toppings.push_back("Mushrooms");
    d_toppings.push_back("Red Pepper");
}

NYStylePepperoniPizza::~NYStylePepperoniPizza()
{

}
