#include "Command.h"
#include "Hottub.h"

HottubOnCommand::HottubOnCommand(Hottub* hottub)
    : d_hottub(hottub)
{

}


HottubOnCommand::~HottubOnCommand()
{

}

void
HottubOnCommand::execute()
{
    d_hottub->on();
    d_hottub->heat();
    d_hottub->bubblesOn();
}
