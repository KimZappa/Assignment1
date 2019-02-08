#include "Weapon.h" //inherit from abstract class Weaopon

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer",25.0) //Calls Weapon(name, hitpoints) constructor with values Simple Hammer and 25.0
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SimpleHammer */

