#include <iostream>
#include "MyComplex3.h"
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

MyComplex::MyComplex()//default constructor
{
	real = 0;	
	image = 0;
}

MyComplex::MyComplex(double a, double b)
{
	real = a;
	image = b;
	
	
} 

void MyComplex::setReal(double x)
{ 
	real = x;
}

void MyComplex::setImage(double y)
{
	image = y;
}

double MyComplex::getReal()
{
	return real;
}

double MyComplex::getImage()
{
	return image;
}

MyComplex MyComplex::operator+(const MyComplex &z)//must use the word operator same as in header file
{
	MyComplex answer;
	answer.real = real+z.real;
	answer.image = image+z.image;
	return answer;	
		 

}

MyComplex MyComplex::operator-(const MyComplex &z)
{
	MyComplex answer;
	answer.real = real - z.real;
	answer.image = image - z.image;
	return answer;	
		 
 
}

MyComplex MyComplex::operator*(const MyComplex &z)
{
	MyComplex answer;
	answer.real = (real * z.real)-(image * z.image);
	answer.image = (image * z.real) + (real * z.image);
	return answer;
		

}

void MyComplex::print()
{

cout<<real<<" + "<<image<<"i"<<endl;//print funcion does not alter any values, is void so does not return anything just simply prints real and image
}
 








