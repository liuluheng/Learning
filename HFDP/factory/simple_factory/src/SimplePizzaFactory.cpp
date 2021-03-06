#include "SimplePizzaFactory.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}

SimplePizzaFactory::~SimplePizzaFactory()
{

}

Pizza*
SimplePizzaFactory::createPizza(const std::string& type)
{
    Pizza* pizza = NULL;

    if (type == "cheese")
    {
        pizza = new CheesePizza();
    } 
    else if (type == "pepperoni")
    {
        pizza = new PepperoniPizza();
    }
    else if (type == "clam")
    {
        pizza = new ClamPizza();
    }
    else if (type == "veggie")
    {
        pizza = new VeggiePizza();
    }

    return pizza;
}

