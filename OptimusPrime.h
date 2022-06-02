#ifndef OPTIMUSPRIME_GUARD
#define OPTIMUSPRIME_GUARD
#include <iostream>
#include <string.h>
#include "Humanic.h"
#include "Robot.h"

using namespace std;

//Defining a OptimusPrime class and writing its functions

class OptimusPrime : public Humanic //Inherits from Humanic class
{
    public:
    //definition of construction
    OptimusPrime();
    OptimusPrime(int newStrength, int newHit);
    int getDamege();

};
#endif
