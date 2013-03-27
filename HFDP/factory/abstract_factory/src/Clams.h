#ifndef _CLAMS_H_
#define _CLAMS_H_

#include <string>

class Clams 
{
public:
    Clams(){}
    virtual ~Clams(){}

    virtual std::string toString()=0;
};

class FreshClams : public Clams
{
public:
    virtual std::string toString()
    {
		return string("Fresh Clams from Long Island Sound");
    }
};

class FrozenClams : public Clams
{
public:
    virtual std::string toString()
    {
		return string("Frozen Clams from Chesapeake Bay");
    }
};
#endif
