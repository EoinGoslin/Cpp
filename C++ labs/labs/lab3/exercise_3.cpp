//Eoin Goslin
//14320856

#include<iostream>
using namespace std;

int main()
{
	struct person//creating a person that is made up of a name
	{
		string name;
		int age;
	};
	int numPeople;
	string name1;
	int age1;
	cout<<"how many people are we talking about? :"<<endl;
	cin>>numPeople;
	person personArray[numPeople];
	
	for(int i = 0; i <numPeople; i++)//will keep asking until all of the person structs have been given a name and an age
	{
		cout<<"Name :"<<endl;
		cin>>name1;//store name in a variable
		personArray[i].name = name1;//set person to have what is stored in name variable
		cout<<"Age :"<<endl;
		cin>>age1;
		personArray[i].age = age1;//set person to have what is stored in age variable
		
		//cout<<"The name of person "<<i<< " is"<<personArray[i].name<< "and their age is "<<personArray[i].age<<endl;
	}

	for(int j = numPeople-1; j >=0; j--)//will print out the names backwards
	{
		cout<<"The name of person "<<j<< " is "<<personArray[j].name<< " and their age is "<<personArray[j].age<<endl;
	}


}
