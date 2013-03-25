#include "Stereo.h"
#include <string>
#include <stdio.h>

Stereo::Stereo(const std::string& location)
    : d_location(location)
{

}

Stereo::~Stereo()
{

}

void
Stereo::on()
{
    printf("%s stereo is on\n", d_location.c_str());
}

void 
Stereo::off()
{
    printf("%s stereo is off\n", d_location.c_str());
}

void 
Stereo::setCD()
{
    printf("%s stereo is st for CD input\n", d_location.c_str());
}

void
Stereo::setDVD()
{
    printf("%s stereo is st for DVD input\n", d_location.c_str());
}

void 
Stereo::setRadio()
{
   printf("%s stereo is set for Radio\n", d_location.c_str()); 
}

void
Stereo::setVolume(int volume)
{
    printf("%s Sterero volume set to %d\n", d_location.c_str(), volume);
}

