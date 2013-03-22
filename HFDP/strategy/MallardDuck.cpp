#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <stdio.h>

MallardDuck::MallardDuck() 
{
    printf("MallardDuck ctor\n");
    setQuackBehavior(new Quack());
    setFlyBehavior(new FlyWithWings());
}


MallardDuck::~MallardDuck() 
{
    printf("MallardDuck dtor\n");
}

void
MallardDuck::display()
{
    printf("I'm a real Mallard duck\n");
}
