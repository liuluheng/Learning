#include "State.h"
#include <iostream>
#include <string>

using namespace std;


void
WinnerState::insertQuarter() 
{
    cout << "Please wait, we're already giving you a Gumball" << endl;
}

void 
WinnerState::ejectQuarter() 
{
    cout << "Please wait, we're already giving you a Gumball" << endl;
}

void 
WinnerState::turnCrank() 
{
    cout << "Turning again doesn't get you another gumball!" << endl;
}

void 
WinnerState::dispense() 
{
    cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << endl;
    d_machine->releaseBall();
    if (d_machine->getCount() == 0) {
        d_machine->setState(d_machine->getSoldOutState());
    } else {
        d_machine->releaseBall();
        if (d_machine->getCount() > 0) {
            d_machine->setState(d_machine->getNoQuarterState());
        } else {
            cout << "Oops, out of gumballs!" << endl;
            d_machine->setState(d_machine->getSoldOutState());
        }
    }
}

string 
WinnerState::toString() 
{
    return "despensing two gumballs for your quarter, because YOU'RE A WINNER!";
}
