#ifndef _LIGHT_H_
#define _LIGHT_H_

class Light 
{
public:
    Light();
    virtual ~Light();

    virtual void on();
    virtual void off();
};

#endif
