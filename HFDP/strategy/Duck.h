#ifndef _DUCK_H_
#define _DUCK_H_


class FlyBehavior;
class QuackBehavior;

class Duck
{
public:
    // abstract class
    Duck();

    ~Duck() = 0;

    virtual void setFlyBehavior(const FlyBehavior fb);

	virtual void setQuackBehavior(const QuackBehavior qb) ;

	virtual void display() const = 0;
 
	virtual void performFly() const;
 
	virtual void performQuack()  const;
 
	void swim() const;

private:
    FlyBehavior*     d_flyBehavior;
    QuackBehavior*   d_quackBehavior;

};



#endif
