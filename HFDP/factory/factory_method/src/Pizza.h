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

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza();
    virtual ~ChicagoStyleCheesePizza();

    virtual void cut();
};

class ChicagoStyleClamPizza : public Pizza
{
public:
    ChicagoStyleClamPizza();
    virtual ~ChicagoStyleClamPizza();

    virtual void cut();
};

class ChicagoStylePepperoniPizza : public Pizza
{
public:
    ChicagoStylePepperoniPizza();
    virtual ~ChicagoStylePepperoniPizza();

    virtual void cut();
};


class ChicagoStyleVeggiePizza : public Pizza
{
public:
    ChicagoStyleVeggiePizza();
    virtual ~ChicagoStyleVeggiePizza();

    virtual void cut();
};

class NYStyleCheesePizza : public Pizza
{
public:
    NYStyleCheesePizza();
    virtual ~NYStyleCheesePizza();
};

class NYStyleClamPizza : public Pizza
{
public:
    NYStyleClamPizza();
    virtual ~NYStyleClamPizza();
};

class NYStylePepperoniPizza : public Pizza
{
public:
    NYStylePepperoniPizza();
    virtual ~NYStylePepperoniPizza();
};


class NYStyleVeggiePizza : public Pizza
{
public:
    NYStyleVeggiePizza();
    virtual ~NYStyleVeggiePizza();
};
#endif
