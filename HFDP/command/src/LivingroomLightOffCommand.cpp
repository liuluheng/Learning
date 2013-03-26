#include "Command.h"
#include "Light.h"

LivingroomLightOffCommand::LivingroomLightOffCommand(Light* light)
    : d_light(light)
{

}

LivingroomLightOffCommand::~LivingroomLightOffCommand()
{

}

void
LivingroomLightOffCommand::execute()
{
    d_light->off();
}


