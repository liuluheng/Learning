#ifndef _THEATERLIGHTS_H_
#define _THEATERLIGHTS_H_

#include <string>
#include <iostream>

class TheaterLights 
{
public:
	TheaterLights(const std::string& description) {
		this.d_description = description;
	}
  
	void on() {
		std::cout << d_description << " on" << std::endl;
	}
  
	void off() {
		std::cout << d_description << " off" << std::endl;
	}
  
	void dim(int level) {
		std::cout << d_description << " dimming to " << level  << "%" << std::endl;
	}

    std::string toString() {
        return d_description;
    }

private:
    std::string         d_description;
};

#endif
