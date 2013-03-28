#ifndef _TUNER_H_
#define _TUNER_H_

#include <iostream>
#include <string>

class Amplifier;

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
        std::cout << d_description << " on" << std::endl;
    }

    void off()
    {
        std::cout << d_description << " off" << std::endl;
    }

    void setFrequency(const double freq)
    {
        std::cout << d_description << " setting frequency to  " << freq << std::endl;
        d_frequency = freq;
    }

    void setAm()
    {
        std::cout << d_description << " setting AM mode" << std::endl;
    }

    void setFm()
    {
        std::cout << d_description << " setting FM mode" << std::endl;
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
