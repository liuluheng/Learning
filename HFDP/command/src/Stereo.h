#ifndef _STEREO_H_
#define _STEREO_H_

#include <string>

class Stereo 
{
public:
    Stereo(const std::string& location);
    virtual ~Stereo();

    void on();
    void off();
    void setCD();
    void setDVD();
    void setRadio();
    void setVolume(int volume);

private:
    std::string d_location;
};

#endif
