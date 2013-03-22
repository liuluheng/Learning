
#ifndef _FAKEQUACK_H
#define _FAKEQUACK_H

#include <stdio.h>
#include "QuackBehavior.h"


class FakeQuack : public QuackBehavior
{
public:
    virtual void quack();
};

#endif
