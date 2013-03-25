
#ifndef _COMMAND_H_
#define _COMMAND_H_

class GarageDoor;
class Light;

class Command 
{
public:
    Command(){};
    virtual ~Command(){};

    virtual void execute() = 0;
};

class GarageDoorOpenCommand : public Command
{
public:
   GarageDoorOpenCommand(GarageDoor* door);  
   virtual ~GarageDoorOpenCommand();

   virtual void execute();
private:
    GarageDoor*         d_garageDoor;
};

class LightOffCommand : public Command
{
public:
    LightOffCommand(Light* light);
    virtual ~LightOffCommand();

    virtual void execute();
private:
    Light*          d_light;

};

class LightOnCommand : public Command
{
public:
    LightOnCommand(Light* light);
    virtual ~LightOnCommand();

    virtual void execute();
private:
    Light*          d_light;
};

#endif
