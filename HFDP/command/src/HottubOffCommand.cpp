#include "Command.h"
#include "Hottub.h"

HottubOffCommand::HottubOffCommand(Hottub* hottub)
    : d_hottub(hottub)
{

}


HottubOffCommand::~HottubOffCommand()
{

}

void
HottubOffCommand::execute()
{
    d_hottub->cool();
    d_hottub->off();
}
