#include "Duck.h"
#include "Turkey.h"
#include "DuckAdapter.h"
#include "TurkeyAdapter.h"
#include <stdio.h>

static void  testDuck(Duck* duck);

int main(int argc, const char *argv[])
{
    // test turkey adapter
    MallardDuck* duck = new MallardDuck();

    WildTurkey* turkey = new WildTurkey();
    Duck* turkeyAdapter = new TurkeyAdapter(turkey);

    printf("The Turkey says...\n");
    turkey->gobble();
    turkey->fly();

    printf("\nThe Duck says...\n");
    testDuck(duck);

    printf("\nThe TurkeyAdapter says...\n");
    testDuck(turkeyAdapter);

    delete duck;
    delete turkey;
    delete turkeyAdapter;

    duck = new MallardDuck();
    Turkey* duckAdapter = new DuckAdapter(duck);

    for(int i=0;i<10;i++) 
    {
        printf("The DuckAdapter says...\n");
        duckAdapter->gobble();
        duckAdapter->fly();
    }

    delete duck;
    delete duckAdapter;
    return 0;
}


static void  testDuck(Duck* duck)
{
    duck->quack();
    duck->fly();
}

