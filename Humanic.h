#ifndef HUMANIC_GUARD
#define HUMANIC_GUARD
#include <iostream>
#include <string.h>
#include "Robot.h"

using namespace std;

//Defining a HUmanic class and writing its functions

class Humanic : public Robot //Inherits from Robot class
{
    public:
     //definition of construction
    Humanic();
    Humanic(int newStrength, int newHit);
    int getDamage();

};
#endif
