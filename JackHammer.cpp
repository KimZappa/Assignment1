/*
	file: JackHammer.cpp
	developed by: Kimberly Zappa
	
	Defines the behavior of a Jack hammer. Hits user with 100 damage and ignores half of the armor points 
*/

#include "JackHammer.h"


double JackHammer::hit(double armor){
	
	double damage = hitpoints - (armor * 0.5);
    if(damage < 0){
        return 0;
    }
    return damage;
}

