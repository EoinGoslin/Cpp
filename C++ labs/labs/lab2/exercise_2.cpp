//Eoin Goslin
//14320856

#include <iostream>
#include <string>
using namespace std;

int gcd(int num1, int num2)
{
int answer = 0;
	if(num1>num2)//finding largest number
	{
	for(int i = 1; i <=num1; i++)//will search through all numbers up until biggest number
	{

		if(num2%i==0 &&num1%i ==0)//if no remainder then that is gcd
		{
			answer = i;//store the greatest commmon divisor
		}
	}
	
		return answer;//return gcd to main method







	}
}









int main()
{
	int num1, num2;
	cout<<"Please enter number1: "<<endl;
	cin>>num1;
	cout<<"Please enter number2: "<<endl;
	cin>>num2;
	cout<<"The greatest common divisor is "<<gcd(num1,num2)<<endl;//calling method










}
