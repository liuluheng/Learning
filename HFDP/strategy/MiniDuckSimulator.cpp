#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"


int main(int argc, const char *argv[])
{
    MallardDuck*    mallard = new MallardDuck();
    RubberDuck*     rubberDuckie = new RubberDuck();
    DecoyDuck*      decoy = new DecoyDuck();
    ModelDuck*   	model = new ModelDuck();

    mallard->performQuack();
    mallard->performFly();

    rubberDuckie->performQuack();
    decoy->performQuack();

    model->performFly();	
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();

    if ( mallard )
        delete mallard;
    if (rubberDuckie )
        delete rubberDuckie;
    if ( decoy )
        delete decoy;
    if (model)
        delete model;

    return 0;
}

