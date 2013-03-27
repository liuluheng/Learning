#ifndef _VEGGIES_H_
#define _VEGGIES_H_

#include <string>

class Veggies 
{
public:
    Veggies(arguments){};
    virtual ~Veggies(){};

    virtual std::string toString() = 0;
};

class BlackOlives : public Veggies
{
public:
    virtual std::string toString()
    {
        return string("Black Olives");
    }
};


class Eggplant : public Veggies
{
public:
    virtual std::string toString()
    {
        return string("Eggplant");
    }
};

class Garlic : public Veggies
{
public:
    virtual std::string toString()
    {
        return string("Garlic");
    }
};

class Mushroom : public Veggies
{
public:
    virtual std::string toString()
    {
		return string("Mushrooms");
    }
};

class Onion : public Veggies
{
public:
    virtual std::string toString()
    {
		return string("Onion");
    }
};

class RedPepper : public Veggies
{
public:
    virtual std::string toString()
    {
		return string("Red Pepper");
    }
};


class Spinach : public Veggies
{
public:
    virtual std::string toString()
    {
		return string("Spinach");
    }
};

#endif
