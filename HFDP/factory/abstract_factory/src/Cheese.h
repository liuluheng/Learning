#ifndef _CHEESE_H_
#define _CHEESE_H_

#include <string>

class Cheese 
{
public:
    Cheese(){}
    virtual ~Cheese(){}

    virtual std::string toString()=0;
};

class MozzarellaCheese : public Cheese
{
public:
    virtual std::string toString()
    {
        return string("Shredded Mozzarella");
    }
};

class ParmesanCheese : public Cheese
{
public:
    virtual std::string toString()
    {
        return string("Shredded Parmesan");
    }
};

class ReggianoCheese : public Cheese
{
public:
    virtual std::string toString()
    {
        return string("Reggiano Cheese");
    }
};




#endif
