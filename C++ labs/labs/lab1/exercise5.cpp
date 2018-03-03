//Eoin Goslin
//14320856

#include <iostream>
using namespace std;

void showPrime(int num) //method signature, does not return anythin (void)
{

	int prime;
	for(int i =2; i<=num;i++)//will run for how long number in method call is
	{
		prime = 0; 
		
		for(int j=2;j<=i/2;j++) 
		{			
			if(i%j==0)
			{
				prime = 1; 
				break;//will break out of inner loop
			}
		}
		if(prime==0 && num!=1)//If last if statement ran then this one will not run as prime would have been set to 1 
		{
		cout<<i<<" ";//print number
		}
	}
}

int main()
{
	showPrime(5000);//method call

}//end of main
