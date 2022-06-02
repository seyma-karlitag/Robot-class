#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
#include "Robot.h"

using namespace std;

//Default constructor

Robot::Robot() : Type(3), Strength(10), Hit(10) {}

Robot::Robot(int newType, int newStrength, int newHit)
{
    Type = newType;
    Strength = newStrength;
    Hit = newHit;
    
}
//Defining get set functions

int Robot::getStrenght() {return Strength;}
int Robot::getHit() {return Hit;}
void Robot::setHit(int newHit) { Hit = newHit;}
void Robot::setStrenght(int newStrenght) { Strength = newStrenght;}
string Robot::getType()
{
switch (Type)
{
case 0: return "optimusprime";
case 1: return "robocop";
case 2: return "roomba";
case 3: return "bulldozer";
}
return "unknown";
}
int Robot::getDamage()
{
int damage;
// All robots inflict damage which is a
// random number up to their strength
damage = (rand() % Strength) + 1;
cout << getType() << " attacks for " <<damage << " points!" << endl;
//calculate additional damage here depending on the type
//
return damage;
}

#endif
