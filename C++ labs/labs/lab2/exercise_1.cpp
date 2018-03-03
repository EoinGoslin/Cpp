
//Eoin Goslin
//14320856

#include<iostream>
#include <string>
using namespace std;

void my_swap(int num1, int num2)
{

	int temp = 0;//making variable to hold value for swapping
	
	temp = num1;//temp stores num1 so new value can be assigned to num1
	num1 = num2;//num1 now equal to num2
	num2 = temp;//num2 equal to temp, which stores value fo num1

	cout<<"Number 1 has the new value of " << num1<<endl;
	cout<<"Number 2 has the new value of " <<num2<<endl;




}









int main()
{

	int num1;
	int num2;
	cout<<"Please input number1: "<<endl;
	cin>>num1;
	cout<<"Please input number2: "<<endl;
	cin>>num2;
	cout<<"Number 1 is "<<num1<<" and Number 2 is "<<num2<<endl;

	my_swap(num1, num2);//calling method 




}
