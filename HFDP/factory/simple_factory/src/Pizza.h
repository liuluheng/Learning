
#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <string>
#include <vector>

class Pizza
{
public:
    typedef   std::vector<std::string>   StrVec;
public:
    Pizza();
    virtual ~Pizza();

    virtual std::string getName();
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();
    virtual std::string toString();

protected:
    std::string         d_name;
    std::string         d_dough;
    std::string         d_sauce;
    StrVec              d_toppings;
};

class CheesePizza : public Pizza
{
public:
    CheesePizza();
    virtual ~CheesePizza();
};

class ClamPizza : public Pizza
{
public:
    ClamPizza();
    virtual ~ClamPizza();
};

class PepperoniPizza : public Pizza
{
public:
    PepperoniPizza();
    virtual ~PepperoniPizza();
};

class VeggiePizza : public Pizza
{
public:
    VeggiePizza();
    virtual ~VeggiePizza();
};

#endif
