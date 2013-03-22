
#include "Duck.h"
#include <stdio.h>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

Duck::Duck()
{

}

Duck::~Duck()
{
    if (d_flyBehavior)
        delete d_flyBehavior;
    if (d_quackBehavior)
        delete d_quackBehavior;
}

void 
Duck::setFlyBehavior(const FlyBehavior* fb)
{
    d_flyBehavior = fb;
}

void 
Duck::setQuackBehavior(const QuackBehavior* qb) 
{
    d_quackBehavior = qb;
}

void 
Duck::performFly() const
{
    d_flyBehavior->fly();
}

void
Duck::performQuack()  const
{
    d_quackBehavior->quack();
}

Duck::swim() const
{
    printf("All ducks float, even decoys!\n");
}

