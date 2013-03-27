#ifndef _CHEESE_H_
#define _CHEESE_H_

#include <string>

class Cheese 
{
public:
    virtual std::string toString()=0;
};

class MozzarellaCheese : public Cheese
{
public:
    virtual std::string toString()
    {
        return "Shredded Mozzarella";
    }
};

class ParmesanCheese : public Cheese
{
public:
    virtual std::string toString()
    {
        return "Shredded Parmesan";
    }
};

class ReggianoCheese : public Cheese
{
public:
    virtual std::string toString()
    {
        return "Reggiano Cheese";
    }
};




#endif
