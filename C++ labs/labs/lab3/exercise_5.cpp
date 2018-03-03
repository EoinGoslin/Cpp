//Eoin Goslin
//14320856

#include<iostream>
#include "customers.h"//including our header file

int main()
{
	customer customer1,customer2, customer3;//create three customers
	customer1.next = &customer2;
	customer2.next = &customer3;
	//assigning values to each customer
	customer3.next = NULL;
	customer1.name = "Jack";
	customer2.name = "Jane";
	customer3.name = "Joe";
	custoemr4.name = "Mary";
	print_customers(customer1);	
	return 0;




}


