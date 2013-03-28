#ifndef _PROJECTOR_H_
#define _PROJECTOR_H_

class Projector 
{
public:
	Projector(const std::string& description, DvdPlayer* dvdPlayer)
        : d_description(description)
        , d_dvdPlayer(dvdPlayer)
    {
	}
 
	void on() {
		std::cout << d_description << " on" << std::endl;
	}
 
	void off() {
		std::cout << d_description << " off" << std::endl;
	}

	void wideScreenMode() {
		std::cout << description << " in widescreen mode (16x9 aspect ratio)" << std::endl;
	}

	void tvMode() {
		std::cout << d_description << " in tv mode (4x3 aspect ratio)" << std::endl;
	}

    std::string toString() {
        return d_description;
    }

private:
    std::string         d_description;
	DvdPlayer*          d_dvdPlayer;
};


#endif
