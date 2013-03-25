#include <stdio.h>
#include <typeinfo>
#include <iostream>
#include "RemoteControl.h"
#include "Command.h"



RemoteControl::RemoteControl()
    : d_onCommands()
    , d_offCommands()
{
    Command* noCmd = new NoCommand();
    for (size_t i =0; i < 7; i++)
    {
        d_onCommands.push_back(noCmd);
        d_offCommands.push_back(noCmd);
    }
}

RemoteControl::~RemoteControl()
{

}

void
RemoteControl::setCommand(int slot, Command* onCommand, Command* offCommand) 
{
    d_onCommands[slot] = onCommand;
    d_offCommands[slot] = offCommand;
}

void
RemoteControl::onButtonWasPushed(int slot) 
{
    d_onCommands[slot]->execute();
}

void
RemoteControl::offButtonWasPushed(int slot) 
{
    d_offCommands[slot]->execute();
}

void
RemoteControl::print() 
{
    std::cout << "\n------ Remote Control -------\n";
    for (size_t i = 0; i < d_onCommands.size(); i++) 
    {
        std::cout << "[slot " << i << "]" << typeid(d_onCommands[i]).name()
                  << "    " << typeid(d_offCommands[i]).name() << std::endl;
    }
}

