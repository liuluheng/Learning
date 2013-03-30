#include "State.h"
#include <iostream>
#include <string>

using namespace std;


void 
SoldState::insertQuarter() 
{
    cout << "Please wait, we're already giving you a gumball" << endl;
}

void 
SoldState::ejectQuarter() 
{
    cout << "Sorry, you already turned the crank" << endl;
}

void 
SoldState::turnCrank() 
{
    cout << "Turning twice doesn't get you another gumball!" << endl;
}

void 
SoldState::dispense() 
{
    d_machine->releaseBall();
    if (d_machine->getCount() > 0) {
        d_machine->setState(d_machine->getNoQuarterState());
    } else {
        cout("Oops, out of gumballs!");
        d_machine->setState(d_machine->getSoldOutState());
    }
}

string 
SoldState::toString() 
{
    return "dispensing a gumball";
}
