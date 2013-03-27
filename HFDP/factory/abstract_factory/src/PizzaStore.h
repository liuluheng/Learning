#ifndef _PIZZASTORE_H_
#define _PIZZASTORE_H_

#include "Pizza.h"
#include "PizzaIngredientFactory.h"

class PizzaStore 
{
public:
    PizzaStore(){};
    virtual ~PizzaStore(){};

    virtual Pizza* orderPizza(const std::string& type)
    {
        Pizza* pizza = createPizza(type); 
        printf("--- Making a %s ---\n", pizza->getName());
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }

protected:
    Pizza* createPizza(const std::string& item)=0;
};

class ChicagoPizzaStore : public PizzaStore
{
protected:
    Pizza* createPizza(const std::string& item)
    {
		Pizza* pizza = 0;
		PizzaIngredientFactory* ingredientFactory =
                          new ChicagoPizzaIngredientFactory();

		if (item == string("cheese")) {

			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("Chicago Style Cheese Pizza");

		} else if (item == string("veggie")) {

			pizza = new VeggiePizza(ingredientFactory);
			pizza->setName("Chicago Style Veggie Pizza");

		} else if (item == string("clam")) {

			pizza = new ClamPizza(ingredientFactory);
			pizza->setName("Chicago Style Clam Pizza");

		} else if (item == string("pepperoni")) {

			pizza = new PepperoniPizza(ingredientFactory);
			pizza->setName("Chicago Style Pepperoni Pizza");

		}
		return pizza;
    }
};

class NYPizzaStore : public PizzaStore
{
protected:
	virtual Pizza* createPizza(const std::string& item) 
    {
		Pizza* pizza = 0;
		PizzaIngredientFactory* ingredientFactory = 
			new NYPizzaIngredientFactory();
 
		if (item == string("cheese")) {
  
			pizza = new CheesePizza(ingredientFactory);
			pizza->setName("New York Style Cheese Pizza");
  
		} else if (item == string("veggie")) {
 
			pizza = new VeggiePizza(ingredientFactory);
			pizza->setName("New York Style Veggie Pizza");
 
		} else if (item == string("clam")) {
 
			pizza = new ClamPizza(ingredientFactory);
			pizza->setName("New York Style Clam Pizza");
 
		} else if (item == string("pepperoni")) {

			pizza = new PepperoniPizza(ingredientFactory);
			pizza->setName("New York Style Pepperoni Pizza");
 
		} 
		return pizza;
    }
};


#endif 
