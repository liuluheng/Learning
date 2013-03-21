

class RubberDuck : Duck 
{
public: 
	RubberDuck() 
    {
		d_flyBehavior = new FlyNoWay();
		d_quackBehavior = new Squeak();
	}
 
	virtual void display() {
		printf("I'm a rubber duckie\n");
	}
};

