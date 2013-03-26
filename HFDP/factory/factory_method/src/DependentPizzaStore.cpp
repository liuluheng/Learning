#include "PizzaStore.h"
#include "Pizza.h"
#include <string>

Pizza*
DependentPizzaStore::createPizza(const std::string& style, 
                                 const std::string& type)
{
    Pizza* pizza = 0;
    if (style == string("NY")) 
    {
        if (type == string("cheese")) 
        {
            pizza = new NYStyleCheesePizza();
        }
        else if (type == string("veggie")) 
        {
            pizza = new NYStyleVeggiePizza();
        }
        else if (type == string("clam")) 
        {
            pizza = new NYStyleClamPizza();
        }
        else if (type == string("pepperoni")) 
        {
            pizza = new NYStylePepperoniPizza();
        }
    } 
    else if (style == string("Chicago")) 
    {
        if (type == string("cheese"))
        {
            pizza = new ChicagoStyleCheesePizza();
        }
        else if (type == string("veggie")) 
        {
            pizza = new ChicagoStyleVeggiePizza();
        }
        else if (type == string("clam")) 
        {
            pizza = new ChicagoStyleClamPizza();
        }
        else if (type == string("pepperoni"))
        {
            pizza = new ChicagoStylePepperoniPizza();
        }
    } 
    else 
    {
        printf("Error: invalid type of pizza\n");
        return 0;
    }
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
}

