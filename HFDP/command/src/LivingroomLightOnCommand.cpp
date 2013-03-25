#include "Command.h"
#include "Light.h"

LivingroomLightOnCommand::LivingroomLightOnCommand(Light* light)
    : d_light(light)
{

}

LivingroomLightOnCommand::~LivingroomLightOnCommand()
{

}

void
LivingroomLightOnCommand::execute()
{
    d_light->on();
}


