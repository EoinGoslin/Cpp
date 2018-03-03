//Eoin Goslin
//14320856

#include<iostream>
#include<string>
using namespace std;

struct customer//creating customer made up of a string and a pointer
{
	string name;
	customer *next;
};

void print_customers(customer &head);//method declaration for print_customers


