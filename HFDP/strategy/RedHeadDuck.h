

class RedHeadDuck : public  Duck 
{
 
	RedHeadDuck() 
    {
		d_flyBehavior = new FlyWithWings();
		d_quackBehavior = new Quack();
	}
 
	virtual void display() 
    {
		printf("I'm a real Red Headed duck\n");
	}
};
