#include "QuackBehavior.h"

class Quack : public QuackBehavior
{
public:
	virtual void quack() 
    {
		printf("Quack\n");
	}
}
