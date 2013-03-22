#include "Quack.h"
#include "FlyWithWings.h"
#include "MallardDuck.h"
#include <stdio.h>

MallardDuck::MallardDuck() 
{
    d_quackBehavior = new Quack();
    d_flyBehavior = new FlyWithWings();
}


void
MallardDuck::display()
{
    printf("I'm a real Mallard duck\n");
}
