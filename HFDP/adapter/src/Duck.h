#ifndef _DUCK_H_
#define _DUCK_H_

#include <stdio.h>

class Duck 
{
public:
    Duck(){};
    virtual ~Duck(){};

    virtual void quack()=0{};
    virtual void fly()=0{};

};

class MallardDuck : public Duck
{
public:
    virtual void quack()
    {
        printf("Quack\n");
    }

    virtual void fly()
    {
        printf("I'm flying\n");
    }
};

#endif
