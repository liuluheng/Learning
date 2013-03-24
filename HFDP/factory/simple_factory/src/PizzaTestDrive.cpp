#include "Pizza.h"
#include "SimplePizzaFactory.h"
#include "PizzaStore.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
    SimplePizzaFactory* factory = new SimplePizzaFactory();
    PizzaStore* store = new PizzaStore(factory);

    Pizza* pizza = store->orderPizza("cheese");
    printf("We ordered a %s:\n" ,pizza->getName().c_str());
    printf("%s\n" ,pizza->toString().c_str());

    pizza = store->orderPizza("veggie");
    printf("We ordered a %s:\n", pizza->getName().c_str());
    printf("%s\n" ,pizza->toString().c_str());
    return 0;
}
