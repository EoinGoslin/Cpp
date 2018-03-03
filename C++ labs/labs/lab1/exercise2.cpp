//Eoin Goslin
//14320856
#include <iostream>
using namespace std;

int main() {
	
	int x, y;//declaring and initialising two variables
	cin >>x>>y;//user input to assign values to each
	if(x%y == 0)//no remainder than must be a multiple of number
	{
	cout<< "The first number " <<x<< " is a multiple of the second number " <<y<<endl;
	}
	else//if false
	{
	cout<<"The first number is not a multiple of the second number!"<<endl;
	}

}
