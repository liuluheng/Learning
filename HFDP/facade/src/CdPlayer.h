#ifndef _CDPLAYER_H_
#define _CDPLAYER_H_

#include <string>
#include <stdio.h>

class Amplifier;

class CdPlayer 
{
public:
	CdPlayer(std::string description, Amplifier* amplifier) 
		: d_description(description)
		, d_amplifier(amplifier)
    {}
 
	void on() {
		printf("%s on\n", d_description.c_str());
	}
 
	void off() {
		printf("%s off\n", d_description.c_str());
	}

	void eject() {
		d_title.clear();
		printf("%s eject\n", d_description.c_str());
	}
 
	void play(const std::string& title) {
		d_title = title;
		d_currentTrack = 0;
		printf("%s playing \"%s\"" , d_description.c_str(), d_title.c_str());
	}

	void play(int track) {
		if (d_title.empty()) {
			printf("%s can't play track %d, no cd inserted\n", 
                    d_description.c_str(), d_currentTrack );
		} else {
			d_currentTrack = track;
			printf("%s playing track %d\n" , d_description.c_str(), d_currentTrack);
		}
	}

	void stop() {
		d_currentTrack = 0;
		printf("%s stopped\n", d_description.c_str());
	}
 
	void pause() {
		printf("%s paused \"%s\"\n", d_description.c_str(), d_title.c_str());
	}
 
	std::string toString() 
    {
		return d_description;
	}
private:
    std::string         d_description;
	int                 d_currentTrack;
	Amplifier*          d_amplifier;
    std::string         d_title;
};

#endif
