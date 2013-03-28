#ifndef _POPCORNPOPPER_H_
#define _POPCORNPOPPER_H_

#include <string>

class PopcornPopper 
{
public:
	PopcornPopper(const std::string& description) 
		d_description(description)
    {
	}
 
	void on() 
    {
        std::cout << d_description << " on" << std::endl;
	}
 
	void off() 
    {
        std::cout << d_description << " off"  << std::endl;
	}

	void pop() 
    {
	     std::cout << d_description << " popping popcorn!" << std::endl;
	}
 

    std::string toString() 
    {
        return d_description;
    }

private:
    std::string         d_description;
};
#endif
