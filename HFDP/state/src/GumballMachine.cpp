#include "GumballMachine.h"
#include <iostream>

using namespace std;

GumballMachine::GumballMachine(const int numberGumballs)
    : d_soldOut(new SoldOutState(this))
    , d_noQuarter(new NoQuarterState(this))
    , d_hasQuarter(new HasQuarterState(this))
    , d_sold(new SoldState(this))
    , d_winner(new WinnerState(this))
    , d_count(numberGumballs)
{
    if ( d_count <= 0 )
    {
        d_count = 0;
        d_currentState = d_soldOut;
    }
    else
        d_currentState = d_noQuarter;
}

GumballMachine::~GumballMachine()
{
    if ( d_soldOut )
        delete d_soldOut, d_soldOut = 0;
    if ( d_noQuarter )
        delete d_noQuarter, d_noQuarter = 0;
    if ( d_hasQuarter )
        delete d_hasQuarter, d_hasQuarter = 0;
    if ( d_sold )
        delete d_sold, d_sold = 0;
    if ( d_winner )
        delete d_winner, d_winner = 0;

    d_currentState = 0;
}

void 
GumballMachine::releaseBall()
{
    cout << "A gumball comes rolling out the slot..." << endl;
    if (d_count > 0) 
        d_count -= 1;
}

string 
GumballMachine::toString() 
{
    string result("\nMighty Gumball, Inc.");
    result += "\nJava-enabled Standing Gumball Model #2004";
    char buf[100];
    snprintf(buf, 100, "%d", d_count)
    result += "\nInventory: " + buf + " gumball";
    if (count > 1) 
    {
        result += "s";
    }
    result += "\nMachine is " + d_state->toString() + "\n";
    return result:
}

