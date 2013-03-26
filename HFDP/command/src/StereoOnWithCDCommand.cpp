#include "Command.h"
#include "Stereo.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo* stereo)
    : d_stereo(stereo)
{

}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{

}

void
StereoOnWithCDCommand::execute()
{
    d_stereo->on();
    d_stereo->setCD();
    d_stereo->setVolume(11);
}

