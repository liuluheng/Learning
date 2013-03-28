#include "Pizza.h"
#include <stdio.h>
#include <string>

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
    d_name = "Chicago Deep Dish Veggie Pizza";
    d_dough = "Extra Thick Crust Dough";
    d_sauce = "Plum Tomato Sauce";

    d_toppings.push_back("Shredded Mozzarella Cheese");
    d_toppings.push_back("Black Olives");
    d_toppings.push_back("Spinach");
    d_toppings.push_back("Eggplant");
}

ChicagoStyleVeggiePizza::~ChicagoStyleVeggiePizza()
{
    printf("Cutting the pizza into square slices\n");
}

void
ChicagoStyleVeggiePizza::cut()
{
}
