#include <iostream>
#include "MyComplex.h"
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

MyComplex MyComplex::Add(const MyComplex &z)//adds real numbers together and imagninary numbers together respectively
{
	MyComplex answer;
	answer.real = real+z.real;
	answer.image = image+z.image;
	return answer;	
		 

}

MyComplex MyComplex::Subtract(const MyComplex &z)
{
	MyComplex answer;
	answer.real = real - z.real;//accessing real part of reference z
	answer.image = image - z.image;//accessing imaginary part of reference z
	return answer; //return answer so that the original reference (z) has not been altered
		 

}

MyComplex MyComplex::Multiply(const MyComplex &z) //multiplies real and imaginary parts of reference being passed in 
{
	MyComplex answer;
	answer.real = (real * z.real)-(image * z.image);
	answer.image = (image * z.real) + (real * z.image);
	return answer;
		

}

void MyComplex::print()
{

cout<<real<<" + "<<image<<"i"<<endl;
}
 








