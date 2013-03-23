#ifndef _DISPLAYELEMENT_H_
#define _DISPLAYELEMENT_H_

class DisplayElement 
{
public:
    DisplayElement();
    virtual ~DisplayElement();

    virtual void display() = 0;
};

#endif
