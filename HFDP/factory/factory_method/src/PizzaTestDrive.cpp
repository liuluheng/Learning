#include "PizzaStore.h"
#include "Pizza.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    Pizza* pizza = nyStore->orderPizza("cheese");
    printf("Ethan ordered a %s\n\n" , pizza->getName().c_str());

    pizza = chicagoStore->orderPizza("cheese");
    printf("Joel ordered a %s\n\n" , pizza->getName().c_str());

    pizza = nyStore->orderPizza("clam");
    printf("Ethan ordered a %s\n\n" , pizza->getName().c_str() );

    pizza = chicagoStore->orderPizza("clam");
    printf("Joel ordered a %s\n\n" , pizza->getName().c_str() );

    pizza = nyStore->orderPizza("pepperoni");
    printf("Ethan ordered a %s\n\n" , pizza->getName().c_str());

    pizza = chicagoStore->orderPizza("pepperoni");
    printf("Joel ordered a %s\n\n" , pizza->getName().c_str());

    pizza = nyStore->orderPizza("veggie");
    printf("Ethan ordered a %s\n\n" , pizza->getName().c_str());

    pizza = chicagoStore->orderPizza("veggie");
    printf("Joel ordered a %s\n\n" , pizza->getName().c_str());

    // TODO manage the pizza memory leakage

    delete nyStore;
    delete chicagoStore;
    return 0;
}
