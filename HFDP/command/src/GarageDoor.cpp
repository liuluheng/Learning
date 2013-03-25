#include "GarageDoor.h"
#include <stdio.h>


GarageDoor::GarageDoor()
{

}

GarageDoor::~GarageDoor()
{

}

void
GarageDoor::up()
{
    printf("Garage Door is Open\n");
}

void 
GarageDoor::down()
{
    printf("Garage Door is Closed\n");
}

void
GarageDoor::stop()
{
    printf("Garage Door is Stopped");
}

void 
GarageDoor::lightOn()
{
    printf("Garage light is on");
}

void 
GarageDoor::lightOff()
{
    printf("Garage light is off");
}

