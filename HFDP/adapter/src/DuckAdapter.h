#ifndef _DUCKADAPTER_H_
#define _DUCKADAPTER_H_

#include "Turkey.h"

class DuckAdapter : public Turkey
{
public:
    DuckAdapter(Duck* duck)
        : d_duck(duck)
    {}

    virtual ~DuckAdapter(){}

    virtual void gobble()
    {
        d_duck->quack();
    }

    virtual void fly()
    {
        for (int i = 0; i < 5; i++)
            d_duck->fly();
    }

private:
    Duck*           d_duck;
};

#endif
