#include "Stereo.h"
#include "Command.h"


StereoOffCommand::StereoOffCommand(Stereo* stereo)
    : d_stereo(stereo)
{
    
}

StereoOffCommand::~StereoOffCommand()
{
    
}

void
StereoOffCommand::execute()
{
    d_stereo->off();
}
