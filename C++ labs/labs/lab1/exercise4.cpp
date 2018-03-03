//Eoin Goslin
//14320856
#include <iostream>
using namespace std;

int main() {
	//first create variables to store user information
	int accountNum, balance, totalItems, totalCredit, allowCredit,newBal;
	bool exit = false;
	
	
	while(exit == false)
	{
	cout<<"Please enter account number"<<endl;
	cin>>accountNum;
	if(accountNum == -1) {//checking to ensure that user number is not equal to -1
	exit == true;//setting exit to true so that when breaks, loop will not run again
	break;
	}
	cout<<"Please enter balance"<<endl;
	cin>>balance;
	cout<<"Please enter total of items charged this month"<<endl;
	cin>>totalItems;
	cout<<"Please enter total credits applied to customer this month"<<endl;
	cin>>totalCredit;
	cout<<"Please enter allowed credit limit"<<endl;
	cin>>allowCredit;
	newBal = (balance+totalItems) - totalCredit;
	cout<<"New balance is :"<<newBal<<endl;
	
	if(newBal > allowCredit)//will result in either true or false
	{
	cout<<"Credit Limit exceeded"<<endl;
	
	}
	cout<<"Next Customer Please"<<endl;
	}
}
