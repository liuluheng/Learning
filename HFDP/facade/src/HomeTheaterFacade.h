#ifndef _HOMETHEATERFACADE_H_
#define _HOMETHEATERFACADE_H_

#include <string>
#include <iostream>
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "TheaterLights.h"
#include "PopcornPopper.h"
#include "Projector.h"
#include "Screen.h"


class HomeTheaterFacade 
{
public:
	HomeTheaterFacade(Amplifier* amp, 
				 Tuner* tuner, 
				 DvdPlayer* dvd, 
				 CdPlayer* cd, 
				 Projector* projector, 
				 Screen* screen,
				 TheaterLights* lights,
				 PopcornPopper* popper) 
        : d_amp(amp)
		, d_tuner(tuner)
		, d_dvd(dvd)
		, d_cd(cd)
		, d_projector(projector)
		, d_screen(screen)
		, d_lights(lights)
		, d_popper(popper)
    {
	}

	void watchMovie(const std::string& movie) 
    {
        std::cout << "Get ready to watch a movie..." << std::endl;
		d_popper->on();
		d_popper->pop();
		d_lights->dim(10);
		d_screen->down();
		d_projector->on();
		d_projector->wideScreenMode();
		d_amp->on();
		d_amp->setDvd(d_dvd);
		d_amp->setSurroundSound();
		d_amp->setVolume(5);
		d_dvd->on();
		d_dvd->play(movie);
	}
 
 
	void endMovie() {
        std::cout << "Shutting movie theater down..." << std::endl;
		d_popper->off();
		d_lights->on();
		d_screen->up();
		d_projector->off();
		d_amp->off();
		d_dvd->stop();
		d_dvd->eject();
		d_dvd->off();
	}

	void listenToCd(const std::string& cdTitle) {
        std::cout << "Get ready for an audiopile experence..." << std::endl;
		d_lights->on();
		d_amp->on();
		d_amp->setVolume(5);
		d_amp->setCd(d_cd);
		d_amp->setStereoSound();
		d_cd->on();
		d_cd->play(cdTitle);
	}

	void endCd() {
        std::cout << "Shutting down CD..." << std::endl;
		d_amp->off();
		d_amp->setCd(d_cd);
		d_cd->eject();
		d_cd->off();
	}

	void listenToRadio(double frequency) {
        std::cout << "Tuning in the airwaves..." << std::endl;
		d_tuner->on();
		d_tuner->setFrequency(frequency);
		d_amp->on();
		d_amp->setVolume(5);
		d_amp->setTuner(d_tuner);
	}

	void endRadio() {
        std::cout << "Shutting down the tuner..." << std::endl;
		d_tuner->off();
		d_amp->off();
	}
private:
    Amplifier*          d_amp;
    Tuner*              d_tuner;
    DvdPlayer*          d_dvd;
    CdPlayer*           d_cd;
    Projector*          d_projector;
    TheaterLights*      d_lights;
    Screen*             d_screen;
    PopcornPopper*      d_popper;
};

#endif
