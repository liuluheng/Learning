#ifndef _PIZZAINGREDIENTFACTORY_H_
#define _PIZZAINGREDIENTFACTORY_H_

#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Veggies.h"
#include "Pepperoni.h"
#include "Clams.h"
#include <vector>


class PizzaIngredientFactory 
{
public:
    typedef std::vector<Veggies*>    VeggVec;
public:
    PizzaIngredientFactory(){};
    virtual ~PizzaIngredientFactory(){};

    virtual Dough* createDough()=0;
	virtual Sauce* createSauce()=0;
	virtual Cheese* createCheese()=0;
	virtual VeggVec createVeggies()=0;
	virtual Pepperoni* createPepperoni()=0;
	virtual Clams* createClam()=0;

};

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	virtual Dough* createDough() 
    {
		return new ThickCrustDough();
	}

	virtual Sauce* createSauce() 
    {
		return new PlumTomatoSauce();
	}

	virtual Cheese* createCheese() 
    {
		return new MozzarellaCheese();
	}

	virtual VeggVec createVeggies() 
    {
		VeggVec veggies;
        veggies.push_back(new BlackOlives());
		veggies.push_back(new Spinach());
		veggies.push_back(new Eggplant());
		return veggies;
	}

	virtual Pepperoni* createPepperoni() 
    {
		return new SlicedPepperoni();
	}

	virtual Clams* createClam() 
    {
		return new FrozenClams();
	}
};

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	virtual Dough* createDough() {
		return new ThinCrustDough();
	}
 
	virtual Sauce* createSauce() {
		return new MarinaraSauce();
	}
 
	virtual Cheese* createCheese() {
		return new ReggianoCheese();
	}
 
	virtual VeggVec createVeggies() {
        VeggVec veggies;
		veggies.push_back(new Garlic());
        veggies.push_back(new Garlic());
        veggies.push_back(new Onion());
        veggies.push_back(new Mushroom());
        veggies.push_back(new RedPepper());
		return veggies;
	}
 
	virtual Pepperoni* createPepperoni() {
		return new SlicedPepperoni();
	}

	virtual Clams* createClam() {
		return new FreshClams();
	}

};

#endif

