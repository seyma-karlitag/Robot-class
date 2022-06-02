#ifndef _BULDOZER_H
#define _BULDOZER_H
#include <iostream>
#include <string.h>
#include "Robot.h"

using namespace std;

class Buldozer : public Robot //Inherits from Robot class
{
    public:
    Buldozer();
    Buldozer(int newStrength, int newHit);
    virtual int getDamage();

};
#endif