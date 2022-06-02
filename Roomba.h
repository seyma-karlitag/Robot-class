#ifndef _ROOMBA_H
#define _ROOMBA_H
#include <iostream>
#include <string.h>
#include "Robot.h"

using namespace std;

class Roomba : public Robot
{
    public:
    Roomba();
    Roomba(int newStrength, int newHit);
    int getDamage();

};
#endif