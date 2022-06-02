#include <iostream>
#include <string.h>
#include "Robot.h"
#include "Roomba.h"

using namespace std;

//Default constructor

Roomba::Roomba() {Strength = 0, Hit =0;}

Roomba::Roomba(int newStrength, int newHit)
{
    Type = 2;
    Strength = newStrength;
    Hit = newHit;
}
//roomba robots are very fast, so they get to attack twice.

int Roomba::getDamage()
{
    cout <<"Roomba special twice attack " <<endl;

    return Robot::getDamage() + Robot::getDamage();
}
