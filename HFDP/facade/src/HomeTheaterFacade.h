#ifndef _HOMETHEATERFACADE_H_
#define _HOMETHEATERFACADE_H_

#include <string>
#include <iostream>

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
		d_amp->setDvd(dvd);
		d_amp->setSurroundSound();
		d_amp->setVolume(5);
		d_dvd->on();
		d_dvd->play(movie);
	}
 
 
	void endMovie() {
        std::cout << "Shutting movie theater down..." << std::endl;
		popper->off();
		lights->on();
		screen->up();
		projector->off();
		amp->off();
		dvd->stop();
		dvd->eject();
		dvd->off();
	}

	void listenToCd(String cdTitle) {
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
		cout << "Shutting down CD..." << endl;
		d_amp->off();
		d_amp->setCd(cd);
		d_cd->eject();
		d_cd->off();
	}

	void listenToRadio(double frequency) {
        std::cout << "Tuning in the airwaves..." << std::endl;
		d_tuner->on();
		d_tuner->setFrequency(frequency);
		d_amp->on();
		d_amp->setVolume(5);
		d_amp->setTuner(tuner);
	}

	void endRadio() {
        std::cout << "Shutting down the tuner..." << endl;
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
