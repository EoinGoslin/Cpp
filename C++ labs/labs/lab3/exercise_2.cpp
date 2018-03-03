//Eoin Goslin
//14320856

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
using namespace std;

int main()
{
	


int length = 10;
bool stop = false;
//create a pointed array


double* darray = new double[length];
int counter = 0;

	cout<<"Please enter a list of doubles :"<<endl;
	for(counter=0; stop == false; counter++)//will keep asking until -1 entered
	{
		
		cin>>darray[counter];
		if(darray[counter]==-1)
		{
			stop = true;
			break;
		}	
		if(counter >= length)//once first array limit reached
		{
			double *secArray = new double[counter+length];
			
			for(int k =0; k<length; k++)
			{
				secArray[k] = darray[k];	
			}
			delete[]darray;//remove old array
			darray = secArray;
			length = counter+length;
			
		}
	




	}
		for(int i = counter; i>=0; i--)
		{
			cout<<darray[i]<<endl;
		}

		
}	 











