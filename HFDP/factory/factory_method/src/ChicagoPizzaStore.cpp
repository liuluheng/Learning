#include "Pizza.h"
#include "PizzaStore.h"
#include <string>

Pizza*
ChicagoPizzaStore::createPizza(const std::string& type)
{
    if (type == "cheese") 
    {
        return new ChicagoStyleCheesePizza();
    }
    else if (type == "veggie") 
    {
        return new ChicagoStyleVeggiePizza();
    }
    else if (type == "clam")
    {
        return new ChicagoStyleClamPizza();
    }
    else if (type == "pepperoni")
    {
        return new ChicagoStylePepperoniPizza();
    }
    else
        return 0;
}

