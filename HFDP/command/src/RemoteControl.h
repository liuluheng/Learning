#ifndef _REMOTECONTROL_H_
#define _REMOTECONTROL_H_

#include <vector>
#include "Command.h"

class RemoteControl 
{
public:
    typedef std::vector<Command*>       CmdVec;
public:
    RemoteControl();
    virtual ~RemoteControl();

    void setCommand(int slot, Command* onCmd, Command* offCmd);
    void onButtonWasPushed(int slot);
    void offButtonWasPushed(int slot);
    void print();

private:
    CmdVec              d_onCommands;
    CmdVec              d_offCommands;
};

#endif
