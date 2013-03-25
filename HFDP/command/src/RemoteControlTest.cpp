#include "SimpleRemoteControl.h"
#include "Command.h"
#include "Light.h"
#include "GarageDoor.h"


int main(int argc, const char *argv[])
{
    SimpleRemoteControl* remote = new SimpleRemoteControl();
    Light* light = new Light();
    GarageDoor* garageDoor = new GarageDoor();
    LightOnCommand* lightOn = new LightOnCommand(light);
    GarageDoorOpenCommand* garageOpen = new GarageDoorOpenCommand(garageDoor);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();
    remote->setCommand(garageOpen);
    remote->buttonWasPressed();
    return 0;
}
