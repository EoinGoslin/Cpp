//Eoin Goslin
//14320856
#include <iostream>
#include "customers2.h"
using namespace std;
void print_customers(customer &head)
{

	customer *cur = &head;//cur points to head
	while(cur!=NULL)
	{
		cout<<(*cur).name<<endl;
		cur = (*cur).next;
	}




}

Customer* createList(string name)//create list method 
{
    Customer* customer = new Customer();
    customer -> name = name;
    customer -> next = NULL;

    return customer;
}

void insertName(Customer* head, string name)
{
    Customer* current = head;

    while (current -> next != NULL) 
	{
        current = current -> next;
    }

    current -> next = new Customer();
    current = current -> next;
    current -> name = name;
    current -> next = NULL;
}

int listLength(Customer* head) 
{
    Customer* current = head;
    int count = 0;

    while (current != NULL) 
	{
        current = current -> next;
        count++;
    }

    return count;
}



