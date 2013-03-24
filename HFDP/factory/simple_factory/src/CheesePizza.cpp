#include "Pizza.h"

CheesePizza::CheesePizza()
{
    d_name = "Cheese Pizza";
    d_dough = "Regular Crust";
    d_sauce = "Marinara Pizza Sauce";
    d_toppings.push_back("Fresh Mozzarella");
    d_toppings.push_back("Parmesan");
}

CheesePizza::~CheesePizza()
{

}
