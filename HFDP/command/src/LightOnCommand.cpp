#include "Command.h"
#include "Light.h"


LightOnCommand::LightOnCommand(Light* light)
    : d_light(light)
{
}

LightOnCommand::~LightOnCommand()
{

}

void 
LightOnCommand::execute()
{
    d_light->on();
}
