//Eoin Goslin
//14320856

#include<iostream>


using namespace std;



int my_string_len(char str[])
{

	int length = 0;
	int counter = 0;
	while(str[counter] != '\0')//will run until hit null-point at end of the string
	{

	length++;//will store length by being incremented each time
	counter++;//used for loop so not infinite so will move through the array
	}
	return length;




}
//will take in two arrays, and concatanate them if size available;
void my_string_cat(char dest[], char scr[], int dest_size)
{

int sizeDest = my_string_len(dest);//getting length
int sizeScr = my_string_len(scr);//gtting length of second scr
int length = sizeDest+sizeScr;//adding up total of both lengths

	
	if(length < dest_size)//ensuring there is space in dest for concatenation
	{
	for(int i = sizeDest, j = 0; j<sizeScr+1; i++, j++)//start at end of first string, run for length of second string
	{
		
		
	
	
	dest[i] = scr[j];//concatenating first and second string in dest string
				
		
	
	}
	cout<<dest<<endl;//show dest
	}
	else
	{
	cout<<"Not enough room"<<endl;//if not enough room for concatenation, this message will show
	}

	
	
	
	
	
		
	


	
		

	






}




int main()
{

int size = 50;//size of both arrays

char str[] = "hello";
char dest[size];
char scr[size];

cout<<"Please input a string less than 50 characters long :";
cin.getline(dest, size);//inputs user characters into dest array

cout<<"Please input another string less than 50 characters long :";
cin.getline(scr,size);//inputs user characters into dest array

my_string_cat(dest, scr, size);//method call




















}
