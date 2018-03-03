//Eoin Goslin
//14320856

#include<iostream>
using namespace std;

int main()//start of main method
{


int length = 0;
cout<<"Please enter the number of doubles you want stored :";
cin>>length;//storing size of array in a variable
double darray[length];//declaring and initialising array to the size of user input


//loop to fill array 
for(int i = 0; i <length;i++)
	{
		cout<<"Please input a double";//asking user for numbers
		cin>>darray[i];//storing input in each slot of the array
			

	
	}

//now print values backwards
for(int i = length-1; i >=0; i--)//start at end of array to run backward through array
	{
		cout<<"The element at index "<<i<<" is"<<darray[i]<<endl;

	}




}
