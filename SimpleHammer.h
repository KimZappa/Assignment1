/*  file: SimpleHammer.h
	developed by: Kimberly Zappa
	
	Declares the object simple hammer. Calls the weapon constructor with 25 hit points. 
	
*/
#include "Weapon.h"

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
