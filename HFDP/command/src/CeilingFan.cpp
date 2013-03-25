#include "CeilingFan.h"
#include <string>
#include <stdio.h>

CeilingFan::CeilingFan(const std::string& location)
    d_location(location)
    d_level(STOP)
{
    
}

CeilingFan::~CeilingFan()
{

}

void
CeilingFan::high()
{
    d_level = HIGH;
    printf("%s ceiling fan is on high\n", d_location.c_str());
}

void
CeilingFan::medium()
{
    d_level = MEDIUM;
    printf("%s ceiling fan is on medium\n", d_location.c_str());
}

void
CeilingFan::low()
{
    d_level = LOW;
    printf("%s ceiling fan is on low\n", d_location.c_str());
}

void
CeilingFan::off()
{
    d_level = STOP;
    printf("%s ceiling fan is off\n", d_location.c_str());
}

CeilingFan::SPEED
CeilingFan::getSpeed() const
{
    return d_level;
}

