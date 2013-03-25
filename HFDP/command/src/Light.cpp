#include "Light.h"
#include <stdio.h>
#include <string>

Light::Light(const std::string& location)
    : d_location(location)
{
    
}

Light::~Light()
{

}

void
Light::on() 
{
    printf("%s Light is on\n", d_location.c_str());
}

void
Light::off() 
{
    printf("%s Light is off\n", d_location.c_str());
}

