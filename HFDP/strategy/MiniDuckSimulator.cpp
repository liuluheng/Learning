

int main(int argc, const char *argv[])
{


    MallardDuck	mallard = new MallardDuck();
    RubberDuck	rubberDuckie = new RubberDuck();
    DecoyDuck	decoy = new DecoyDuck();

    ModelDuck	model = new ModelDuck();

    mallard.performQuack();
		mallard.performFly();

    rubberDuckie.performQuack();
    decoy.performQuack();

    model.performFly();	
    model.setFlyBehavior(new FlyRocketPowered());
    model.performFly();

    return 0;

}
