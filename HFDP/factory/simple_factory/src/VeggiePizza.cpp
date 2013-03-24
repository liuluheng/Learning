#include "Pizza.h"

VeggiePizza::VeggiePizza()
{
    d_name = "Veggie Pizza";
    d_dough = "Crust";
    d_sauce = "Marinara sauce";
    d_toppings.push_back("Shredded mozzarella");
    d_toppings.push_back("Grated parmesan");
    d_toppings.push_back("Diced onion");
    d_toppings.push_back("Sliced mushrooms");
    d_toppings.push_back("Sliced red pepper");
    d_toppings.push_back("Sliced black olives");
}

VeggiePizza::~VeggiePizza()
{

}
