#ifndef _PIZZASTORE_H_
#define _PIZZASTORE_H_

#include "Pizza.h"
#include "SimplePizzaFactory.h"

class PizzaStore 
{
public:
    PizzaStore(SimplePizzaFactory* fc);
    virtual ~PizzaStore();

    virtual Pizza* orderPizza(const std::string& type);

private:
    SimplePizzaFactory*         d_factory;
};

#endif 
