#ifndef _DUCK_H_
#define _DUCK_H_


class FlyBehavior;
class QuackBehavior;

/* base duck class */
class Duck
{
public:
    // abstract class
    Duck();

    virtual ~Duck();

    virtual void setFlyBehavior(FlyBehavior* fb);

	virtual void setQuackBehavior(QuackBehavior* qb) ;

	virtual void display() = 0;
 
	virtual void performFly();
 
	virtual void performQuack();
 
	void swim() const;

private:
    FlyBehavior*     d_flyBehavior;
    QuackBehavior*   d_quackBehavior;

};


/* decoy duck */
class DecoyDuck : public Duck 
{
public:
	DecoyDuck();
    virtual ~DecoyDuck();

	virtual void display();
};

/* mallard duck */
class MallardDuck : public Duck 
{
public:
    MallardDuck();
    virtual ~MallardDuck();
 
	virtual void display();
};


/* model duck */
class ModelDuck : public Duck 
{
public:
	ModelDuck();
	virtual ~ModelDuck();

	virtual void display();
};

/* red head duck */
class RedHeadDuck : public  Duck 
{
public: 
	RedHeadDuck();
	virtual ~RedHeadDuck();
 
	virtual void display();
};

/* rubber duck */

class RubberDuck : public Duck 
{
public: 
	RubberDuck() ;
	virtual ~RubberDuck();
 
	virtual void display();
};

#endif
