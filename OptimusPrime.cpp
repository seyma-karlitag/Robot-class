#include <iostream>
#include "OptimusPrime.h"
#include "Robot.h"
#include "Humanic.h"

using namespace std;

//Default constructor

OptimusPrime::OptimusPrime() {Strength = 0, Hit =0;}

OptimusPrime::OptimusPrime(int newStrength, int newHit)
{
   Type = 0; 
   Strength = newStrength;
   Hit = newHit;
   
}
//Setting up the desired algorithm for damage
//With a %15 chance OptimusPrime robots inflict
int OptimusPrime::getDamege()
{
    if ((rand( ) % 100) < 15)	
    {
		cout <<"OptimusPrime special double attack" <<endl;
        return Humanic::getDamage() * 2;
	}

        cout <<"OptimusPrime normal attack" <<endl;
        return Humanic::getDamage();
   
}