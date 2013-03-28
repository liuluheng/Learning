#ifndef _TUNER_H_
#define _TUNER_H_

#include <iostream>
#include <string>

class Tuner 
{
public:
    Tuner(const std::string& desc, Amplifier* amp)
        : d_description(desc)
        , d_amplifier(amp)
        , d_frequency(0)
    {}

    void on()
    {
        std::cout << d_description << " on" << endl;
    }

    void off()
    {
        std::cout << d_description << " off" << endl;
    }

    void setFrequency(const double freq)
    {
        cout << d_description << " setting frequency to  " << freq << std::endl;
        d_frequency = freq;
    }

    void setAm()
    {
        cout << d_description << " setting AM mode" << std::endl;
    }

    void setFm()
    {
        cout << d_description << " setting FM mode" << std::endl;
    }

    std::string toString()
    {
        return d_description;
    }

private:
    std::string         d_description;
    Amplifier*          d_amplifier;
    double              d_frequency;
};

#endif
