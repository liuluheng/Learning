#include "PizzaStore.h"
#include <stdio.h>
#include <string>

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

Pizza*
PizzaStore::orderPizza(const std::string& type) 
{
    Pizza* pizza = createPizza(type);

    printf("--- Making a %s ---\n", pizza->getName().c_str());
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}

Pizza*
createPizza(const std::string& type)
{

}
