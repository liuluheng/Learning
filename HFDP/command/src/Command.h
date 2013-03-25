
#ifndef _COMMAND_H_
#define _COMMAND_H_

class GarageDoor;
class Light;
class CeilingFan;
class GarageDoor;
class Hottub;
class Stereo;

class Command 
{
public:
    Command(){};
    virtual ~Command(){};

    virtual void execute() = 0;
};

class NoCommand : public Command
{
public:
    NoCommand(){}
    virtual ~NoCommand(){}
    
    virtual void execute(){ }
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

class GarageDoorUpCommand : public Command
{
public:
   GarageDoorUpCommand(GarageDoor* door);  
   virtual ~GarageDoorUpCommand();

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

class CeilingFanOffCommand : public Command
{
public:
    CeilingFanOffCommand(CeilingFan* fan);
    virtual ~CeilingFanOffCommand();

    virtual void execute();

private:
    CeilingFan*         d_ceilingFan;
};

class CeilingFanOnCommand : public Command
{
public:
    CeilingFanOnCommand(CeilingFan* fan);
    virtual ~CeilingFanOnCommand();

    virtual void execute();

private:
    CeilingFan*         d_ceilingFan;
};

class GarageDoorDownCommand : public Command
{
public:
    GarageDoorDownCommand(GarageDoor* door);
    virtual ~GarageDoorDownCommand();

    virtual void execute();
private:
    GarageDoor*         d_garageDoor;
};

class HottubOffCommand : public Command
{
public:
    HottubOffCommand(Hottub* hottub);
    virtual ~HottubOffCommand();
    
    virtual void execute();

private:
    Hottub*         d_hottub;
};

class HottubOnCommand : public Command
{
public:
    HottubOnCommand(Hottub* hottub);
    virtual ~HottubOnCommand();
    
    virtual void execute();

private:
    Hottub*         d_hottub;
};

class LivingroomLightOffCommand : public Command
{
public:
    LivingroomLightOffCommand(Light* light);
    virtual ~LivingroomLightOffCommand();

    virtual void execute();
private:
    Light*          d_light;
};

class LivingroomLightOnCommand : public Command
{
public:
    LivingroomLightOnCommand(Light* light);
    virtual ~LivingroomLightOnCommand();

    virtual void execute();
private:
    Light*              d_light;
};

class StereoOffCommand : public Command
{
public:
    StereoOffCommand(Stereo* stereo);
    virtual ~StereoOffCommand();

    virtual void execute();
private:
    Stereo*         d_stereo;
};

class StereoOnWithCDCommand : public Command
{
public:
    StereoOnWithCDCommand(Stereo* stereo);
    virtual ~StereoOnWithCDCommand();

    virtual void execute();
private:
    Stereo*         d_stereo;

};



#endif
