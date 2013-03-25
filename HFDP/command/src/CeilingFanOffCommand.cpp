#include "Command.h"
#include "CeilingFan.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan* fan)
    : d_ceilingFan(fan)
{
    
}

CeilingFanOffCommand::~CeilingFanOffCommand()
{

}

void 
CeilingFanOffCommand::execute()
{
    d_ceilingFan->off();
}

