#include "GumballMachine.h"
#include "State.h"
#include <iostream>
#include <string>

using namespace std;

void 
NoQuarterState::insertQuarter() 
{
    cout << "You inserted a quarter" << endl;
    d_machine->setState(d_machine->getHasQuarterState());
}

void
NoQuarterState::ejectQuarter()
{
    cout << "You haven't inserted a quarter" << endl;
}

void 
NoQuarterState::turnCrank()
{
    cout << "You turned, but there's no quarter" << endl;
}

void 
NoQuarterState::dispense() 
{
    cout << "You need to pay first" << endl;
} 

string 
NoQuarterState::toString()  const
{
    return "waiting for quarter";
}


