#include <iostream>
#include <string.h>
#include "Robot.h"
#include "Robocop.h"

using namespace std;

//Default constructor
Robocop::Robocop() {Strength = 0, Hit =0;}

Robocop::Robocop(int newStrength, int newHit)
{
   Type=1;
   Strength = newStrength;
   Hit = newHit;
}
//Normal attack
int Robocop::getDamage()
{
     cout<<"Robocop normal attack" <<endl;
     return Humanic::getDamage();

}
