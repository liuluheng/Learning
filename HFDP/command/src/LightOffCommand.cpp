#include "Command.h"
#include "Light.h"

LightOffCommand::LightOffCommand(Light* light)
    : d_light(light)
{

}

LightOffCommand::~LightOffCommand()
{

}

void
LightOffCommand::execute()
{
    d_light->off();
}


