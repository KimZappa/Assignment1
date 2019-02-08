/*  file: CrazyRandomSword.h
	developed by: Kimberly Zappa
	
	Declares the object crazy random sword. hit points are a random integer number between 7 and 100. 
	reference: http://www.cplusplus.com/reference/cstdlib/rand/
*/

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H
#include <stdlib.h> 
#include <time.h> 

class CrazyRandomSword : public Weapon {
public:
	srand (time(NULL));
	double num = rand % 100 + 7;
        CrazyRandomSword() : Weapon("Crazy Random Sword",num) //Calls Weapon(name, hitpoints) constructor with values Crazy Random Sword and random number 
    {
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CrazyRandomSword */
