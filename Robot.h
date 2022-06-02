#ifndef _ROBOT_H
#define _ROBOT_H
#include <iostream>
#include <string.h>

using namespace std;

class Robot //Base class
{
    public:
    //a member data which defines the type
    //a member data which stores the strength
    //a member data which stores the hitpoints
    //a helper function which returns the robot type
    //define a class constructor
    Robot();
    Robot(int newType, int newStrength, int newHit);
    virtual int getDamage();
    int getStrenght();
    int getHit();
    void setStrenght(int newStrenght);
    void setHit(int newHit);

    // Returns amount of damage this robot
    // inflicts in one round of combat
    

    protected:
    int Type;
    int Strength;
    int Hit;
    string getType();

};
#endif
