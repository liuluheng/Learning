#include "CeilingFan.h"
#include "Command.h"

CeilingFanOnCommand::CeilingFanOnCommand(CeilingFan* fan)
    : d_ceilingFan(fan)
{

}

CeilingFanOnCommand::~CeilingFanOnCommand()
{

}

void
CeilingFanOnCommand::execute()
{
    d_ceilingFan->high();
}
