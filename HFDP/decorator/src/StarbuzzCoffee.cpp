#include <stdio.h>
#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"
#include "HouseBlend.h"


int main(int argc, const char *argv[])
{

    Beverage* beverage = new Espresso();
    printf("%s $%.2f\n", beverage->getDescription().c_str(), beverage->cost());

    Beverage* beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    printf("%s $%.2f\n", beverage2->getDescription().c_str(), beverage2->cost());

    Beverage* beverage3 = new HouseBlend();
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    printf("%s $%.2f\n", beverage3->getDescription().c_str(), beverage3->cost());

    return 0;
}
