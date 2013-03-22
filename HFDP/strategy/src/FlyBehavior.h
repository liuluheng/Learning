#ifndef _FLYBEHAVIOR_H_
#define _FLYBEHAVIOR_H_

class FlyBehavior
{
public:
    FlyBehavior();

    virtual ~FlyBehavior()=0;

    virtual void fly()=0;
};

class FlyNoWay : public FlyBehavior
{
public:
    FlyNoWay();
    virtual ~FlyNoWay();

    virtual void fly();
};

class FlyRocketPowered : public FlyBehavior
{
public:
    FlyRocketPowered();
    virtual ~FlyRocketPowered();

    virtual void fly();
};

class FlyWithWings : public FlyBehavior 
{
public:
    FlyWithWings();
    ~FlyWithWings();

	virtual void fly() ;
};

#endif
