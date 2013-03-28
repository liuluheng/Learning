#ifndef _SAUCE_H_
#define _SAUCE_H_

#include <string>

class Sauce 
{
public:
    Sauce(){}
    virtual ~Sauce(){}

    virtual std::string toString()=0;

};

class MarinaraSauce : public Sauce
{
public:
    virtual std::string toString()
    {
        return  "Marinara Sauce";
    }
};


class PlumTomatoSauce : public Sauce
{
public:
    virtual std::string toString()
    {
        return  "Tomato sauce with plum tomatoes";
    }
};

#endif
