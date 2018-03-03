#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "MyComplex3.h"
 

using namespace std;

int main()
{
MyComplex comp1(5,10);
MyComplex comp2(20,30);

comp1.print();
MyComplex comp3 = comp1+(comp2);//using + method as an example of operator overloading 
//calling two methods 
comp1.print();
comp3.print();


cout<<"Addition is finished"<<endl;

cout<<"Now trying subtraction"<<endl;

comp3 = comp1-(comp2);// using - symbol as defined in header file 
comp3.print();
cout<<"Finished Subtraction, now doing multiplication :"<<endl;

comp3 = comp1*(comp2); // * for multiplication 

comp3.print();








}
