#include "Pizza.h"
#include "PizzaStore.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    Pizza* pizza = nyStore->orderPizza("cheese");
    printf("Ethan ordered a %s\n" , pizza->getName().c_str() );

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }

    pizza = chicagoStore->orderPizza("cheese");
    printf("Joel ordered a %s\n" , pizza->getName().c_str());

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }

    pizza = nyStore->orderPizza("clam");
    printf("Ethan ordered a %s\n" , pizza->getName().c_str());

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }
    
    pizza = chicagoStore->orderPizza("clam");
    printf("Joel ordered a %s\n" , pizza->getName().c_str());

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }
    
    pizza = nyStore->orderPizza("pepperoni");
    printf("Ethan ordered a %s\n" , pizza->getName().c_str());

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }
    
    pizza = chicagoStore->orderPizza("pepperoni");
    printf("Joel ordered a %s\n", pizza->getName().c_str());

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }
    
    pizza = nyStore->orderPizza("veggie");
    printf("Ethan ordered a %s\n", pizza->getName().c_str());

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }
    
    pizza = chicagoStore->orderPizza("veggie");
    printf("Joel ordered a %s\n" , pizza->getName().c_str()  );

    if (pizza)
    {
        delete pizza;
        pizza = 0;
    }

    if ( nyStore )
        delete nyStore;
    if ( chicagoStore )
        delete chicagoStore;
    
    return 0;
}
