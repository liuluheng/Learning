#include "GarageDoor.h"
#include "Command.h"

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor* door)
    : d_garageDoor(door)
{
    
}

GarageDoorOpenCommand::~GarageDoorOpenCommand()
{

}

void
GarageDoorOpenCommand::execute()
{
    d_garageDoor->up();
}
