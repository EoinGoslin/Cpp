//Eoin Goslin
//14320856

#include <iostream>
#include <cstring>
#include<string>
using namespace std;

void print_array(char str[])
{



for(int i = 0; str[i]!='\0'; i++)//run until end of string reached
	{
	
		
		cout<<str[i]<<endl;//show each character
		
	}



}
void print_string_ptr(char*str)
{

	for(int i = 0; *str!='\0'; i++)//run until pointer pointing at end of string
	{
	
		
		cout<<*str<<endl;//show pointer
		*str++;//increment what pointer is pointing at
		
	}





}







int main()
{
	
char str[] = "My name is eoin";//string that each of the methods will run through
print_array(str);//method call

char*string = str;//declaring and initialising pointer to char str

print_string_ptr(str);//method call



}
