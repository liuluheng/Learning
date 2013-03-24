#include "Beverage.h"
#include <string>

class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator();
    virtual ~CondimentDecorator();

    virtual std::string getDescription() = 0;
};
