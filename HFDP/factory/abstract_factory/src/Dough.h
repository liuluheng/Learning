#ifndef _DOUGH_H_
#define _DOUGH_H_

#include <string>

class Dough 
{
public:
    virtual std::string toString()=0;
};

class ThickCrustDough : public Dough
{
public:
    virtual std::string toString()
    {
		return "ThickCrust style extra thick crust dough";
    }
};


class ThinCrustDough : public Dough
{
public:
    virtual std::string toString()
    {
		return "Thin Crust Dough";
    }
};


#endif
