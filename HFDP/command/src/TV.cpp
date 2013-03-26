#include "TV.h"
#include <stdio.h>
#include <string>

TV::TV(const std::string& location)
    : d_location(location)
{

}

TV::~TV()
{

}

void
TV::on()
{
   printf("TV is on\n"); 
}

void
TV::off()
{
    printf("TV is off\n");
}


void
TV::setInputChannel()
{
   d_channel = 3;
   printf("Channel is set for VCR\n");
}

