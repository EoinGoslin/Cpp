#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "die.h"
using namespace std;


int main()
{
	srand (time(NULL));//using time to seed random number
	int numSides;
	int numTimes;
	int dice1 = 0;
	int dice2 = 0;

	int roll1 = 0;
	int roll2 = 0;

	cout<<"Please enter number of sides :"<<endl;
	cin>>numSides;
	//creating dice objects	
	die diceOne(numSides);
    	die diceTwo(numSides);

	int sideN = diceOne.getNumSides();//getting the number of sides
	


	//will be used to state which number appeared
	int array [numSides*2-1];//will store dice values
	
	
	cout<<"How many times would you like to roll the dice :"<<endl;
	cin>>numTimes;

	int diceFace = sideN*2;//because two dice set total number of sides by 2

	for(int i =0; i <diceFace;i++)
	{
		array[i] = 0;//setting every side to 0
	}

	for (int i = 1; i <=numTimes; i++)
	{
		//storing random numbers in each of the dice
		dice1 = diceOne.roll(sideN);
		dice2 = diceTwo.roll(sideN);
		roll1 = diceOne.getValue();//using getValue method so can access roll values later on if necessary
		roll2 = diceTwo.getValue();
		
		array[roll1+roll2-2]++;//storing each total in our array
		
		
		
		
		
	}

	

	for(int i = 0; i <diceFace-1; i++)//-1 because array starts at 0s
	{
		cout<<"The total "<<i+2<<"appeared "<<(array[i] * 100)/numTimes<< "% number of times "<<endl;//printing out the value and how many times in percent that value appeared
	}


	
	



	
	
	

	

 	



	

	
   
 
}
 
