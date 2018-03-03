//Eoin Goslin
//14320856

#include<iostream>
#include <string>
#include <stdlib.h>
#include<ctime>
using namespace std;

void rollDice(int numTimes)
{
	srand(time(NULL));//using time to get random number	
	int dice1, dice2;//creating our dice
	int array[] = {2,3,4,5,6,7,8,9,10,11,12};//will be used to state which number appeared
	int array2[] = {0,0,0,0,0,0,0,0,0,0,0};//will store dice values
	int total = 0;
	
	
	for (int i = 1; i <=numTimes; i++)
	{
		//storing random numbers in each of the dice
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		array2[dice1+dice2-2]++;//storing each total in our array
		
		
		
		
		
	}
	for(int i = 0; i <11; i++)
	{
		cout<<"The total "<<array[i]<<"appeared "<<(array2[i] * 100)/numTimes<< "% number of times "<<endl;//printing out the value and how many times in percent that value appeared
	}
	
}








int main()
{
int numTimes;
cout<<"Please enter the number of times you would like to roll the di: "<<endl;//getting number of times to roll dice
cin>>numTimes;
rollDice(numTimes);

}
