#include "ChocolateBoiler.h"

int main(int argc, const char *argv[])
{
    ChocolateBoiler* boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();

    // will return the existing instance
    ChocolateBoiler* boiler2 = ChocolateBoiler::getInstance();
}
