#ifndef _TURKEY_H_
#define _TURKEY_H_

#include <stdio.h>

class Turkey 
{
public:
    Turkey(){}
    virtual ~Turkey(){}

    virtual void gobble() = 0;
    virtual void fly()= 0;

};

class WildTurkey : public Turkey
{
public:
    WildTurkey()
    {}

    virtual ~WildTurkey(){}

    virtual void gobble()
    {
        printf("Gobble gobble\n");
    }

    virtual void fly()
    {
        printf("I'm flying a short distance\n");
    }
};

#endif
