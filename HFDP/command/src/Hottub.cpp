#include "Hottub.h"
#include <stdio.h>

Hottub::Hottub() 
{

}

Hottub::~Hottub() 
{

}

void 
Hottub::on() 
{
    d_on = true;
}

void 
Hottub::off() 
{
    d_on = false;
}

void
Hottub::bubblesOn() 
{
    if (d_on) 
        printf("Hottub is bubbling!\n");
}

void
Hottub::bubblesOff() 
{
    if (d_on) 
        printf("Hottub is not bubbling\n");
}

void 
Hottub::jetsOn() 
{
    if (d_on) 
        printf("Hottub jets are on\n");
}

void 
Hottub::jetsOff()
{
    if (d_on) 
        printf("Hottub jets are off\n");
}

void 
Hottub::setTemperature(int temperature) 
{
    d_temperature = temperature;
}

void 
Hottub::heat() {
    d_temperature = 105;
    printf("Hottub is heating to a steaming 105 degrees\n");
}

void 
Hottub::cool() 
{
    d_temperature = 98;
    printf("Hottub is cooling to 98 degrees\n");
}
