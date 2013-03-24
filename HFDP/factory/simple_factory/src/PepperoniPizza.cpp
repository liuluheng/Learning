#include "Pizza.h"

PepperoniPizza::PepperoniPizza()
{
    d_name = "Pepperoni Pizza";
    d_dough = "Crust";
    d_sauce = "Marinara sauce";
    d_toppings.push_back("Sliced Pepperoni");
    d_toppings.push_back("Sliced Onion");
    d_toppings.push_back("Grated parmesan cheese");
}

PepperoniPizza::~PepperoniPizza()
{

}
