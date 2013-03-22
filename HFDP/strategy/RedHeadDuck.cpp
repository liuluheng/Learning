
#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <stdio.h>


RedHeadDuck::RedHeadDuck()
{
    printf("RedHeadDuck ctor\n");
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}


RedHeadDuck::~RedHeadDuck()
{
    printf("RedHeadDuck dtor\n");
}

void 
RedHeadDuck::display() 
{
    printf("I'm a real Red Headed duck\n");
}
