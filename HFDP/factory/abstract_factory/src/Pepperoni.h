#ifndef _PEPPERONI_H_
#define _PEPPERONI_H_

#include <string>

class Pepperoni 
{
public:
    virtual std::string toString()=0;
};

class SlicedPepperoni : public Pepperoni
{
public:
    virtual std::string toString()
    {
		return "Sliced Pepperoni";
    }
};

#endif
