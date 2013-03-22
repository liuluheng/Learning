#ifndef _FLYBEHAVIOR_H_
#define _FLYBEHAVIOR_H_

class FlyBehavior
{
public:
    FlyBehavior();
    ~FlyBehavior()=0;

    virtual void fly()=0;
};

#endif
