#ifndef _GARAGEDOOR_H_
#define _GARAGEDOOR_H_

class GarageDoor 
{
public:
    GarageDoor();
    virtual ~GarageDoor();

    virtual void up();
    virtual void down();
    virtual void stop();
    virtual void lightOn();
    virtual void lightOff();

};

#endif
