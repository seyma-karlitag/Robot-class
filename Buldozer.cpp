#include <iostream>
#include <string.h>
#include "Buldozer.h"
#include "Robot.h"

using namespace std;

//Default constructor
Buldozer::Buldozer() {Strength = 0, Hit =0;}

Buldozer::Buldozer(int newStrength, int newHit)
{
    Type=3;
    Strength = newStrength;
    Hit = newHit;
}
//Normal attack
int Buldozer::getDamage()
{
    cout <<"Buldozer normal attack" << endl;
    return Robot::getDamage();
}