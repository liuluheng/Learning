#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <iostream>
#include <string>

class Screen 
{
public:
	Screen(const std::string& description) 
		: d_description(description)
    {
	}
 
	void up() {
        std::cout << d_description << " going up" << std::endl;
	}
 
	void down() {
        std::cout << d_description << " going down" << std::endl;
	}
 

    std::string toString() {
        return d_description;
    }

private:
    std::string         d_description;
};


#endif  
