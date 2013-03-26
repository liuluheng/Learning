#ifndef _TURKEYADAPTER_H_
#define _TURKEYADAPTER_H_

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck
{
public:
    TurkeyAdapter(Turkey* turkey)
        : d_turkey(turkey)
    {
    }

    ~TurkeyAdapter(){}

    virtual void quack()
    {
        d_turkey->gobble();
    }
    
    virtual void fly()
    {
        for (int i = 0; i < 5; i++)
            d_turkey->fly();
    }

private:
    Turkey*         d_turkey;
};

#endif
