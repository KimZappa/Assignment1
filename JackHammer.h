/*  file: JackHammer.h
	developed by: Kimberly Zappa
	
	Declares the object jack hammer. Attacks user with 100 hit points and ignores half of the armor points  
	
*/
#include "Weapon.h"

#ifndef JACKHAMMER_H
#define JACKHAMMER_H

class JackHammer : public Weapon {
public:

    JackHammer() : Weapon("Jack Hammer",100.0) //Calls Weapon(name, hitpoints) constructor with values Jack Hammer and 50.0
    {
    }

    virtual ~JackHammer() {};

    virtual double hit(double armor);

};

#endif /* JackHammer */

