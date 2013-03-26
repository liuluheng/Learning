#include "GarageDoor.h"
#include "Command.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor* door)
    : d_garageDoor(door)
{
    
}

GarageDoorUpCommand::~GarageDoorUpCommand()
{

}

void
GarageDoorUpCommand::execute()
{
    d_garageDoor->up();
}
