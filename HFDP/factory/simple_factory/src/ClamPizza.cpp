#include "Pizza.h"

ClamPizza::ClamPizza()
{
    d_name = "Clam Pizza";
    d_dough = "Thin crust";
    d_sauce = "White garlic sauce";
    d_toppings.push_back("Clams");
    d_toppings.push_back("Grated parmesan cheese");
}

ClamPizza::~ClamPizza()
{

}
