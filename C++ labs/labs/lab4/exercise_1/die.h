#include <iostream>
#include <string>
using namespace std;

class die // class definition
{

public: // access specifier
    die(int sides);	// constructor
    die();//for default constructor
    int roll(int x);
    int getValue();
    int getNumSides();
    

private:  
        int Numsides;	//class variables
	int value;

};


