#include <iostream>
#include <string.h>
#include "Humanic.h"
#include "Robot.h"

using namespace std;

//Default constructor

Humanic::Humanic() {Strength = 0, Hit =0;}

Humanic::Humanic(int newStrength, int newHit)
{
    Strength = newStrength;
    Hit = newHit;
    
}
//humanic robots have a 10% chance of inflicting
// a tactical nuke attack which is an additional 50 damage points.

int Humanic::getDamage()
{
  
    if ((rand( ) % 100) < 10)	
    {
		cout << getType() << " special +50 attack "<<endl;
        return Robot::getDamage() + 50;
	}
    
        cout << "Humanic normal attack " <<endl;
        return Robot::getDamage();
   
}
