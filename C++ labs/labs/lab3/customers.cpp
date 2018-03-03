//Eoin Goslin
//14320856

#include<iostream>
#include "customers.h"
using namespace std;
void print_customers(customer &head)//takes in a pointer
{

	customer *cur = &head;//cur points to head memory space
	while(cur!=NULL)
	{
		cout<<(*cur).name<<endl;
		cur = (*cur).next;
	}




}


