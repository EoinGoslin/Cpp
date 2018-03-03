//Eoin Goslin
//14320856

#include<iostream>
#include<string>
using namespace std;
struct customer//have a struct customer
{
	string name;
	customer *next;
};

void print_customers(customer &head)
{

	customer *cur = &head;
	while(cur!=NULL)//will run once not NULL
	{
		cout<<(*cur).name<<endl;
		cur = (*cur).next;
	}




}

int main()
{
	customer customer1,customer2, customer3;//creating three customers
	customer1.next = &customer2;//customer1 points to 2
	customer2.next = &customer3;custoemr3//customer2 points to 3

	customer3.next = NULL;
	customer1.name = "Jack";
	customer2.name = "Jane";
	customer3.name = "Joe";
	print_customers(customer1);	
	return 0;




}//end of main
