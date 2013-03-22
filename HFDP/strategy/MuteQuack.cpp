#include "QuackBehavior.h"
#include <stdio.h>

MuteQuack::MuteQuack()
{

}

MuteQuack::~MuteQuack()
{

}

void
MuteQuack::quack()
{
    printf("<< Silence >>\n");
}
