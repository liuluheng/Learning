#ifndef _CEILINGFAN_H_
#define _CEILINGFAN_H_

#include <string>

class CeilingFan 
{
public:
    enum SPEED
    {
        STOP = -1,
        LOW = 0, 
        MEDIUM = 1,
        HIGH = 2
    };

public:
    CeilingFan(const std::string& location);
    ~CeilingFan();

    void high();
    void medium();
    void low();
    void off();
    SPEED getSpeed() const;

private:
    std::string         d_location;
    SPEED               d_level;
};

#endif
