
#include <stdio.h>
#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"


RubberDuck::RubberDuck() 
{
    printf("RubberDuck ctor\n");
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new Squeak());
}

RubberDuck::~RubberDuck() 
{
    printf("RubberDuck ctor\n");
}

void 
RubberDuck::display()
{
    printf("I'm a rubber duckie\n");
}

