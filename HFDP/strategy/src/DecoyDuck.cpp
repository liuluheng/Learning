
#include <stdio.h>
#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

DecoyDuck::DecoyDuck()
{
    printf("DecoyDuck ctor\n");
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}

DecoyDuck::~DecoyDuck()
{
    printf("DecoyDuck dtor\n");
}

void
DecoyDuck::display()
{
    printf("I'm a duck Decoy\n");
}  

