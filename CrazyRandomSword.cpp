/*
	file: CrazyRandomSword.cpp
	developed by: Kimberly Zappa
	
	Defines the behavior of a crazy random sword. It Ignores a random amount of integer armor points, 
	ranging from to 2 to a third of the armor the weapon hits.

*/
#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
	
	int armor_points = rand()%2+(armor/3);

	double damage = hitpoints - armor_points;
    if(damage < 0){
        return 0;
    }
    return damage;
}

