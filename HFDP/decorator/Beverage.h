#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_

#include <string>

class Beverage 
{
public:
    Beverage();
    virtual ~Beverage();
  
    virtual std::string getDescription() = 0;
	virtual double cost() = 0;

protected:
    std::string         d_description;
};


#endif
