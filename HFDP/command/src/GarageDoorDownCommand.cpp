#include "GarageDoor.h"
#include "Command.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor* door)
    : d_garageDoor(door)
{
    
}

GarageDoorDownCommand::~GarageDoorDownCommand()
{

}

void
GarageDoorDownCommand::execute()
{
    d_garageDoor->up();
}
