//Eoin Goslin
//14320856
#include <iostream>
using namespace std;

int main() {
	
	int x, result;
	cout << "Please enter a 5 digit number: "<<endl;//user inputs 5 digit number
	cin>>x;//using cin to catch number input and store it in integer variable x
	result = x/10000%10;//to get first number
	cout<<result<<"   ";
	result = x/1000%10;
	cout<<result<<"   ";//to get second
	result = x/100%10;
	cout<<result<< "   ";//to get third
	result = x/10%10;
	cout<<result<<"   ";//to get fourth
	result = x%10;
	cout<<result<<"   ";//to get fifth




	

}
