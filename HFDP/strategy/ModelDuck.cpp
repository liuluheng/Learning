#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <stdio.h>

ModelDuck::ModelDuck()
{
    printf("ModelDuck ctor\n");
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new Quack());
}

ModelDuck::~ModelDuck()
{
    printf("ModelDuck dtor\n");
}

void
ModelDuck::display()
{
    printf("I'm a model duck\n");
}


