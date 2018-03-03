#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "MyComplex.h"
 
//#include "MyComplex.h"
using namespace std;

int main()
{
MyComplex comp1(5,10);
MyComplex comp2(20,30);

comp1.print();
MyComplex comp3 = comp1.Add(comp2);//calling Add method passing in comp2
comp1.print();
comp3.print();
comp1.print();
comp2.print();

cout<<"Addition is finished"<<endl;

cout<<"Now trying subtraction"<<endl;

comp3 = comp1.Subtract(comp2);
comp3.print();
cout<<"Finished Subtraction, now doing multiplication :"<<endl;

comp3 = comp1.Multiply(comp2);

comp3.print();








}
