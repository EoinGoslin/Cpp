#ifndef MYCOMPLEX_H//placing a guard, if header has not yet been defined, then we will define it
#define COMPLEX_H

#include <iostream>
#include <string>
using namespace std;

class MyComplex
{

public: //setting out method declarations 
MyComplex(double a, double b);
MyComplex(); 
MyComplex Add(const MyComplex &z);
MyComplex Subtract(const MyComplex &z);
MyComplex Multiply(const MyComplex &z);
void print();
double getReal();
double getImage();
void setReal(double x);
void setImage(double y);

private://class variables
double real;
double image;



};
#endif//end of definition 








