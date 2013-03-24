#ifndef _SIMPLEPIZZAFACTORY_H_
#define _SIMPLEPIZZAFACTORY_H_

#include "Pizza.h"

class SimplePizzaFactory 
{
public:
    SimplePizzaFactory();
    virtual ~SimplePizzaFactory();

    virtual Pizza* createPizza(const std::string& type);
};

#endif
