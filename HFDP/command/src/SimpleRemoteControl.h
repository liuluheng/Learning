
#ifndef _SIMPLEREMOTECONTROL_H_
#define _SIMPLEREMOTECONTROL_H_

class Command;

class SimpleRemoteControl 
{
public:
    SimpleRemoteControl();
    virtual ~SimpleRemoteControl();

    virtual void setCommand(Command* cmd);
    virtual void buttonWasPressed();

private:
    Command*   d_cmd;
};

#endif
