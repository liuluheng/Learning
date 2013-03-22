
#include "Duck.h"
#include <stdio.h>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

Duck::Duck()
    : d_flyBehavior(0)
    , d_quackBehavior(0)
{
    printf("base duck ctor\n");
}

Duck::~Duck()
{
    printf("base duck dtor\n");
    if (d_flyBehavior)
        delete d_flyBehavior;
    if (d_quackBehavior)
        delete d_quackBehavior;
}

void 
Duck::setFlyBehavior(FlyBehavior* fb)
{
    d_flyBehavior = fb;
}

void 
Duck::setQuackBehavior(QuackBehavior* qb) 
{
    d_quackBehavior = qb;
}

void 
Duck::performFly() 
{
    d_flyBehavior->fly();
}

void
Duck::performQuack() 
{
    d_quackBehavior->quack();
}

void
Duck::swim() const
{
    printf("All ducks float, even decoys!\n");
}

