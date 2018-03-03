#include <iostream>
#include "die.h"
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

die::die()//default constructor
     {
         Numsides=6;
     }

die::die(int sides)
{
        if(sides<4)//if less than 4, will be automatically set to 6
            {
            Numsides=6;
            cout<<"Error! not enough sides, default to 6 sides"<<endl;
            }
        else
            {
                Numsides=sides;   
            }
}

int die::roll(int x)
    {
                        
        value = rand() % x + 1; //one dice roll
        return value;//store value of roll in value
        
       
    }

int die::getValue()
    {
     	return value;

    }

int die::getNumSides()
    {
        return Numsides; 
    }
