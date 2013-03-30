#ifndef _GUMBALLMACHINE_H_
#define _GUMBALLMACHINE_H_

#include "State.h"

class GumballMachine 
{
public:
    GumballMachine(const int numberGumballs);
    virtual ~GumballMachine();

	void insertQuarter() 
    {
		d_currentState->insertQuarter();
	}
 
	void ejectQuarter() 
    {
		d_currentState->ejectQuarter();
	}
 
	void turnCrank() 
    {
		d_currentState->turnCrank();
		d_currentState->dispense();
	}

	void setState(State* state) 
    {
		d_currentState = state;
	}

    State* getState() const
    {
        return d_currentState;
    }

    State* getSoldOutState()const
    {
        return d_soldOut;
    }

    State* getNoQuarterState() const
    {
        return d_noQuarter;
    }

    State* getHasQuarterState() const
    {
        return d_hasQuarter;
    }

    State* getSoldState() const
    {
        return d_soldState;
    }

    State* getWinnerState()  const
    {
        return d_winner;
    }

    std::string toString() const ;
private:

	void releaseBall();
 
	int getCount()  const
    {
		return d_count;
	}
 
	void refill(int count) 
    {
        if ( count > 0 )
        {
		    d_count = count;
		    state = noQuarterState;
        }
	}

private:
    State*      d_soldOut;
    State*      d_noQuarter;
    State*      d_hasQuarter;
    State*      d_sold;
    State*      d_winner;

    State*      d_currentState;
    int         d_count;
};

#endif
