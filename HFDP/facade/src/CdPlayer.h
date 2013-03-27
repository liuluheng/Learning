#ifndef _CDPLAYER_H_
#define _CDPLAYER_H_

#include <string>
#include <stdio.h>

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
                    d_description.c_str(), currentTrack )
		} else {
			d_currentTrack = track;
			printf("%s playing track %d\n" , d_description.c_str(), currentTrack);
		}
	}

	void stop() {
		currentTrack = 0;
		printf(description + " stopped");
	}
 
	void pause() {
		printf(description + " paused \"" + title + "\"");
	}
 
	std::string tostd::string() {
		return description;
	}
private:
    std::string         d_description;
	int                 d_currentTrack;
	Amplifier*          d_amplifier;
    std::string         d_title;
};

#endif
