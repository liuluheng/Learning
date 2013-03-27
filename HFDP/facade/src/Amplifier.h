#ifndef _AMPLIFIER_H_
#define _AMPLIFIER_H_

#include <string>
#include <stdio.h>

class Amplifier 
{
public:
    Amplifier(const std::string& desc)
        : d_description(desc)
    {}
    ~Amplifier(){};

	void on() 
    {
		printf("%s on\n", d_description.c_str());
	}
 
	void off() 
    {
		printf("%s off\n", d_description.c_str());
	}
 
	void setStereoSound()
    {
		printf("%s stereo mode on\n", d_description.c_str());
	}
 
	void setSurroundSound() 
    {
		printf("%s surround sound on (5 speakers, 1 subwoofer)\n", 
                 d_description.c_str());
	}
 
	void setVolume(int level) 
    {
        printf("%s setting volume to %d\n", d_description.c_str(), level);
	}

	void setTuner(Tuner* tuner) 
    {
		printf("%s setting tuner to %s\n",
                d_description.c_str(), d_dvd->toString().c_str());
		d_tuner = tuner;
	}
  
	void setDvd(DvdPlayer* dvd) {
		printf("%s setting DVD to %s\n",
                d_description.c_str(), d_dvd->toString().c_str());
		d_dvd = dvd;
	}
 
	void setCd(CdPlayer* cd) {
		printf("%s setting CD to %s\n",
                d_description.c_str(), d_cd->toString().c_str());
		d_cd = cd;
	}
 
    std::string toString() {
		return description;
	}
private:
    std::string         d_description;
    Tuner*              d_tuner; 
    DvdPlayer*          d_dvd;
    CdPlayer*           d_cd;
};

#endif
