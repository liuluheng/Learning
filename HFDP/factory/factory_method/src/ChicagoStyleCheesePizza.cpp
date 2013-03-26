#include "ChicagoStyleCheesePizza.h"
#include <stdio.h>
#include <string>

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    d_name = "Chicago Style Deep Dish Cheese Pizza";
    d_dough = "Extra Thick Crust Dough";
    d_sauce = "Plum Tomato Sauce";
    d_toppings.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza()
{

}

void 
ChicagoStyleCheesePizza::cut() 
{
    printf("Cutting the pizza into square slices\n");
}
