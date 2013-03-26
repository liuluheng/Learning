#include "PizzaStore.h"
#include "Pizza.h"
#include <string>

using namespace std;

Pizza*
NYPizzaStore::createPizza(const std::string& item)
{
    if (item == string("cheese")) 
    {
        return new NYStyleCheesePizza();
    }
    else if (item == string("veggie")) 
    {
        return new NYStyleVeggiePizza();
    }
    else if (item == string("clam")) 
    {
        return new NYStyleClamPizza();
    }
    else if (item == string("pepperoni")) 
    {
        return new NYStylePepperoniPizza();
    }
    else
        return 0;
}
