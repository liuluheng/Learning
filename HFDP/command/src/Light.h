#ifndef _LIGHT_H_
#define _LIGHT_H_

#include <string>

class Light 
{
public:
    Light(const std::string& location = "");
    virtual ~Light();

    virtual void on();
    virtual void off();
private:
    std::string         d_location;
};

#endif
