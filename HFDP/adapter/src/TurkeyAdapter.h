#ifndef _TURKEYADAPTER_H_
#define _TURKEYADAPTER_H_

#include "Duck.h"

class TurkeyAdapter : public Duck
{
public:
    TurkeyAdapter(Turkey* turkey)
        : d_turkey(trukey)
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
}

#endif
