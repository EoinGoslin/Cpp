#ifndef MYCOMPLEX3_H
#define COMPLEX3_H
 
#include <iostream>
#include <string>
using namespace std;

class MyComplex
{

public: //setting methods to be public 
MyComplex(double a, double b);
MyComplex(); 
MyComplex operator+(const MyComplex &z);
MyComplex operator-(const MyComplex &z);
MyComplex operator*(const MyComplex &z);
void print();
double getReal();
double getImage();
void setReal(double x);
void setImage(double y);
 
private://class variables 
double real;
double image;



};
#endif//end of defintion 








