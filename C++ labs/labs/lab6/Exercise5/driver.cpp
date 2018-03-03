//Eoin Goslin
//14320856



// Chapter 10 of C++ How to Program
// driver for vehicle
#include <iostream>

using std::cout;
using std::endl;

#include <vector>
#include <string>
using namespace std;

using std::vector;

#include "vehicle.h"
#include "parkinglot.h"
#include "taxi.h"
#include "truck.h"


 template <class element, class number>
 void printfunction(element a, number b)//make void
{

	 for(int i = 0; i<b;i++)
	 {

		 cout<<a[i] << " "<<endl;//goes through the array spaces each characters


	 }



}

 template <typename first>
 void otherPrinter(vector<first> myVector)
 {
	 typename vector<first>::iterator i;
	 for(i = myVector.begin(); i !=myVector.end();++i)
	 {

		cout<< *i ;



	 }






 }

 /*for (vector<Vehicle*>::const_iterator i = vehicles.begin(); i !=vehicles.end();++i) //unsigned int because
 		 {
 			 (*i)->horn();
 		 }
 		 */


int main()
{
  Taxi *cab = new Taxi ( 3.3 );
   Truck *mack = new Truck( 7.54 );
   Truck *mack1 = new Truck( 8 );
   Truck *mack2 = new Truck( 13);
   Truck *mack3 = new Truck( 14);
   Truck *mack4 = new Truck( 15 );
   Truck *mack5= new Truck( 12 );
   Truck *mack6 = new Truck( 10 );
   Truck *mack7 = new Truck( 7 );
   Taxi *cab2 = new Taxi ( 7.4 );
   Taxi *cab3 = new Taxi ( 3.7 );



   ParkingLot parkinglot;
   parkinglot.addVehicle(cab);
   parkinglot.addVehicle(mack);
   parkinglot.addVehicle(mack1);
   parkinglot.addVehicle(mack2);
   parkinglot.addVehicle(mack3);
   parkinglot.addVehicle(mack4);
   parkinglot.addVehicle(mack5);
   parkinglot.addVehicle(mack6);
   parkinglot.addVehicle(mack7);
   parkinglot.addVehicle(cab2);
   parkinglot.addVehicle(cab3);





	  parkinglot.printVehicles();

	   //create the int array

	  char array[] = {'H','E', 'L', 'L', 'O'};//string array
	  double numArray[] = {1,5,3,7,8};//creating an array of doubles



	  vector<int>myVector;
	  for(int j = 0; j < 5; j++)
	  {

		  myVector.push_back(j);


	  }




	   //printfunction(array, 5);
	   //printfunction(numArray, 5);
	   otherPrinter(myVector);



















} // end main






/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
