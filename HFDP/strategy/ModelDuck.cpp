#include <stdio.h>
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"

ModelDuck::ModelDuck
{
    d_flyBehavior = new FlyNoWay();
    d_quackBehavior = new Quack();
}

ModelDuck::display()
{
    printf("I'm a model duck\n");
}


