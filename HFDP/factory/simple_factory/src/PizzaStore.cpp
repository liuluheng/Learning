#include "PizzaStore.h"

PizzaStore::PizzaStore(SimplePizzaFactory* fc)
    : d_factory(fc)
{

}

PizzaStore::~PizzaStore()
{

}

Pizza*
PizzaStore::orderPizza(const std::string& type) 
{
    Pizza* pizza = d_factory->createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
