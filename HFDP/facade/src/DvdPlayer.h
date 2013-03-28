#ifndef _DVDPLAYER_H_
#define _DVDPLAYER_H_

#include <iostream>
#include <string>
class Amplifier;

class DvdPlayer 
{
public:
    DvdPlayer();

	DvdPlayer(const std::string& description, Amplifier* amplifier) 
        : d_description(description)
        , d_amplifier(amplifier)
    {
	}
 
	void on() {
        std::cout << d_description <<  " on" << std::endl;
	}
 
	void off() 
    {
        std::cout << d_description <<  " off" << std::endl;
	}

    void eject() 
    {
		d_movie.clear();
        std::cout << d_description <<  " eject" << std::endl;
    }
 
	void play(const std::string& movie) 
    {
		d_movie = movie;
		d_currentTrack = 0;
        std::cout << d_description <<  " playing \"" << movie << "\"" << std::endl;
	}

	void play(int track) 
    {
		if (d_movie.empty())
        {
            std::cout << d_description << " can't play track "
                 << track <<  " no dvd inserted" << std::endl;
		} else {
			d_currentTrack = track;
            std::cout << d_description << " playing track " 
                      << d_currentTrack << " of \"" 
                      << d_movie << "\"" << std::endl;
		}
	}

	void stop() {
		d_currentTrack = 0;
        std::cout << d_description << " stopped \""
                  << d_movie << "\"" << std::endl;
	}
 
	void pause() {
        std::cout << d_description << " paused \"" << d_movie << "\"" << std::endl;
	}

	void setTwoChannelAudio() {
        std::cout << d_description << " set two channel audio" << std::endl;
	}
 
	void setSurroundAudio() {
        std::cout << d_description << " set surround audio" << std::endl;
	}
 
    std::string toString() 
    {
		return d_description;
	}
private:
    std::string         d_description;
    int                 d_currentTrack;
    Amplifier*          d_amplifier;
    std::string         d_movie;
};

#endif
