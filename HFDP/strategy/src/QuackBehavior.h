#ifndef _QUACKBEHAVIOR_H_
#define _QUACKBEHAVIOR_H_

class QuackBehavior 
{
public:
    QuackBehavior();
    virtual ~QuackBehavior()=0;

	virtual void quack()=0;
};


class FakeQuack : public QuackBehavior
{
public:
    FakeQuack();
    virtual ~FakeQuack();

    virtual void quack();
};

class MuteQuack : public QuackBehavior 
{
public:
    MuteQuack();
    virtual ~MuteQuack();

	virtual void quack();
};

class Quack : public QuackBehavior
{
public:
    Quack();
    ~Quack();

	virtual void quack();
};

class Squeak : public QuackBehavior 
{
public:
    Squeak();
    ~Squeak();

	virtual void quack();
};

#endif
