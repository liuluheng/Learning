#ifndef _VEGGIES_H_
#define _VEGGIES_H_

#include <string>

class Veggies 
{
public:
    virtual std::string toString() = 0;
};

class BlackOlives : public Veggies
{
public:
    virtual std::string toString()
    {
        return "Black Olives";
    }
};


class Eggplant : public Veggies
{
public:
    virtual std::string toString()
    {
        return "Eggplant";
    }
};

class Garlic : public Veggies
{
public:
    virtual std::string toString()
    {
        return "Garlic";
    }
};

class Mushroom : public Veggies
{
public:
    virtual std::string toString()
    {
		return "Mushrooms";
    }
};

class Onion : public Veggies
{
public:
    virtual std::string toString()
    {
		return "Onion";
    }
};

class RedPepper : public Veggies
{
public:
    virtual std::string toString()
    {
		return "Red Pepper";
    }
};


class Spinach : public Veggies
{
public:
    virtual std::string toString()
    {
		return "Spinach";
    }
};

#endif
