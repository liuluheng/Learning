#include "GumballMachine.h"
#include "State.h"
#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{

    GumballMachine* gumballMachine = 
        new GumballMachine(10);

    cout << gumballMachine->toString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString() << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    cout << gumballMachine->toString() << endl;

    delete gumballMachine;
    return 0;
}
