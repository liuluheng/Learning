
#include "Command.h"
#include "SimpleRemoteControl.h"
#include "RemoteControl.h"
#include "Light.h"
#include "CeilingFan.h"
#include "GarageDoor.h"
#include "Stereo.h"


int main(int argc, const char *argv[])
{
    // 1st test
    SimpleRemoteControl* remote = new SimpleRemoteControl();
    Light* light = new Light();
    GarageDoor* garageDoor = new GarageDoor();
    LightOnCommand* lightOn = new LightOnCommand(light);
    GarageDoorOpenCommand* garageOpen = new GarageDoorOpenCommand(garageDoor);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();
    remote->setCommand(garageOpen);
    remote->buttonWasPressed();


    // 2nd test
    RemoteControl* remoteControl = new RemoteControl();

    Light* livingRoomLight = new Light("Living Room");
    Light* kitchenLight = new Light("Kitchen");
    CeilingFan* ceilingFan= new CeilingFan("Living Room");
    // GarageDoor* garageDoor = new GarageDoor("");
    Stereo* stereo = new Stereo("Living Room");

    LightOnCommand* livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand* livingRoomLightOff = new LightOffCommand(livingRoomLight);
    LightOnCommand* kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand* kitchenLightOff = new LightOffCommand(kitchenLight);

    CeilingFanOnCommand* ceilingFanOn = new CeilingFanOnCommand(ceilingFan);
    CeilingFanOffCommand* ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

    GarageDoorUpCommand* garageDoorUp = new GarageDoorUpCommand(garageDoor);
    GarageDoorDownCommand* garageDoorDown = new GarageDoorDownCommand(garageDoor);

    StereoOnWithCDCommand* stereoOnWithCD = new StereoOnWithCDCommand(stereo);
    StereoOffCommand*  stereoOff = new StereoOffCommand(stereo);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, ceilingFanOn, ceilingFanOff);
    remoteControl->setCommand(3, stereoOnWithCD, stereoOff);

    remoteControl->print();

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPushed(1);
    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPushed(2);
    remoteControl->onButtonWasPushed(3);
    remoteControl->offButtonWasPushed(3);

}
