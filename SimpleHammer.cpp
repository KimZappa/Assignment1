#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
	if(armor < 30)  //if armor is less than 30 points
		double damage = hitpoints; //ignore armor
	else 
		double damage = hitpoints - armor; 
	//if greater than 30 than we dont want to ignore the armor
    if(damage < 0){
        return 0;
    }
    return damage;
}
