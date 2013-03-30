#include "State.h"
#include <iostream>
#include <string>

using namespace std;

void 
HasQuarterState::insertQuarter() 
{
    cout << "You can't insert another quarter" << endl;
}

void 
HasQuarterState::ejectQuarter() 
{
    cout << "Quarter returned" << endl;
    d_machine->setState(d_machine->getNoQuarterState());
}

void
HasQuarterState::turnCrank() 
{
    cout << "You turned..." << endl;
    const bool isWinner = false;
    if (isWinner && (d_machine->getCount() > 1)) 
    {
        d_machine->setState(d_machine->getWinnerState());
    }
    else 
    {
        d_machine->setState(d_machine->getSoldState());
    }
}

void 
HasQuarterState::dispense() {
    cout << "No gumball dispensed" << endl;
}

string 
HasQuarterState::toString() 
{
    return "waiting for turn of crank";
}

