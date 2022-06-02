#include <iostream>
#include <string>
#include <ctime>
#include "Robot.h"
#include "Roomba.h"
#include "Robocop.h"
#include "Humanic.h"
#include "Buldozer.h"
#include "OptimusPrime.h"

//Fights between two robots.
void collision(Robot &rob1, Robot &rob2)
{
    //calculate hit
    int hit1 = rob1.getHit();
    int hit2 = rob2.getHit();

    while((hit1 > 0 ) && (hit2 > 0) ) 
    {
        int damage1 = rob1.getDamage(); //1. Robot  attack
        //decrease hit points
        hit2 = hit2 -damage1;
        cout<<"Robot 2. has " <<hit2<<" points"<<endl;
        int damage2 = rob2.getDamage(); //2. Robot attack
        //decrease hit points
        hit1 = hit1 - damage2;
        cout<<"Robot 1. has " <<hit1<<" points"<<endl;
        rob1.setHit(hit1);
        rob2.setHit(hit2);
        cout<<endl;
        if((hit1<=0) && (hit2<=0)) 
            cout<<"Collision draw\n";
        else if(hit1<=0)
            cout<<"Robot 2. Winss!\n";
        else
            cout<<"Robot 1. Wins\n";

    }
}
int main()
{
    //time
    
    srand(static_cast<int>(time(NULL)));
    Robot rob1(2, 100, 50);
	Robot rob2(3, 150,70);

	collision(rob1,rob2);

	OptimusPrime rob3(60,60);
	Roomba rob4(60,60);

	collision(rob3,rob4); 


    return 0;
}
