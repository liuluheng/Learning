
#ifndef _PIZZA_H_
#define _PIZZA_H_

#include <string>
#include <vector>

class Pizza
{
public:
    typedef   std::vector<Veggies*>   VeggVec;
public:
    Pizza(){}
    virtual ~Pizza()
    {
        if ( d_dough )
            delete d_dough, d_dough = 0;
        if ( d_sauce )
            delete d_sauce, d_sauce = 0;
        if ( d_cheese )
            delete d_cheese, d_cheese = 0;
        if ( d_pepperoni )
            delete d_pepperoni, d_pepperoni = 0;
        if ( d_clam )
            delete d_clam, d_clam = 0;
        for (size_t i = 0; i < d_veggies.size(); i++)
            if (d_veggies[i]) 
                delete d_veggies[i];
    }

    std::string getName()
    {
        return d_name;
    }
	void setName(const std::string& name) 
    {
		d_name = name;
	}
    virtual void prepare()=0;
    virtual void bake()
    {
		printf("Bake for 25 minutes at 350\n");
    }
    virtual void cut()
    {
		printf("Cutting the pizza into diagonal slices\n");
    }
    virtual void box()
    {
		printf("Place pizza in official PizzaStore box\n");
    }
    virtual std::string toString()
    {	
        std::string result = "---- " + d_name + " ----\n";
		if ( d_dough )
        {
			result += d_dough->toString();
			result += "\n";
		}
		if ( d_sauce ) 
        {
			result += d_sauce->toString();
			result += "\n";
		}
		if ( d_cheese )
        {
			result += d_cheese->toString();
			result += "\n";
		}
        for (size_t i = 0; i < d_veggies.size(); i++) 
        {
            result += veggies[i]->toString();
            if (i < d_veggies.size()-1) 
            {
                result += ", ";
            }
        }
	    result += ("\n");
		if ( d_clam )
        {
			result += d_clam->toString();
			result += "\n";
		}
		if ( d_pepperoni )
        {
			result += d_pepperoni->toString();
			result += "\n";
		}
		return result;
    }

protected:
    std::string         d_name;
    Dough*              d_dough;
    Sauce*              d_sauce;
    VeggVec             d_veggies;
    Cheese*             d_cheese;
    Pepperoni*          d_pepperoni;
    Clams*              d_clam;
};

class CheesePizza : public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory* fc)
        : d_ingredientFactory(fc)
    {
    }

    virtual void prepare()
    {
		printf("Preparing %s\n" , d_name.c_str());
		d_dough = ingredientFactory->createDough();
		d_sauce = ingredientFactory->createSauce();
		d_cheese = ingredientFactory->createCheese();
    }

private:
    PizzaIngredientFactory*         d_ingredientFactory;
};

class ClamPizza : public Pizza
{
public:
    ClamPizza(PizzaIngredientFactory* fc)
        : d_ingredientFactory(fc)
    {}

    virtual void prepare()
    {
		printf("Preparing %s\n" , d_name.c_str());
		d_dough = ingredientFactory->createDough();
		d_sauce = ingredientFactory->createSauce();
		d_cheese = ingredientFactory->createCheese();
		d_clam = ingredientFactory->createClam();
    }
};

class PepperoniPizza : public Pizza
{
public:
    PepperoniPizza(PizzaIngredientFactory* fc)
        : d_ingredientFactory(fc)
    {}

    virtual void prepare()
    {
		printf("Preparing %s\n" , d_name.c_str());
		d_dough = ingredientFactory->createDough();
		d_sauce = ingredientFactory->createSauce();
		d_cheese = ingredientFactory->createCheese();
		d_veggies = ingredientFactory->createVeggies();
		d_pepperoni = ingredientFactory->createPepperoni();
    }

private:
    PizzaIngredientFactory*         d_ingredientFactory;
};

class VeggiePizza : public Pizza
{
public:
    VeggiePizza(PizzaIngredientFactory* fc)
        : d_ingredientFactory(fc)
    {}
 
	virtual void prepare()
    {
		printf("Preparing %s\n" , d_name.c_str());
		d_dough = ingredientFactory->createDough();
		d_sauce = ingredientFactory->createSauce();
		d_cheese = ingredientFactory->createCheese();
		d_veggies = ingredientFactory->createVeggies();
    }
private:
    PizzaIngredientFactory*         d_ingredientFactory;
};



#endif
