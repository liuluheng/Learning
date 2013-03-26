#ifndef _TV_H_
#define _TV_H

#include <string>

class TV 
{
public:
    TV(const std::string& location);
    virtual ~TV();

    void on();
    void off();
    void setInputChannel();

private:
    std::string d_location;
    int         d_channel;
};

#endif
