#include "Pizza.h"
#include <stdio.h>
#include <string>

ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
    d_name = "Chicago Style Pepperoni Pizza";
    d_dough = "Extra Thick Crust Dough";
    d_sauce = "Plum Tomato Sauce";

    d_toppings.push_back("Shredded Mozzarella Cheese");
    d_toppings.push_back("Black Olives");
    d_toppings.push_back("Spinach");
    d_toppings.push_back("Eggplant");
    d_toppings.push_back("Sliced Pepperoni");
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza()
{
}

void
ChicagoStylePepperoniPizza::cut()
{
    printf("Cutting the pizza into square slices\n");
}
