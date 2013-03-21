
#include <stdio.h>
#include "Duck.h"
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

DecoyDuck::DecoyDuck():
{
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}


DecoyDuck::display()
{
    printf("I'm a duck Decoy\n");
}  
