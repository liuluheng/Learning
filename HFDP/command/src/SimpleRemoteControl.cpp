#include "SimpleRemoteControl.h"
#include "Command.h"

SimpleRemoteControl::SimpleRemoteControl()
{
    
}

SimpleRemoteControl::~SimpleRemoteControl()
{

}

void
SimpleRemoteControl::setCommand(Command* cmd)
{
    d_cmd = cmd;
}

void
SimpleRemoteControl::buttonWasPressed()
{
    d_cmd->execute();
}
