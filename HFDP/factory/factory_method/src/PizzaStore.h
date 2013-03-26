#ifndef _PIZZASTORE_H_
#define _PIZZASTORE_H_

#include "Pizza.h"
#include <string>

class PizzaStore 
{
public:
    PizzaStore();
    virtual ~PizzaStore();

    virtual Pizza* orderPizza(const std::string& type);

protected:
    virtual Pizza* createPizza(const std::string& type) = 0;

};

class ChicagoPizzaStore : public PizzaStore
{
public:
    ChicagoPizzaStore(){};
    virtual ~ChicagoPizzaStore(){};
    virtual Pizza* orderPizza(const std::string& type)
    {
        return PizzaStore::orderPizza(type);
    }

protected:
    virtual Pizza* createPizza(const std::string& type);
};

class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore(){};
    virtual ~NYPizzaStore(){};
    virtual Pizza* orderPizza(const std::string& type)
    {
        return PizzaStore::orderPizza(type);
    }

protected:
    virtual Pizza* createPizza(const std::string& type);
};

class DependentPizzaStore
{
public:
    DependentPizzaStore(){}
    ~DependentPizzaStore(){}

    Pizza* createPizza(const std::string& style,
                       const std::string& type);
};



#endif 
