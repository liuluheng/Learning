#ifndef _TURKEY_H_
#define _TURKEY_H_

class Turkey 
{
public:
    Turkey();
    virtual ~Turkey();

    virtual void gobble();
    virtual void fly();

};

class WildTurkey : public Turkey
{
public:
    WildTurkey()
    {}

    virtual ~WildTurkey(){}

    virtual void gobble()
    {
        printf("Gobble gobble\n");
    }

    virtual void fly()
    {
        printf("I'm flying a short distance\n");
    }
};

#endif
