#include "Pizza.h"
#include <stdio.h>
#include <string>

ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
    d_name = "Chicago Style Clam Pizza";
    d_dough = "Extra Thick Crust Dough";
    d_sauce = "Plum Tomato Sauce";

    d_toppings.push_back("Shredded Mozzarella Cheese");
    d_toppings.push_back("Frozen Clams from Chesapeake Bay");
}

ChicagoStyleClamPizza~ChicagoStyleClamPizza()
{

}
void
ChicagoStyleClamPizza::cut()
{
    printf("Cutting the pizza into square slices\n");
}
