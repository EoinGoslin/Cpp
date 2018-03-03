//Eoin Goslin
//14320856

#include<iostream>
#include "customers2.h"//including header file

using namespace std;


int main() 
{
     int number;
     
     string name;


     cout << "How many customers are on the list? ";
     cin >> numb;

     cout << "Please enter the name of the first customer: ";
     cin >> name;

     Customer* head = createList(name);

     for (int i = 1; i < number; i++) 
	 {
         cout << "Please enter the name of customer " << i + 1 << ": ";
         cin >> name;
	if(name == "end")
	{
	break;//will break from loop if end is entered by user
	}

         insertName(head, name);
     }

     number = listLength(head);
     
     cout << endl << "List length: " << number << endl << endl << "Customer names:" << endl;

	
     printCustomers(head);//calling method

    return 0;
    
}//end main
