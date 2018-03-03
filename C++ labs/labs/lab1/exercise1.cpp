//Eoin Goslin
//14320856
#include <iostream>
using namespace std;

int main() {
	
	int x, y, z, result;//initialising three variables
	cin >> x >> y >> z;//assigning each of the variables the value the user inputs
	cout<< "The sum of these numbers is:" << x+y+z<<endl;//using cout stream to print sum
//getting average	
	result = x+y+z;
	cout<< "The average of these numbers is:" <<result/3<<endl;//divide by three to get average
//getting product
	result = x*y*z;//multiply numbers
	cout<<"The product of these numbers is:" <<result<<endl;
//getting biggest
//using > operator to decide which variable printed
	if(x>y&&x>z) 
	{
	cout <<"The biggest number is " << x<<endl;
	}
	else if (y>x&&y>z)
	{
	cout <<"The biggest number is "<<y<<endl;
	}
	else 
	{
	cout<<"The biggest number is "<< z<<endl;
	}
//getting smallest
//using < operator to decide which variable printed
	if(x<y&&x<z) 
	{
	cout <<"The smallest number is " << x<<endl;
	}
	else if (y<x&&y<z)
	{
	cout <<"The smallest number is "<<y<<endl;
	}
	else 
	{
	cout<<"The smallest number is "<< z<<endl;
	}

	
	

}//end of main

