#ifndef _ROBOCOP_H
#define _ROBOCOP_H
#include <iostream>
#include <string.h>
#include "Humanic.h"

using namespace std;

//Defining a Robocop class and writing its functions
class Robocop : public Humanic //Inherits from Humanic class
{
    public:
     //definition of construction
    Robocop();
    Robocop(int newStrength, int newHit);
    int getDamage();

};
#endif
