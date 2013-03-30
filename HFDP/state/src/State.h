#ifndef _STATE_H_
#define _STATE_H_

#include <string>
#include "GumballMachine.h" 

class State 
{
public:
    State(){}
    virtual ~State(){}

	virtual void insertQuarter() = 0;
	virtual void ejectQuarter() = 0;
	virtual void turnCrank() = 0;
	virtual void dispense() = 0;
    virtual void toString()
    {
        return "base state";
    }
};

class HasQuarterState : public State
{
public:
    HasQuarterState(GumballMachine* mac)
        , d_machine(mac)
    {}

    virtual ~HasQuarterState(){}

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
    virtual std::string toString();

private:
    GumballMachine*         d_machine
};

class NoQuarterState : public State
{
public:
    NoQuarterState(GumballMachine* mac)
        , d_machine(mac)
    {}

    virtual ~NoQuarterState(){}

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
    virtual std::string toString();

private:
    GumballMachine*         d_machine
};


class SoldOutState : public State
{
public:
    SoldOutState(GumballMachine* mac)
        , d_machine(mac)
    {}

    virtual ~SoldOutState(){}

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
    virtual std::string toString();

private:
    GumballMachine*         d_machine
};


class SoldState : public State
{
public:
    SoldState(GumballMachine* mac)
        , d_machine(mac)
    {}

    virtual ~SoldState(){}

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
    virtual std::string toString();

private:
    GumballMachine*         d_machine
};

class WinnerState : public State
{
public:
    WinnerState(GumballMachine* mac)
        , d_machine(mac)
    {}

    virtual ~WinnerState(){}

	virtual void insertQuarter();
	virtual void ejectQuarter();
	virtual void turnCrank();
	virtual void dispense();
    virtual std::string toString();

private:
    GumballMachine*         d_machine
};

#endif
